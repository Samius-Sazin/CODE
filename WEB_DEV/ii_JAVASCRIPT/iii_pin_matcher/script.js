// checking valid input & other functionality
function functionality(input_value, typed_pin_show_area){
    //get the values of typed button
    let typed_pin = '';
    if(input_value.length == 1){
        if(input_value === 'C'){
            typed_pin_show_area.value = '';
        }
        else if(input_value === '<' && input_value.length > 0){
            //get the values of typed button & trim last element
            typed_pin = typed_pin_show_area.value.slice(0, -1);
            //show typed values to screen(typed_pin_show_area)
            typed_pin_show_area.value = typed_pin;
        }
        else{
            //get the values of typed button
            typed_pin = typed_pin_show_area.value + input_value;
            //show typed values to screen(typed_pin_show_area)
            typed_pin_show_area.value = typed_pin;
        }
    }
}

//clearing the notify area
function clear_notify_area(){
    document.getElementById('notify_match').innerText = '';
    document.getElementById('notify_mismatch').innerText = '';
}

let try_count = 3;
//reset try count area
function tryCount(){
    try_count = 3;
    document.getElementById('try_count').innerText = (try_count) + ' try left';
}

//generating random pin
document.getElementById('generate_button').addEventListener('click', function(){
    //set try count to 3
    tryCount();
    
    //clearing the notify area first
    clear_notify_area();
    
    let generated_pin;

    do{
        generated_pin = Math.round(Math.random() * 9999)
    } while(generated_pin < 1000);

    document.getElementById('show_random_pin').value = generated_pin;
})

//keypad_body
document.getElementById('keypad_body').addEventListener('click', function(event){
    //get access of typed_pin_show_area
    const typed_pin_show_area = document.getElementById('typed_pin_show_area');

    // checking valid input & other functionality
    functionality(event.target.innerText, typed_pin_show_area);
})

//submit button
document.getElementById('submit_button').addEventListener('click', function(){
    //clearing the notify area first
    clear_notify_area();
    
    //get access of (show_random_pin, typed_pin_show_area)
    const show_random_pin = document.getElementById('show_random_pin');
    const typed_pin_show_area = document.getElementById('typed_pin_show_area');

    if(isNaN(typed_pin_show_area.value) || typed_pin_show_area.value.length != 4){
        alert("Insert valid PIN");
        typed_pin_show_area.value = '';
    }
    else if(show_random_pin.value === ''){
        alert("Generate PIN first");
        typed_pin_show_area.value = '';
    }
    else{
        //match checking
        if(show_random_pin.value == typed_pin_show_area.value){
            document.getElementById('notify_match').innerText = "✅ Pin Matched... Secret door is opening for you";
            show_random_pin.value = '';
            typed_pin_show_area.value = '';

            //set try count to 3
            tryCount();
        }
        else{
            document.getElementById('notify_mismatch').innerText = "❌ Pin Didn't Match, Please try again";
            typed_pin_show_area.value = '';

            document.getElementById('try_count').innerText = (--try_count) + ' try left';

            if(try_count == 0){
                document.getElementById("submit_button").disabled = true;
                document.getElementById('notify_mismatch').innerText = "❌ Blocked Permanently. Generate new PIN";
            }
        }
    }
})