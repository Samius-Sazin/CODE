class Student{
    id;
    name;
    age;

    //A class may only have one constructor

    //defult constructor
    //no need to write defult constructor
    //there is always a defult constructor in js class
    //no matter if another user define constructor is there
    // constructor(){}

    //user defined constructor
    constructor(id, name, age){
        this.id = id;
        this.name = name;
        this.age = age;
    }

    //normal function
    printData(){
        console.log("Id : " + this.id);
        console.log("Name : " + this.name);
        console.log("Age : " + this.age);
        console.log('\n');
    }
}

//create object of Student class
const s1 = new Student();//create obj using defult constructor
s1.id = 3636;
s1.name = 'sami sazin';
s1.age = 21;
s1.printData();
/*
Id : 3636
Name : sami sazin
Age : 21
*/


const s2 = new Student(1236, 'Samius Sazin', 21);//create obj using user defined constructor
s2.printData();
/*
Id : 1236
Name : Samius Sazin
Age : 21
*/