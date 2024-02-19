//parent class
class Student{
    id;
    name;
    age;
    constructor(id, name, age){
        this.id = id;
        this.name = name;
        this.age = age;
    }
    printStudentData(){
        console.log("Id : " + this.id);
        console.log("Name : " + this.name);
        console.log("Age : " + this.age);
        console.log('\n');
    }
}

// child class
class Alumni extends Student{
    job;
    passing_year;

        // //must write super() keyword
        // //it pass values to parent constructor
        // //there can be only 1 super keyword
    // constructor(job, passing_year){
    //     super();
    //     this.job = job;
    //     this.passing_year = passing_year;
    // }
    constructor(id, name, age, job, passing_year){
        super(id, name, age);//call to parent constructor
        this.job = job;
        this.passing_year = passing_year;
    }
    printAlumniData(){
        console.log("Job : " + this.job);
        console.log("Passing Year : " + this.passing_year);
        console.log('\n');
    }
}

// const a1 = new Alumni('swEngineer', 2026);
const a1 = new Alumni(1236, 'samius sazin', 21, 'swEngineer', 2026);
a1.printStudentData();
a1.printAlumniData();
/*
Id : 1236
Name : samius sazin
Age : 21

Job : swEngineer
Passing Year : 2026
*/


const a2 = new Alumni();
a2.id = 3636;
a2.name = 'sami sazin';
a2.age = 21;
a2.job = 'swEng';
a2.passing_year = 26;
a2.printStudentData();
a2.printAlumniData();
/*
Id : 3636
Name : sami sazin
Age : 21

Job : swEng
Passing Year : 26
*/

console.log(a2.__proto__);