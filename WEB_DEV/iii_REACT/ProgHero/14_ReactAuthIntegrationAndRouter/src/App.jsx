import { BrowserRouter as BRouter, Route, Routes } from 'react-router-dom'
import './App.css'
import Home from './Components/Home/Home'
import Login from './Components/Login/Login'
import Register from './Components/Register/Register'
import Header from './Components/Header/Header'
import AtuhenticationProvider from './Components/Context/AuthenticationProvider';
import AuthMiddleware from './middlewares/AuthMiddleware'

function App() {

  return (
    <div className='App'>
      <AtuhenticationProvider>
        <BRouter>

          <Header />

          <Routes>
            <Route path='/' element={<Login />} />
            <Route path='/login' element={<Login />} />
            <Route path='/register' element={<Register />} />

            <Route element={<AuthMiddleware goto="login" />}>
              <Route path='/home' element={<Home />} />
            </Route>

            <Route path='*' element={<Register />} />
          </Routes>

        </BRouter>
      </AtuhenticationProvider>
    </div>
  )
}

export default App
