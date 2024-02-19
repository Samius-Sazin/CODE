import { useState } from 'react';
import './App.css';

function App() {
  return (
    <div className="App">
      <MyComponent power="mind"/>
      <MyComponent power="paitience"/>
      <MyComponent power="focus"/>
      <MyComponent power="consistency"/>
      <MyComponent power="hard work"/>
    </div>
  );
}

//Add style to MyComponent
//1st Way: add class/id to div and apply style on App.css file
//2nd way: add inline style
//3rd way: make style object, and apply it to inline style

function MyComponent(props){

  //useState hook
  const [dedicationCount, setDedicationCount] = useState(0);
  
  //Declearing MyStyle
  const MyStyle = {
    backgroundColor: "darkgray",
    border: '2px solid darkorange',
    borderRadius:'10px',
    padding: '10px',
    margin: '0px 400px 5px 400px'
  }
  const ButtonStyle = {
    borderRadius: '5px',
    backgroundColor: 'black',
    color: 'white',
    padding: '10px 20px',
    border: 'none',
    boxShadow: '0 8px 16px 0 rgba(0,0,0,0.2), 0 6px 20px 0 rgba(0,0,0,0.19)',
    cursor: 'pointer',
    marginRight: '20px',
    fontWeight: 'bold',
    fontSize: '16px',
  }

  const handleButton = () => {
    if(dedicationCount >= 10){
      setDedicationCount(prevValue => 'Enough Behenchod');
    }
    else{
      setDedicationCount(prevValue => ++prevValue);
    }
  }

  return(
    <div style={MyStyle}>

      {/* inline style, for dynamic apply {}, for style another {} */}
      <h1 style={{marginBottom:'0px'}}>The most powerfull thing is your {props.power}</h1>
      <p style={{color:'#2e6266', fontWeight:'bold'}}>And only you can control it</p>
      
      <div style={{display:'flex', justifyContent: 'center', alignItems: 'center'}}>
        <button
          style={ButtonStyle}
          // onclick syntex
          onClick={handleButton}
          >Click me
          </button>

          <p style={{fontSize: '20px', fontWeight: 'bold', margin: '0px'}}>Dedication level: {dedicationCount}</p>
      </div>

    </div>
  );
}


export default App;
