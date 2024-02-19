import './App.css';

// import Routes instead of Switch
import { BrowserRouter as BRouter, Routes, Route } from 'react-router-dom';

import Products from './Components/Products/Products';
import About from './Components/About/AboutUs';
import Home from './Components/Home/Home';
import ErrorNotFound from './Components/ErrorNotFound/ErrorNotFound'
import Header from './Components/Header/Header';
import ProductDetails from './Components/ProductDetails/ProductDetails';


function App() {

  return (
    <div className='App'>
      <BRouter>
        <Header/>

        <Routes>

          <Route
            path='/'
            element={<Home />}
          ></Route>

          <Route
            path='/home'
            element={<Home />}
          ></Route>

          <Route
            path='/about'
            element={<About />}
          ></Route>

          <Route
            path='/products'
            element={<Products />}
          ></Route>

          <Route
            path='/product/:ProductId'
            element={<ProductDetails />}
          ></Route>

          <Route
            path='*'
            element={<ErrorNotFound />}
          ></Route>

        </Routes>
      </BRouter>
    </div>
  );
}

export default App;
