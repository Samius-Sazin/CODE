import { useContext } from "react"
import { MyContext } from "../Context/AuthenticationProvider"

function Home() {

  const {user} = useContext(MyContext);

  return (
    <div>
      <h2>User Details : </h2>
      <h3>Name : {user?.displayName}</h3>
    </div>
  )
}

export default Home
