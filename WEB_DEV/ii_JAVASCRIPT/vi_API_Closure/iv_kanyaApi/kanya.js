// using arrow function
const kanyaFetchFunction = () => {
    fetch('https://api.kanye.rest/')
    .then(res => res.json())
    .then(data => displayKanyaFunction(data));
}

const displayKanyaFunction = quote => {
    //get html element
    const kanya_quote = document.getElementById('kanya_quote');

    kanya_quote.innerText = quote.quote;
}