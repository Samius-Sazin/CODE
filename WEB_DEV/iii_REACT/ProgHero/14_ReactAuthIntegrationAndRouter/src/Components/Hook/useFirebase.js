/* eslint-disable react-hooks/exhaustive-deps */
import { useEffect, useState } from "react";
import initializeAuthentication from "../../Firebase/firebase.initialize";
import { GoogleAuthProvider, getAuth, signInWithPopup, onAuthStateChanged, signOut } from "firebase/auth";

initializeAuthentication();

const useFirebase = () => {
    const [user, setUser] = useState({});
    const [error, setError] = useState('');

    const auth = getAuth();
    const googleProvider = new GoogleAuthProvider();

    const signInWithGoogle = () => {
        signInWithPopup(auth, googleProvider)
            .then(result => {
                console.log(result.user);
                setUser(result.user);
            })
            .catch(error => {
                setError(error);
                console.log(error);
            })

    }

    useEffect(() => {
        onAuthStateChanged(auth, user => {
            if (user) {
                setUser(user);
            }
        })
    }, [])

    const logOut = () => {
        signOut(auth)
            .then(() => {
                setUser({});
            })
            .catch(error => {
                setError(error);
            })
    }


    return {
        user,
        error,
        signInWithGoogle,
        logOut,
    }
}

export default useFirebase;