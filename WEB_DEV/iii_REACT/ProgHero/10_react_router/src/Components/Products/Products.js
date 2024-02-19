import React, { useEffect, useState } from 'react'
import Product from '../Product/Product';

function Products() {

    const [products, setProducts] = useState([]);

    useEffect(() => {
        fetch('https://jsonplaceholder.typicode.com/users')
            .then(res => res.json())
            .then(data => setProducts(data));
    }, [])

    const styleee = {
        display:"grid",
        gridTemplateColumns:"repeat(3, 1fr)",
        gridGap:"10px",
        margin:"0px 20px",
    }

    return (
        <div>
            <h1>Total Products : {products.length}</h1>
            <h3>Buy Something !!!...</h3>
            <div style={styleee}>
                {
                    products.map(product => <Product
                        product={product}
                        key={product.id}
                    />)
                }
            </div>
        </div>
    )
}

export default Products
