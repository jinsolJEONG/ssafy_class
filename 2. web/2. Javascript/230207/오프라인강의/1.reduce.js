const datas = [0,1,2,3,4];

const accResult = datas.reduce((acc, cur)=>{
  console.log(acc,cur);
  return acc+cur;
},1);

console.log(accResult);


// 이름만 뽑아내기
const students = [
  {
    name: "김도훈",
    age: 26,
    add:"창원"
  },
  {
    name: "김기홍",
    age: 27,
    add:"광주"
  },
  {
    name: "김택우",
    age: 30,
    add:"인천"
  },
];

const newStudentInfo = students.reduce((acc, cur) => {
  acc.push(cur.name);
  return acc;
}, []);

console.log(newStudentInfo);

//age가 30인 이름만 골라내기
const studentAge30 = students.reduce((acc, cur) => {
  if(cur.age===30)
  acc.push(cur.name);
  return acc;
}, []);

console.log(studentAge30);