/* !!!!!!!!!!.........* 2 *........!!!!!!!!! */
// system 2
function makeGreen(){
    document.body.style.backgroundColor = 'Green';
}

// system 3
const pink = document.getElementById('iLovePink');
pink.onclick = makePink;
function makePink(){
    document.body.style.backgroundColor = 'Pink';
}




/* !!!!!!!!!!.........* 2 post here button performed *........!!!!!!!!! */
document.getElementById('post_button').addEventListener('click', function(){
    //get value from text area field
    const getText = document.getElementById('Text_Area').value;
    
    //create a 'P' tag
    const p = document.createElement('p');

    //set text area value to 'P' tag
    p.innerText = getText;

    //get parent tag, set 'p' tag as child
    document.getElementById('paragrap_section').appendChild(p);

    // clear the textArea
    document.getElementById('Text_Area').value = '';
})





/* !!!!!!!!!!.........* 3 delete like git hub *........!!!!!!!!! */
// // focus
// document.getElementById('input_area').addEventListener('focus', function(){
//     document.body.style.backgroundColor = 'Green';
// })

// //blur
// document.getElementById('input_area').addEventListener('blur', function(){
//     document.body.style.backgroundColor = 'white';
// })

// //keydown
// document.getElementById('input_area').addEventListener('keydown', function(){
//     console.log(document.getElementById('input_area').value);
// })

// //keypress
// document.getElementById('input_area').addEventListener('keypress', function(){
//     console.log(document.getElementById('input_area').value);
// })

// keyup(use most of the cases)
// document.getElementById('input_area').addEventListener('keyup', function(){
//     console.log(document.getElementById('input_area').value);
// })

//event parameter helps to get all the information about the input_area
document.getElementById('input_area').addEventListener('keyup', function(event){
    if(event.target.value == 'delete'){
        document.getElementById('delete_button').removeAttribute('disabled');
    }
    else{
        document.getElementById('delete_button').setAttribute('disabled', true);
    }
})

// //change
// document.getElementById('input_area').addEventListener('change', function(){
//     console.log(document.getElementById('input_area').value);
// })

//code that help to delete/hide the certain part
document.getElementById('delete_button').addEventListener('click', function(){
    document.getElementById('text_to_delete').style.display = 'none';
})
/* !!!!!!!!!!.................!!!!!!!!! */