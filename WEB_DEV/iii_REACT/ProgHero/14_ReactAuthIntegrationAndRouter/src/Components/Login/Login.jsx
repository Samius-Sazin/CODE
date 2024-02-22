import { useContext } from 'react';
import { NavLink } from 'react-router-dom';
import { MyContext } from '../Context/AuthenticationProvider';

function Login() {
    const { signInWithGoogle } = useContext(MyContext);

    return (
        <div>
            <h2>Please Login</h2>
            <button onClick={signInWithGoogle}>Login with google</button> <br />

            <NavLink to="/register">New User?</NavLink>
        </div>
    )
}

export default Login
