const bucketLists = [
  { id: 3, text: "여행가기", done: false },
  { id: 2, text: "치킨 먹기", done: true },
  { id: 1, text: "코딩 하기", done: false },
];
const ids = bucketLists.map((el) => {
  return el.id;
});
const texts = bucketLists.map((el) => {
  return el.text;
});
const dones = bucketLists.map((el) => {
  return el.done;
});
console.log(ids);
console.log(texts);
console.log(dones);


// 함수로 출력하기
const bucketLists2 = [
  {id: 3, text: '여행가기', done: false},
  {id: 2, text: '치킨먹기', done: true},
  {id: 1, text: '코딩하기', done: false}
];
const getValues = (indecator) =>
  bucketLists2.map((bucketLists2)=>bucketlist[indecator]);
console.log(getValues('id'));
console.log(getValues('text'));
console.log(getValues('done'));


//배열의 객체를 제거하는 함수를 만들자
//id값을 기준으로 제거
let bucketLists3 = [
  {id: 3, text: '여행가기', done: false},
  {id: 2, text: '치킨먹기', done: true},
  {id: 1, text: '코딩하기', done: false}
];

const removeList = (id) => bucketLists3.filter((li) => li.id !== id);

console.log(removeList(1));



//id값을 기준으로 done을 토글하는 함수를 만들자
const bucketLists4 = [
  { id: 3, text: "여행가기", done: false },
  { id: 2, text: "치킨 먹기", done: true },
  { id: 1, text: "코딩 하기", done: false },
];

const toggle = (id) => {
  const newBucketLists = structuredClone(bucketLists4);
  const ret = newBucketLists.filter((el) => el.id === id);
  if (ret[0].done) { //newBucketLists 는 안바뀔것같지만 바뀜. 왜냐면 js는 주소를 불러오니까
    ret[0].done = false;
  } else {
    ret[0].done = true;
  }
  return newBucketLists;
};

console.log(toggle(1));
