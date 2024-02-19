import { Avatar, Card, CardContent, CardHeader, CardMedia, Typography } from '@mui/material';
import React from 'react'

function ShowNews(props) {
    const {title, description, urlToImage, publishedAt} = props.news;
  return (
    <Card sx={{ maxWidth: 345 }}>
        <CardHeader
            avatar={
            <Avatar aria-label="recipe">
                <CardMedia
                    component="img"
                    height="100"
                    image={urlToImage}
                    alt="img"
                />
            </Avatar>
            }
            
            title={title}
            subheader={publishedAt.slice(0, 10)}
        />
        <CardMedia
            component="img"
            height="194"
            image={urlToImage}
            alt="img"
        />
        <CardContent>
            <Typography variant="body2" color="text.secondary">
                {description}
            </Typography>
        </CardContent>
    </Card>
  )
}

export default ShowNews
