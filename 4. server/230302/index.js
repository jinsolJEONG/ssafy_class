//패키지를 가져오는 법
//require로  가져올 수 있다
//내부에 있는 모듈은 ./~~

const puppeteer = require("puppeteer");
const main = async() => {
  // 1. 브라우저 만들기
  const browser = await puppeteer.launch({
    //기본값이 headless:true
    headless:false
  })
  // 2. 브라우저에 페이지 만들기
  const page = await browser.newPage();
  // 3. 페이지에서 주소로 이동하기
  await page.goto("https://comic.naver.com/webtoon?tab=mon");

  // 대기하는 법
  // waitForSelector -> 특정 selector가 올때까지 대기하는 역할
  // 이미지가 로딩시에 없었으니 이미지가 나올때까지 기다리는 역할
  await page.waitForSelector("#content .item img");
 
  // document.querySelectorAll("#content .item");
  
  // 크롤링 데이터 가져오기
  // node.js는 브라우저가 아닌 환경이기때문에 document 사용 불가
  // evaluate 안에서는 document 사용 가능 (headless:false, browser close 주석처리)
  const data = await Page.evaluate(()=>{
    const webtoonList = document.querySelectorAll("#content .item img");

    // queryselectorAll은 유사배열
    // ->array.from으로 배열화를 시킨후에 배열 메서드가 사용가능
    // 제목가져오는 것
    const result = Array.from(webtoonList).map(li=>li.getAttribute('alt'));
    return result;
  });
  console.log(data);

  // 스크린샷 찍기
  //await page.screenshot({path: "screenshot.jpg", fullPage:true});
  // pdf 따기(headless:true 에서만 동작)
  //await page.pdf({path: "test.pdf", format:'A4'});
  //브라우저 종료하기
  //await browser.close();
}

main();