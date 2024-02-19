// * Declare a variable with data type:
	// let num1: number = '13'; //error
	let num2: number = 13;   //ok
	let name1: string = 'Sami'; //ok
	let Bool: boolean = true; //ok

	// Set multiple datatype to a variable
	let x: number | string;
    x = 10;
    x = '10';

// * Array:
	// array of number
	let arr1: number[] = [1, 2, 3];

	// array of string
	let arr2: string[] = ['a', 'abc', 'sami'];

	// Other operations are similar as JS


// * Object:
	// 1st way
	const obj1: {}= {
    		name: 'sami',
    		id: 1236
	}	
	
	// 2nd way
	const obj2: {name: string, id: number}= {
        	name: 'sami',
        	id: 1236
    	}

	// 3rd way, declare the type first
	type obj_type = {name: string, id: number};
	const obj3: obj_type = {
    		name: 'sami',
    		id: 1236
	}


// * Normal Function:
	// .functions of duplicate name not allowed
	//declare function, add parameter with dataType and initialize
	
	// error
	// function add(n1, n2){}
	
	//1. both are ok, 2nd one is preferable
	function add1(n1: number, n2: number) {
		return n1+n2
	}
	//2. add return type to a function
	function add2(n1: number, n2: number): number {
		return n1+n2
	}

	// Call the function and pass argument
	// add('Sami', 'Sazin'); //error
	add2(3, 5); // ok

	//Return nothing? use void
	function add3(n1: number, n2: number): void {
		// console.log(n1+n2);
	}

	// Set multiple datatype to func, parameter..
	function add4(n1: number | string, n2: number | string): number | string {
		if(typeof(n1) === 'number' && typeof(n2) === 'number'){
            return n1 + n2;
        }
        else{
            return '' + n1 + n2;
        }
	}

	// Object with in a function
	function func6(stud: {name: string, id?: number}): void {
		console.log('Name : ', stud.name);
		console.log('ID   : ', stud.id);
	}

	//call this function
	// func6({name: 'sami', id: 1236});

	
// * Arrow Function:
	//normal arrow func
	const func1 = () => {
        //code
    }

	// void return type
	const func2 = (): void => {
    	// code
	}
	
	//number return type
	const func3 = (): number => {
    	return 10;
	}

	// with parameter
	const func4 = (n1: number, n2: number): number => n1+n2;
	
	//or
	const func5 = (n1: number, n2: number): number => {
		return n1+n2;
	}

	
// * Interface:
// Declare & Initialize
	interface Student{
		name: string,
		id: number,
		age: number,
		graduation_year?: number, //'?' means this property is optional
		
		//some other properties
		courses?: string[]
	}

	//name, id, age must be initialize in s1 & s2, otherwise error
	//But graduation_year is optional, show no error if not initialize
	const s1: Student = {
		name: 'Sami',
		id: 1236,
		age: 21
	}
	const s2: Student = {
		name: 'Samius Sazin',
		id: 1236,
		age: 21,
		graduation_year: 2026,
		
		courses: ['math', 'phy', 'che']
	}

	// We can do inheritance
	interface Student2 {
		name: string,
		id: number,
		age: number
	}
	interface Alumni2 extends Student2{
		job: string,
		graduation_year: number
	}
	const s3: Alumni2 = {
		job: 'SWE',
		graduation_year: 2026,

		//we must initialize properties of student3 or show error
		name: 'Samius Sazin',
		id: 1236,
		age: 21
	}

// * Class in TypeScript
	// declare a class
	class student4 {
		//declare variable
		name: string;
		id: number;
		private _cgpa: number;//declare a private variable

		//constructor
		constructor(name: string, id:number, _cgpa: number){
			this.name = name;
			this.id = id;

			this._cgpa = _cgpa;
		}

		//normal function
		printInfo(){
			console.log('Name : ', this.name);
			console.log('Id   : ', this.id);
			console.log('CGPA : ', this._cgpa);
		}
		//normal function that returns some value
		returnValue(numb:number): number{
			return numb + numb;
		}
	}

	//create object of 'student4' class
	const s4 = new student4('Sami', 1236, 3.92);
	// s4.printInfo();
