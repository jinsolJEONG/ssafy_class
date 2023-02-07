// 함수 표현식

const a = function(){
  console.log("aa");
}

// 화살표 함수
const b = () => {console.log("bb")};
const c = () => console.log("cc");

const sum = (a,b) => {return a+b};
sum(3,4);
//return을 생략가능
const sum2 = (a,b) => a+b;
sum2(3,4);

// 실습1
const gop = (a) => a*a;
gop(3);
const gop2 = (a) => a*a;
gop2(10);

