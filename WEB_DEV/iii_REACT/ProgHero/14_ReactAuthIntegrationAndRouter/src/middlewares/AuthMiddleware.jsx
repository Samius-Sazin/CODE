import { useContext } from "react";
import { Outlet, Navigate } from "react-router-dom";
import { MyContext } from "../Components/Context/AuthenticationProvider";

function AuthMiddleware() {
    const { user } = useContext(MyContext);

    return(
        user?.email ? <Outlet/> : <Navigate to={{pathname:"/login", replace: true}} />
    )
}

export default AuthMiddleware
