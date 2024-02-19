//Learning Fetch
//fetch('https://jsonplaceholder.typicode.com/todos/1').then(res => res.json()).then(data => console.log(data));

fetch('https://jsonplaceholder.typicode.com/users')
.then(res => res.json())
.then(data => printEachData(data));

function printEachData(data){
    // print data
    console.log(data);

    // print only name, id, city property value of data(array of objects)
    for(let each_data of data){
        console.log(`ID : ${each_data.id}`);
        console.log(`Name : ${each_data.name}`);
        console.log(`Address City : ${each_data.address.city} \n`);
    }
}
/*
ID : 1
Name : Leanne Graham
Address City : Gwenborough 

ID : 2
Name : Ervin Howell
Address City : Wisokyburgh 

ID : 3
Name : Clementine Bauch
Address City : McKenziehaven 

ID : 4
Name : Patricia Lebsack
Address City : South Elvis

ID : 5
Name : Chelsey Dietrich
Address City : Roscoeview

ID : 6
Name : Mrs. Dennis Schulist
Address City : South Christy

ID : 7
Name : Kurtis Weissnat
Address City : Howemouth

ID : 8
Name : Nicholas Runolfsdottir V
Address City : Aliyaview

ID : 9
Name : Glenna Reichert
Address City : Bartholomebury

ID : 10
Name : Clementina DuBuque
Address City : Lebsackbury
*/