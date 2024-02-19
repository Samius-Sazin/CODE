import {useState, useEffect} from 'react';
import './App.css';

function App() {
  return (
    <GetInformation />
  );
}

//get an array of objects of info by calling the api
//send each object to PrintInfo component
function GetInformation(){
  const [info, setInfo] = useState([]);

  //get info by calling api
  useEffect(() => {
    fetch(`https://jsonplaceholder.typicode.com/users`)
    .then(res => res.json())
    .then(data => setInfo(() => data));
  }, [])

  // returned to app component
  return (
    <>
      <h1 style={{textAlign:'center', color:'White'}}>Total users found : {info.length}</h1>
      <div>
          {
            // js in html, send each object to printInfo cmponent
            info.map(user => <PrintInfo userInfo={user}/>)
          }
      </div>
    </>
  )
}


//for ptint users info
//props receive an object userInfo, access -> 'props.userInfo.Id'
function PrintInfo(props){
  const MyStyle = {
    backgroundColor: "darkgray",
    border: '2px solid darkorange',
    borderRadius:'10px',
    padding: '10px',
    margin: '0px 450px 10px 450px',
  }
console.log(props.userInfo.address);
  // returned to GetInformation component
  return (
    <>
      <div style={MyStyle}>
        <div style={{margin:'0px 50px'}}>
          <h2>User id: {props.userInfo.id}</h2>
          <h3>Full name: {props.userInfo.name} ({props.userInfo.username})</h3>
          <h3>Email: {props.userInfo.email}</h3>
          <h4>Phone: {props.userInfo.phone}</h4>
          <h4>Address: {props.userInfo.address.city}, {props.userInfo.address.street}, {props.userInfo.address.zipcode}</h4>

        </div>
      </div>
    </>
  )
}


export default App;
