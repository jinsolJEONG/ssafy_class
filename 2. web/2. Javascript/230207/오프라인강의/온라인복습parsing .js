//이름 짓기- 배열 복수, 객체는 단수
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

//forEach -> 그저 뱅뱅돌고싶을때
//student라는 객체는 name,age,add 각각을 의미함
students.forEach((student)=>{ //student 타입은 함수
 console.log(student); // 전체 출력
 console.log(student.name); // students의 name 출력
});

//map -> 똑같은 크기의 새로운 배열을 만들고 싶을때
const names = students.map((student)=>{
  return student.name;
});

//filter
//맞는 객체를 뽑아내는데 객체 안에 있는 값을 뽑아낼 수 없음
const over30people = students.filter((student) => {
  return student.age >= 30;
});
console.log(over30people);

//cf. 속에 있는것까지 뽑아내기
const under30people = under30people.map((person) => person.name);
console.log(under30people);

//응용- 함수 밖으로 빼기-> 함수를 다시쓰기 위해서,,
function sampleFunc(student){
  return student.age <30;
}
const under30people2 = student.filter(sampleFunc);
const under30peopleNames = under30people.map((person) => person.name);
console.log(under30peopleNames);
