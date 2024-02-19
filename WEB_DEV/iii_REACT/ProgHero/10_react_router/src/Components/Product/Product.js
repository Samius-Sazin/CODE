import React from 'react'
import { Link, useNavigate } from 'react-router-dom';

function Product(props) {

    const {id, name, username, email } = props.product;

    const navigate = useNavigate();

    const stylee = {
        backgroundColor:"#010313",
        padding:"5px",
        borderRadius:"20px",
        border:"2px solid gray",
        color:"darkgray"
    }
    const stle = {
        textDecoration:"none",
        fontSize:"18px",
        color:"lightblue",
    }

    const handleClickButton = () => {
        navigate(`/product/${id}`);
    }

    return (
        <div style={stylee}>
            <h3>{id}</h3>
            <h3>{name} ({username})</h3>
            <h4>{email}</h4>

            {/* way 1 */}
            <Link to={`/product/${id}`} style={stle}>Visit Here_1</Link>
            <br/>
        
            {/* way 2 */}
            <Link to={`/product/${id}`}>
                <button>Visit Here_2</button>
            </Link>
            <br/>

            {/* way 3 */}
            <button onClick={handleClickButton}>
                Visit Here_3
            </button>
        
        </div>
    )
}

export default Product