const arr = [1,2,3,4,5];
const inven =[
  {name: "A", quantity:1},
  {name: "B", quantity:2},
  {name: "C", quantity:3},
]
//find = 해당하는 배열의 값을 가져온다
const rst = arr.find(Element=>Element>4);
console.log(rst);
//name이 B인 배열의 값을 가져온다
const rst2 = inven.find(li=>li.name ==="B");
console.log(rst2);
//findIndex = 해당하는 Index를 가져온다
const rst3 =inven.findIndex(li => li.name==="B");
console.log(rst3);

//도전1
const chicken = [
  {name: "머리", quantity:1},
  {name: "날개", quantity:2},
  {name: "닭다리", quantity:2},
  {name: "닭가슴살", quantity:1},
  {name: "닭발", quantity:2},
];

chicken.find(li =>li.name ==="닭다리");
chicken.findIndex(li => li.name === "닭다리")
