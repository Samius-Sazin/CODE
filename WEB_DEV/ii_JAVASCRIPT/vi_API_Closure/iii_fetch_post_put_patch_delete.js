// post
fetch('https://jsonplaceholder.typicode.com/posts', {
    method: 'POST',

    body: JSON.stringify({
        id: 1,
        name: 'samius sazin',
        age: 21,
    }),

    headers: 
    {
        'Content-type': 'application/json; charset=UTF-8',
    },
})
.then(res => res.json())
.then(data => console.log(data));
console.log('\n');


//put (if another exists, remove first one)
fetch('https://jsonplaceholder.typicode.com/posts', {
    method: 'PUT',

    body: JSON.stringify({
        id: 1,
        name: 'Samius Sazin',
        age: 21,
    }),

    headers: {
        'Content-type': 'application/json; charset=UTF-8',
    }
})
.then(res => res.json())
.then(data => console.log(data));



//patch (update data)
fetch('https://jsonplaceholder.typicode.com/posts/1', {
    method:'PATCH',

    body: JSON.stringify({
        name: 'Sami Sazin',
    }),

    headers: {
        'Content-type': 'application/json; charset=UTF-8',
    },
})
.then(res => res.json())
.then(data => console.log(data));


//Delete
fetch('https://jsonplaceholder.typicode.com/posts/1', {
  method: 'DELETE',
});