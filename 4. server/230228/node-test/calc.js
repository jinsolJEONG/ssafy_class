const a = 2;
const b = 4;

// const add = (a,b) => {
//   return a +b;
// }
// const gop = (a,b)=> {
//   return a*b;
// }
// const cha = (a, b)=> {
//   return a -b;
// }
// const nanut = (a, b) => {
//   return a/b;
// }

const calc ={
  add : (a,b) => { return a +b; },
  cha : (a,b)=> {return a -b;  },
  gop : (a,b)=> {return a*b;  },
  nanut : (a, b) => { return a/b;  }
}

console.log(`주어진 수:   ${a} ${b}`);
console.log(`덧셈 결과:   ${calc.add(a,b)}`);
console.log(`뺄셈 결과:   ${calc.cha(a,b)}`);
console.log(`곱셈 결과:   ${calc.gop(a,b)}`);
console.log(`나눗셈 결과: ${calc.nanut(a,b)}`);