import React, { useEffect, useState } from 'react'
import { Link, useNavigate, useParams } from 'react-router-dom'

function ProductDetails() {
  const { ProductId } = useParams();

  const [product, setProduct] = useState({});

  useEffect(() => {
    fetch(`https://jsonplaceholder.typicode.com/users/${ProductId}`)
      .then(res => res.json())
      .then(data => setProduct(data));
  }, [])

  const navigate = useNavigate();
  const handleButton = () => {
    navigate('/products');
  }

  return (
    <div>
      <h2>Name : {product.name}</h2>
      <h3>User name : {product.username}</h3>
      <h3>Email : {product.email}</h3>
      <h3>Mobile : {product.phone}</h3>
      <h4>Address :</h4>
      <h4>Street : {product.address?.street}</h4>
      <h4>City : {product.address?.city}</h4>
      <h4>Zipcode : {product.address?.zipcode}</h4>
      
      <button onClick={handleButton}>Return to Products</button>
      <br/>
      
      <Link to={`https://www.youtube.com/`}>
        Youtube
      </Link>

    </div>
  )
}

export default ProductDetails
