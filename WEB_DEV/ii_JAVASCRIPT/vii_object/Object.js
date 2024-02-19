// 1 normal way
const student1 = {name: 'Sami', age: 21};

// or,
const student2 = {};
student2.name = 'Sami';
student2.age = 21;
// print(student 1 & 2) { name: 'Sami', age: 21 }


//2 object way
const student3 = new Object();
student3.name = 'Sami';
student3.age = 21;
// print(student3) { name: 'Sami', age: 21 }

// or,
const student4 = Object.create(null);
//[Object: null prototype] {}

//here with s5 we can access s1's values, but s5 is empty
const student5 = Object.create(student1);// print(student5) {}
// Print(student5.name) = Sami

//change s5.name value
student5.name = 'Sazin'; //print(student5) = 'Sazin'


// 3 function way
function stu_Func(name, age){
    this.name = name;
    this.age = age;
}
const stdent6 = new stu_Func('Sami', 21);
// print(student6) // stuFunc { name: 'Sami', age: 21 }


//4 class way
class stu_Class{
    constructor(name, age){
        this.name = name;
        this.age = age;
    }
}
const student7 = new stu_Class('Sami', 21);
// print(student7) // stu_Class { name: 'Sami', age: 21 }






//key, value, delete, seal, freeze
const alumni = {name: 'Samius Sazin', id: 1236, age: 21,};

// 1 Key/property
const value_of_keys = Object.keys(alumni);
// value_of_keys = [ 'name', 'id', 'age' ]

// 2 value
const value_of_values = Object.values(alumni);
// value_of_values = [ 'Samius Sazin', 1236, 21 ]

// 4 entries, returns an array of pairs of key & value
const show_pair = Object.entries(alumni);
// show pair = [ [ 'name', 'Samius Sazin' ], [ 'id', 1236 ], [ 'age', 21 ] ]

// 5 delete, delete the property
delete alumni.id; //id deleted
// print(alumni) : { name: 'Samius Sazin', age: 21 }

// 6 seal, after seal a object no add, delete cam be ossible, Edit existing properties can possible
Object.seal(alumni);
alumni.age = 20; //possible
// alumni.versity = 'DIU'; // not possible to add new key

// 7 freeze, nothing is possible after freeze an object
Object.freeze(alumni);
// alumni.age = 22; //Edit not possitble
// alumni.versity = 'DIU'; // add new key not possible




/* !!!!!!! LOOP in object !!!!!!!!*/
// in object 'for in' loop used
const stu = {name: 'Samius Sazin', id: 1236, age: 21};

//way 1
for(const key in stu){
    // console.log(key + ' : ' + stu[key]); // stu.key);
}

// way 2 : use keys
const key = Object.keys(stu);
for(const k of key){
    //console.log(k + ' : ' + stu[k]);
}

// way 3 use entries
const entry = Object.entries(stu);
for(const [key, value] of entry){
    //console.log(key + ' : ' + value);
}
/* OUTPUT 
    name : Samius Sazin
    id : 1236
    age : 21
*/


/*!!!! compare objects !!!!!*/
/*
// js check both object's reference, so check with if condition not possible
if(student1 === student2){
    
} */

/* use JSON.stringify()
if(JSON.stringify(student1) === JSON.stringify(student2)){

} */

//Appropriate way
function compareObjecta(){
    //check key length first
    if(Object.keys(student1).length !== Object.keys.apply(student2).length){
        return false;
    }
    //check value
    for(const key in student1){
        if(student1[key] !== student2[key]){
            return false;
        }
    }
    return true;
}


/* !!!! Bind !!!!!*/
const sami = {
    name: 'sami',
    funcSami: function(){
        console.log('This is ', this.name);
    }
}
// sami.funcSami();//This is sami

const rak = {
    name: 'rak',
}

const func = sami.funcSami.bind(rak);//bind(actually pass 'this' parameter of "rak" obj.)
// func(); //This is rak
/*
    func(){
        console.log('This is ', this.name);
        //nad here this refers to rak object's keys
    } 
*/


/*!!!.....Call, Apply (can send argument also along with 'this') ...!!!!*/
const sami2 = {
    name: 'sami',
    funcSami2: function(age, id){
        // console.log(this.name + '\'s age is ' + age + ', ID is ' + id);
    }
}
const rak2 = {
    name: 'rak',
}
//call
sami2.funcSami2.call(rak2, 22, 1236); //rak's age is 22, ID is 1236
//Apply
sami2.funcSami2.apply(rak2, [21, 123]); //rak's age is 21, ID is 123