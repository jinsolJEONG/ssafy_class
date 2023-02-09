// 백틱 ``
// -> 문자열과 자바스크립트 혼합 가능

const myname = "정진솔";
const intro = `제 이름은 ${myname}입니다`;

// 엔터가 인식이 된다
const hi = `
안녕하세요
저는 
치킨입니다;
`

//응용
//insertAdjacentHTML 문자열로 된 html 태그를 
const a = `
<div class="a">
  안녕하세요

</div>
`
const bb = `
<div class="a">
  ${hi}
</div>
`
document.querySelector('body').insertAdjacentHTML('beforeend', a);