//OpenWeatherMap ApiKey
const API_KEY = `e1a0cbf9507c4bd9fa9bc004e471d97f`;

document.getElementById('search-button').addEventListener('click', ()=>{
    const search_area = document.getElementById('search-area');
    const search_area_result = search_area.value;

    search_area.value = '';
    
    //fetch
    const URL = `https://api.openweathermap.org/data/2.5/weather?q=${search_area_result}&appid=${API_KEY}&units=metric`;
    fetch(URL)
    .then(res => res.json())
    .then(data => showData(data));
})

//Show weather informations
const showData = (weather_info) => {
    //set city name, country initial
    const place_name = document.getElementById('place-name');
    place_name.innerText = weather_info.name + ', ' + weather_info.sys.country;
    
    //set temperture
    const temperature = document.getElementById('temperature');
    temperature.innerText = weather_info.main.temp;

    //set weather condition
    const weather_condition = document.getElementById('weather-condition');
    weather_condition.innerText = weather_info.weather[0].main;

    //set icon
    const URL_icon = `https://openweathermap.org/img/wn/${weather_info.weather[0].icon}@2x.png`;
    const weather_icon = document.getElementById('weather-icon');
    weather_icon.setAttribute('src', URL_icon);
}