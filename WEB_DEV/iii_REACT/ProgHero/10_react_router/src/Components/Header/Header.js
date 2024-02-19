import React from 'react';
import './Header.css'
import { Link, NavLink } from 'react-router-dom'

function Header() {
  return (
    <div className='mainheader'>
      <nav className='header'>
        <NavLink to="/home" className='link'>Home</NavLink>
        <Link to="/about" className='link'>AboutUs</Link>
        <Link to="/products" className='link'>Products</Link>
      </nav>
    </div>
  )
}

export default Header
