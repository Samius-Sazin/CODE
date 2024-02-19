import {Button, Rating} from '@mui/material';
import News from './Components/News/News';

function App() {
  return (
    <div style={{textAlign:'center'}}>
      <Button variant='contained'>Click Here</Button> <br/>
      <Rating name="read-only" value={3} readOnly />
      <News/>
    </div>
  );
}

export default App;
