//정석
const dataFromServer = [
  {
    name:"jony",
    age:30,
  },
  {
    name:"jinsol",
    age:27,
  },
  {
    name:"nana",
    age:1,
  }
];
if(dataFromServer){
  console.log("있다");
}else {
  console.log("없다");
}


//정석
const dataFromServer2 = [];
if(dataFromServer2,length){
  console.log("있다");
}else {
  console.log("없다");
}

// 잘못된 경우1
const dataFromServer3 = [];
if(dataFromServer3 !== []){
  console.log("있다");
}else {
  console.log("없다");
}

//잘못된 경우2
const arr1 = [1,2,3];
const arr2 = [1,2,3];
console.log(arr1===arr2);