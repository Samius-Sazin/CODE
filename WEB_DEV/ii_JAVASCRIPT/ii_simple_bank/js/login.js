//Checking password & userName
document.getElementById('submit_button').addEventListener('click',  function(){
    const get_user_name = document.getElementById('user_name').value;
    const get_password = document.getElementById('pass_word').value;
    
    if(get_user_name == 'sazin' && get_password == 'sazin1234'){
        // alert('Tuu login ho geya re, tension nehi leneka ree');

        document.getElementById('user_name').value = '';
        document.getElementById('pass_word').value = '';

        // jumping to secondPage html file
        window.location.href = 'secondpage.html';
    }
    else{
        alert('Galat Password re baba, firse achhese thikse daal');
        document.getElementById('pass_word').value = '';
    }
})