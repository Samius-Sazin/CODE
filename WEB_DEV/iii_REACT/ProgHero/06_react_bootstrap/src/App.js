import { useEffect, useState } from 'react';
import News from './Component/News/News';

import 'bootstrap/dist/css/bootstrap.min.css';
import { Row, Spinner } from 'react-bootstrap';

function App() {

  const [news, setNews] = useState([]);

  useEffect(() => {
    fetch('https://newsapi.org/v2/everything?q=tesla&from=2024-01-03&sortBy=publishedAt&apiKey=61cc647258b945fbb57f02e664c9539a')
    .then(res => res.json())
    .then(data => setNews(data.articles));
  }, [])
  
  return (
    <>
      <div style={{textAlign:"center"}}>
        {
          news.length === 0
          ? <Spinner animation="border" />
          :
          <Row xs={1} md={4} className="g-4">
            {
              news.map(newws => <News news={newws}/>)
            }
          </Row> 
        }
      </div>
    </>
  );
}

export default App;
