//method that help "withdraw, deposit" button
function transaction_haldle(get_trans_element, new_previous_trans, trans_type){
    //get previous balance element
    const new_balance = document.getElementById('previous_balance');

    //check if ammount is valid or not
    if(get_trans_element.value === '' || isNaN(get_trans_element.value) || parseInt(get_trans_element.value) <= 0){
        alert('Invalid Entry');
    }
    else if(trans_type == 'withdraw' && parseInt(get_trans_element.value) > parseInt(new_balance.innerText.substring(1))){
        alert('Not enough balance');
    }
    else{
        //update deposit/withdraw part
        new_previous_trans.innerText = '$' + (parseInt(new_previous_trans.innerText.substring(1)) + parseInt(get_trans_element.value));

        //update balance area
        if(trans_type == 'deposit'){
            new_balance.innerText = '$' + (parseInt(new_balance.innerText.substring(1)) + parseInt(get_trans_element.value));
        }
        else if(trans_type == 'withdraw'){
            new_balance.innerText = '$' + (parseInt(new_balance.innerText.substring(1)) - parseInt(get_trans_element.value));
        }
    }
    //clear the deposit/withdraw input area
    get_trans_element.value = '';
}

// handle "deposit" button event
document.getElementById('deposit_button').addEventListener('click', function(){
    // passing parameters to function(deposit_element, prev_deposit_element)
    transaction_haldle(document.getElementById('deposit_input_area'), document.getElementById('previous_deposit'), 'deposit');
})

// handle "withdraw" button event
document.getElementById('withdraw_button').addEventListener('click', function(){
    // passing parameters to function(withdraw_element, prev_withdraw_element)
    transaction_haldle(document.getElementById('withdraw_input_area'), document.getElementById('previous_withdraw'), 'withdraw');
})