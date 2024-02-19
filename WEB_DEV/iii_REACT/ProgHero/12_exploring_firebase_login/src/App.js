import './App.css';
import { getAuth, signInWithPopup, GoogleAuthProvider, GithubAuthProvider, signOut } from "firebase/auth";
import initializeAuthentication from './FIREBASE/firebase.initialize';
import { useState } from 'react';

//call the initialize function
initializeAuthentication();

// for google signIn
const googleProvider = new GoogleAuthProvider();
//for github sign in
const githubProvider = new GithubAuthProvider();

function App() {
  const [user, setUser] = useState({});

  // handle Google Sign In Button
  const handleGoogleSignInButton = () => {
    const auth = getAuth();

    // This gives you a Google Access Token. Access the Google API.
    signInWithPopup(auth, googleProvider)
      .then(result => {
        const { displayName, email, photoURL } = result.user;

        const logedInUser = {
          name: displayName,
          email: email,
          url: photoURL,
        }

        setUser(logedInUser);
      })
      .catch(error => {
        console.log(error.message);
        // console.log(error.code);
        // console.log(error.email);
      })
  }

  //handle Github Sign In Button
  const handleGithubSignInButton = () => {
    const auth = getAuth();
    signInWithPopup(auth, githubProvider)
      .then(result => {
        const { displayName, email, photoURL } = result.user;

        const logedInUser = {
          name: displayName,
          email: email,
          url: photoURL,
        }

        setUser(logedInUser);
      })
      .catch(error => {
        console.log(error.message);
      })
  }


  //handle Sign Out Button
  const handleSignOutButton = () => {
    const auth = getAuth();

    signOut(auth)
      .then(() => {
        setUser({});
      })
      .catch((error) => {
        console.log(error.message);
      })
  }

  return (
    <div className='App'>
      {
        (!user.name) ? 
        <div>
          <button onClick={handleGoogleSignInButton}>Log in with google</button>
          <br />
          <button onClick={handleGithubSignInButton}>Sign in with Github</button>
          <br />
        </div> :
        <button onClick={handleSignOutButton}>Sign out</button>
      }
      <br />
      {
        user.email && <div>
          <h2>Welcome : {user.name}</h2>
          <h3>Email : {user.email}</h3>
          <img src={user.url} alt='img' />
        </div>
      }

    </div>
  );
}

export default App;