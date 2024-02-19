/* way 1, need to stop manually
console.log(1);

// like setTimeout(). JS do other operations, then execute this part
// This part execute and execute, untill we do not stop it manually.
setInterval(() => {
    console.log(2);
}, 2000);

console.log(3);
*/
// 1, 3, 2, 2, 2, .... untill we stop manually








// clearInterval(id);  stop automatic
//this function returns an id, callled interval id.
//Using this id, setInterval() function can stop by code(not manually)
console.log(1);

let count = 0;
const interval_id = setInterval(() => {
    console.log(`I am setInterval function ${++count}`);

    if(count == 5){
        clearInterval(interval_id);
    }
}, 2000);

console.log(3);
/*
1
3
I am setInterval function 1
I am setInterval function 2
I am setInterval function 3
I am setInterval function 4
I am setInterval function 5
*/