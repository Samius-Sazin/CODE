import React, { useEffect, useState } from 'react';
import { Grid } from '@mui/material';
import { Box } from '@mui/system';
import ShowNews from '../ShowNews/ShowNews';


function News() {

    const [news, setNews] = useState([]);

    useEffect(() => {
        fetch('https://newsapi.org/v2/everything?q=apple&from=2024-02-02&to=2024-02-02&sortBy=popularity&apiKey=61cc647258b945fbb57f02e664c9539a')
        .then(res => res.json())
        .then(data => setNews(data.articles));
    }, [])

    return (
        <div>
            <Box sx={{ flexGrow: 1 }}>
                <Grid container spacing={{ xs: 2, md: 3 }} columns={{ xs: 4, sm: 8, md: 12 }}>
                    {
                        news.map(newws => 
                            <Grid item xs={2} sm={4} md={4}>
                                <ShowNews news={newws} />
                            </Grid>    
                        )
                    }
                </Grid>
            </Box>
        </div>
    )
}

export default News
