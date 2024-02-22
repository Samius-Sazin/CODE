import { NavLink } from "react-router-dom"

function Register() {
  return (
    <div>
      <h2>Please Register</h2>
      <form>
        <input type="email" placeholder="Enter email" /> <br />
        <input type="password" placeholder="Enter password"/>
        <input type="submit" value="Register"/>
      </form>
      <NavLink to='/login'>Already registered?</NavLink>
      
    </div>
  )
}

export default Register
