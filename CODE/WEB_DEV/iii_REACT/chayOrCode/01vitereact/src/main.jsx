/* eslint-disable no-unused-vars */
import React from 'react';
import ReactDOM from 'react-dom/client';
//1
import App from './App.jsx'

//2
function Myapp(){
    return(
        <> 
            <h3>Hi this is Myapp function from main.js | sami</h3>
        </>
    )
}
export default Myapp

//3
const AnotherReactElement = (
    <a href="https://google.com" target='_main'>I am google.com</a>
);


//4
// const ReactElement = {
//     type: 'a',
//     props: {
//         href: 'https://google.com',
//         target: '_blank'
//     },
//     children: 'click me to visit google'
// }

// 5
// react.createElement takes tag, attributes, innerText as parameter
const reactElement = React.createElement(
    'a',
    {href: 'https://google.com', target:'_main'},
    'Click me for google search'
)



ReactDOM.createRoot(document.getElementById('root')).render(
    //1
    <App />

    // 2 both syntex are onkeydown, 1st one is good
    // <Myapp />
    // Myapp()

    //3
    // AnotherReactElement

    //4
    // ReactElement //Not work

    //5
    // reactElement
)
