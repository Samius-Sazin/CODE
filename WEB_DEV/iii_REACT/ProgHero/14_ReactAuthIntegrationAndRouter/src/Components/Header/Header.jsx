import { NavLink } from "react-router-dom";
import './Header.css';
import { useContext } from "react";
import { MyContext } from "../Context/AuthenticationProvider";

function Header() {
  const { user, logOut } = useContext(MyContext);
  return (
    <div>
      <NavLink className="navlink" to="/home">Home</NavLink>
      <NavLink className="navlink" to="/register">Register</NavLink>
      <NavLink className="navlink" to="/login">Login</NavLink>
      {
        user.email && <div>
          <span>{user.displayName} </span>
          <button onClick={logOut}>Logout</button>
        </div>
      }
    </div>
  )
}

export default Header
