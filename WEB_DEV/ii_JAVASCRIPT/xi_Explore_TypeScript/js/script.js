"use strict";
// * Declare a variable with data type:
// let num1: number = '13'; //error
let num2 = 13; //ok
let name1 = 'Sami'; //ok
let Bool = true; //ok
// Set multiple datatype to a variable
let x;
x = 10;
x = '10';
// * Array:
// array of number
let arr1 = [1, 2, 3];
// array of string
let arr2 = ['a', 'abc', 'sami'];
// Other operations are similar as JS
// * Object:
// 1st way
const obj1 = {
    name: 'sami',
    id: 1236
};
// 2nd way
const obj2 = {
    name: 'sami',
    id: 1236
};
const obj3 = {
    name: 'sami',
    id: 1236
};
// * Normal Function:
// .functions of duplicate name not allowed
//declare function, add parameter with dataType and initialize
// error
// function add(n1, n2){}
//1. both are ok, 2nd one is preferable
function add1(n1, n2) {
    return n1 + n2;
}
//2. add return type to a function
function add2(n1, n2) {
    return n1 + n2;
}
// Call the function and pass argument
// add('Sami', 'Sazin'); //error
add2(3, 5); // ok
//Return nothing? use void
function add3(n1, n2) {
    // console.log(n1+n2);
}
// Set multiple datatype to func, parameter..
function add4(n1, n2) {
    if (typeof (n1) === 'number' && typeof (n2) === 'number') {
        return n1 + n2;
    }
    else {
        return '' + n1 + n2;
    }
}
//Object & Function
function func6(stud) {
    console.log('Name : ', stud.name);
    console.log('ID   : ', stud.id);
}
func6({ name: 'sami', id: 1236 });
// * Arrow Function:
//normal arrow func
const func1 = () => {
    //code
};
// void return type
const func2 = () => {
    // code
};
//number return type
const func3 = () => {
    return 10;
};
// with parameter
const func4 = (n1, n2) => n1 + n2;
//or
const func5 = (n1, n2) => {
    return n1 + n2;
};
//name, id, age must be initialize in s1 & s2, otherwise error
//But graduation_year is optional, show no error if not initialize
const s1 = {
    name: 'Sami',
    id: 1236,
    age: 21
};
const s2 = {
    name: 'Samius Sazin',
    id: 1236,
    age: 21,
    graduation_year: 2026,
    courses: ['math', 'phy', 'che']
};
const s3 = {
    job: 'SWE',
    graduation_year: 2026,
    //we must initialize properties of student3 or show error
    name: 'Samius Sazin',
    id: 1236,
    age: 21
};
// * Class in TypeScript
// declare a class
class student4 {
    //constructor
    constructor(name, id, _cgpa) {
        this.name = name;
        this.id = id;
        this._cgpa = _cgpa;
    }
    //normal function
    printInfo() {
        console.log('Name : ', this.name);
        console.log('Id   : ', this.id);
        console.log('CGPA : ', this._cgpa);
    }
    //normal function that returns some value
    returnValue(numb) {
        return numb + numb;
    }
}
//create object of 'student4' class
const s4 = new student4('Sami', 1236, 3.92);
// s4.printInfo();
