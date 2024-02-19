import { useState } from 'react';
import './App.css';
import initializeAuthentication from './Firebase/firebase.initialize';
import { getAuth, signInWithPopup, GoogleAuthProvider, createUserWithEmailAndPassword, signInWithEmailAndPassword, sendEmailVerification, sendPasswordResetEmail, updateProfile } from "firebase/auth";

//call the initialize function
initializeAuthentication();

//for google log in
const googleProvider = new GoogleAuthProvider();

function App() {

  const auth = getAuth();

  const handleGoogleSignInBtn = () => {
    signInWithPopup(auth, googleProvider)
      .then((result) => {
        const logedInUser = result.user;
        console.log(logedInUser);
      })
      .catch(error => {
        console.log(error);
      });
  }

  const [name, setName] = useState('');
  const [email, setEmail] = useState('');
  const [password, setPassword] = useState('');
  const [error, setError] = useState('');
  const [registered, setRegistered] = useState(false);

  const handleNameInput = e => {
    setName(e.target.value);
  }

  //getting value from Email input area
  const handleEmailInput = e => {
    setEmail(e.target.value);
  }

  //getting value from password input area
  const handlePasswordInput = e => {
    setPassword(e.target.value);
  }

  const handleRegisterCheckBox = e => {
    setRegistered(e.target.checked);
  }

  //handle register Button
  const handleRegisterOrLoginButton = e => {
    //prevent page to reload
    e.preventDefault();

    if (registered) {
      signInWithEmailAndPassword(auth, email, password)
        .then(result => {
          const user = result.user;
          console.log(user);
          setError('');
        })
        .catch(error => {
          setError(error.message);
        })
    }
    else {
      if (!/(?=.*[A-Z])(?=.*[!@#$&*])(?=.*[0-9])(?=.*[a-z]).{6}/.test(password)) {
        setError("Use a strong Password!!")
        return;
      }

      createUserWithEmailAndPassword(auth, email, password)
        .then(result => {
          //call this method for sending a varification email
          sendVarificationEmail();

          updateProfile(auth.currentUser, { displayName: name })
            .then(() => { 
            })
            .catch(error => {
              setError(error.message);
            });

            setError('');
        })
        .catch(error => {
          setError(error.message);
        })
    }
  }

  const sendVarificationEmail = () => {
    sendEmailVerification(auth.currentUser)
      .then(result => {
        console.log(result);
        setError('');
      })
      .catch(error => {
        setError(error.message);
      })
  }

  const handleResetPassword = () => {
    sendPasswordResetEmail(auth, email)
      .then(result => {
        console.log(result.user);
        setError('');
      })
      .catch(error => {
        setError(error.message);
      })
  }

  return (
    <div className='mx-5 my-5'>

      <form onSubmit={handleRegisterOrLoginButton}>
        <h3 className='text-primary mb-5'>Please {registered ? "Login" : "Register"} : </h3>

        {
          !registered &&
          <div className="row mb-3">
            <label htmlFor="inputName3" className="col-sm-2 col-form-label">Name</label>
            <div className="col-sm-10">
              <input onBlur={handleNameInput} type="name" className="form-control" placeholder='Enter your name' required />
            </div>
          </div>
        }

        <div className="row mb-3">
          <label htmlFor="inputEmail3" className="col-sm-2 col-form-label">Email</label>
          <div className="col-sm-10">
            <input onBlur={handleEmailInput} type="email" className="form-control" placeholder='Enter your email' required />
          </div>
        </div>

        <div className="row mb-3">
          <label htmlFor="inputPassword3" className="col-sm-2 col-form-label">Password</label>
          <div className="col-sm-10">
            <input onBlur={handlePasswordInput} type="password" className="form-control" placeholder='Enter password' required />
          </div>
        </div>

        <div className="row mb-3">
          <div className="col-sm-10 offset-sm-2">
            <div className="form-check">
              <input onChange={handleRegisterCheckBox} className="form-check-input" type="checkbox" id="gridCheck1" />
              <label className="form-check-label" htmlFor="gridCheck1">
                Already Registered?
              </label>
            </div>
          </div>

          <div className='col-sm-10 offset-sm-2 mt-3 text-danger'>
            {error}
          </div>
        </div>

        <button type="submit" className="btn btn-primary">{registered ? "Login" : "Register"}</button>
        <button onClick={handleResetPassword} type="button" className="btn btn-secondary ms-5">Reset Password</button>
      </form>

      <br /> <br />
      <p>_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _</p>
      <button onClick={handleGoogleSignInBtn}>Google Log In</button>
    </div>
  );
}

export default App;
