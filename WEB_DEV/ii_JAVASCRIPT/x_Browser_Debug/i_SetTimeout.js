function print4(){
    console.log(4);
}

console.log(1);
console.log(2);
console.log(3);

// setTimeout(functionName, time(mili_second));
// JS do other operations first, then execute this setTimeout()
/* But which setTimeout function comes first, execute first
   if there are multiple setTimeout function and both times are same */

setTimeout(print4);

setTimeout(print4, 1000);

setTimeout(() => {
    console.log(4.5);
},1000);

console.log(5);

/*
1, 2, 3, 5, 4, 4, 4.5
*/