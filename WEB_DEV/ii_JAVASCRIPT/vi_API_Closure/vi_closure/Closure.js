//practice 1
function increment(){
    let a = 1;
    return function(){
        return a++;
    }
}

// const get_increment = increment();
// console.log(get_increment());//2
// console.log(get_increment());//3

//practice 2
const sum = function(){
    let a = 5;

    //return an object
    return {
        sum_1: function(b){
            return a+b;
        },
        sum_2: function(c){
            return a+c;
        }
    }
}

let get_sum = sum();

// console.log(get_sum);
/*
get_sum contains a object, that contains 2 function
    {
    sum_1: [Function: sum_1],
    sum_2: [Function: sum_2]
    }
*/

// console.log(get_sum.sum_1); //[Function: sum_1]
// console.log(get_sum.sum_2); //[Function: sum_2]

console.log(get_sum.sum_1(2)); //7
console.log(get_sum.sum_2(3)); //8