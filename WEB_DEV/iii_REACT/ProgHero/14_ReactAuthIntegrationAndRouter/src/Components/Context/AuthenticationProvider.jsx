/* eslint-disable react/prop-types */
import { createContext } from "react";
import useFirebase from "../Hook/useFirebase";

export const MyContext = createContext();

function AtuhenticationProvider( props ) {
    const allContext = useFirebase();
    
    return (
        <MyContext.Provider value={allContext}>
            {props.children}
        </MyContext.Provider>
    )
}
export default AtuhenticationProvider
