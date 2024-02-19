import { NavLink } from 'react-router-dom';
import './Header.css';

function Header() {

  const navLinkStyle = ({ isActive }) => {
    return {
      textDecoration: isActive ? 'underline' : 'none',
    }
  }

  return (
    <div>
      <div className='text-center mt-3 mb-5'>
        <h1 className='text-4xl underline underline-offset-8 decoration-[#f77000]'><span className='text-[#f77000]'>sain's</span> eLearning Hub</h1>
      </div>

      <div className='mx-auto py-5 px-5 w-3/6 rounded-xl bg-black text-black mt-3 text-center text-2xl font-semibold'>

        <NavLink
          style={navLinkStyle}
          className="px-7 py-1 rounded-xl mx-3 bg-[#f77000] hover:bg-[#c45902]"
          to={'/home'}
        >Home</NavLink>

        <NavLink
          style={navLinkStyle}
          className="px-7 py-1 rounded-xl mx-3 bg-[#f77000] hover:bg-[#c45902]"
          to={'/courses'}
        >Courses</NavLink>

        <NavLink
          style={navLinkStyle}
          className="px-7 py-1 rounded-xl mx-3 bg-[#f77000] hover:bg-[#c45902]"
          to={'/my-courses'}
        >My Courses</NavLink>

        <NavLink
          style={navLinkStyle}
          className="px-7 py-1 rounded-xl mx-3 bg-[#f77000] hover:bg-[#c45902]"
          to={'/about-us'}
        >About us</NavLink>

      </div>
    </div>
  )
}

export default Header
