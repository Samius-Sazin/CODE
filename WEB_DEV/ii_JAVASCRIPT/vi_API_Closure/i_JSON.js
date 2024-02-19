// JSNON = Java Scrpt Object Notation

const obj1 = {
    name: 'Samius Sazin',
    id: 1236,
    language: ['c', 'c++', 'java'],
    cgpa: [3.86, 3.89, 3.98],
    just_check: {c:'structure', cpp: 'oop', rating: 10},
}

//obj1 to stringify
const obj1_stringify = JSON.stringify(obj1);

//stringify to object
const again_obj1 = JSON.parse(obj1_stringify);

console.log(obj1);
/*
{
  name: 'Samius Sazin',
  id: 1236,
  language: [ 'c', 'c++', 'java' ],
  cgpa: [ 3.86, 3.89, 3.98 ]
  just_check: { c: 'structure', cpp: 'oop', rating: 10 }
}
*/
console.log(obj1_stringify);
// {"name":"Samius Sazin","id":1236,"language":["c","c++","java"],"cgpa":[3.86,3.89,3.98],"just_check":{"c":"structure","cpp":"oop","rating":10}}

console.log(again_obj1);
/*
{
  name: 'Samius Sazin',
  id: 1236,
  language: [ 'c', 'c++', 'java' ],
  cgpa: [ 3.86, 3.89, 3.98 ],
  just_check: { c: 'structure', cpp: 'oop', rating: 10 }
}
*/