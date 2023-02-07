// class StudentInfo {
//   constructor(name, age) {
//     this.name = name;
//     this.age = age;
//     this.address = "";
//   }
//   sayMyName() {
//     console.log(`my name is ${this.name}`);
//   }
//   setAddress(address) {
//     this.address = address;
//   }
//   getAddress() {
//     return this.address;
//   }
//   useMethod() {
//     this.sayMyName();
//   }
// }

// const student1 = new StudentInfo("jony", 30);
// student1.sayMyName();
// student1.setAddress("장덕동");
// console.log(student1.getAddress());
// student1.useMethod();

class Person{
  constructor(){
    this.name = name;

    this.HP = hp;
  }
  showHP(){
    console.log(this.HP);
  }
  run(){
    this.HP = this.HP -10;
  }
  useMethod() {
    this.showHP();
    this.run();
  }
}

class Avengers extends Person{
  fly(){
    console.log("비행중");
  }

}

1795 2-1