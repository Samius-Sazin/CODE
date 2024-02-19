const buttonClick = () => {
    const search_field = document.getElementById('search_field');
    const search_text = search_field.value;

    //clear search box text
    search_field.value = '';

    if(search_text == ''){
      const search_box_empty = document.getElementById('each_meal_details');
      search_box_empty.textContent = '';

      const div = document.createElement('div');
      div.classList.add('card');
      div.innerHTML = `
        <div class="card-body">
            <h5 class="card-title text-center">Enter a food name please</h5>
        </div>`;
        search_box_empty.appendChild(div);
    }
    else{

          //load data
          const url = `https://www.themealdb.com/api/json/v1/1/search.php?s=${search_text}`;
          fetch(url)
          .then(res => res.json())
          .then(data => showSearchResult(data.meals));
    }
    
}

const showSearchResult = meals => {
    const search_result = document.getElementById('search_result');
    
    // //clear the load area first, not appropriate
    // search_result.innerHTML =``;
    search_result.textContent = '';

    //if result not found
    const food_not_found_msg = document.getElementById('each_meal_details');
    food_not_found_msg.textContent = '';

    if(!Array.isArray(meals)){
      const div = document.createElement('div');
      div.classList.add('card');
      div.innerHTML = `
        <div class="card-body">
            <h5 class="card-title text-center">Food Not Found</h5>
        </div>`;
        food_not_found_msg.appendChild(div);
    }
    else{
      meals.forEach(meal => {
        const div = document.createElement('div');
        div.classList.add('col');
        div.innerHTML = `
        <div onclick="loadDetails(${meal.idMeal})" class="card h-100">
          <img style="width: 200px;" src="${meal.strMealThumb}" class="card-img-top mx-auto" alt="img">
          <div class="card-body">
            <h5 class="card-title text-center">${meal.strMeal}</h5>
            <p class="card-text">${meal.strInstructions.slice(0, 250)}</p>
          </div>
        </div>`;
        search_result.appendChild(div);
      })
    }   
}

//load details
const loadDetails = async id => {
    const url = `https://www.themealdb.com/api/json/v1/1/lookup.php?i=${id}`;
    // fetch(url)
    // .then(res => res.json())
    // .then(data => displayDetail(data.meals[0]));

    //another way to do fetch
    const res = await fetch(url);
    const data = await res.json();
    displayDetail(data.meals[0]);
}

//show meal details
const displayDetail = meal => {
    const each_meal_details = document.getElementById('each_meal_details');
    
    //clear first
    each_meal_details.textContent = '';

    const div = document.createElement('div');
    div.classList.add('card');
    div.innerHTML = `
      <img style="width: 200px;" src="${meal.strMealThumb}" class="card-img-top mx-auto" alt="img">
      <div class="card-body">
          <h5 class="card-title">${meal.strMeal}</h5>
          <p class="card-text">Category : ${meal.strCategory}</p>
          <p class="card-text">Area : ${meal.strArea}</p>
          <p class="card-text">Ingradient : ${meal.strIngredient1}, ${meal.strIngredient2}, ${meal.strIngredient3}, ${meal.strIngredient4}</p>
          <a href="${meal.strYoutube}" class="btn btn-primary" target="_main">Go somewhere</a>
      </div>`;
      each_meal_details.appendChild(div);
}