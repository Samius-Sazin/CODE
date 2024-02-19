import { BrowserRouter, Route, Routes } from 'react-router-dom';
import './App.css';
import Header from './COMPONENTS/HEADER/Header';
import Home from './COMPONENTS/HOME/Home';
import Footer from './COMPONENTS/FOOTER/Footer';
import Courses from './COMPONENTS/COURSES/Courses';
import AboutUs from './COMPONENTS/ABOUTuS/AboutUs';
import MyCourses from './COMPONENTS/MyCOURSES/MyCourses';
import NotFound from './COMPONENTS/NOT_FOUND/NotFound';

function App() {
  return (
    <>
      <BrowserRouter>
        <Header />

        <Routes>

          <Route
            path='/'
            element={<Home/>}
          ></Route>

          <Route
            path='/home'
            element={<Home/>}
          ></Route>

          <Route
            path='/courses'
            element={<Courses />}
          ></Route>

          <Route
            path='/about-us'
            element={<AboutUs />}
          ></Route>

          <Route
            path='/my-courses'
            element={<MyCourses />}
          ></Route>

          <Route
            path='*'
            element={<NotFound />}
          ></Route>

        </Routes>

        <Footer/>
      </BrowserRouter>
    </>
  );
}

export default App;
