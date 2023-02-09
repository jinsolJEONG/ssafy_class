//제곱의 값을 모아둔 배열 만들기
const arr = [1,2,3,4,5];
const rst = arr.map(data =>{
  return data*data
});
//배열요소의 길이를 모아둔 배열 만들기
const arr2 = ["a", "bcd", "ef","g"];
const rst2 = arr2.map(data =>{
  return data.length
})