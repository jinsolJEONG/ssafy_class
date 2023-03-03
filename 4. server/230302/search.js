const puppeteer = require("puppeteer");
const main = async() =>{
  //브라우저 만들기
  const browser = await puppeteer.launch({
    headless:false
  })
  //브라우저에 페이지 만들기
  const page = await browser.newPage();

  await page.goto("https://www.google.co.kr");
  
  await page.evaluate(()=>{
    //input창 찾아서 
    document.querySelector(".gLFyf").value="치킨";
    document.querySelector(".gNO89b").click();
    //버튼 클릭
  })
  //스크린샷 찍기 (클릭을 하자마자 끝나고 스크린샷을 찍으니 넘어가기전에 실행
  // 이동된 페이지니까 스크린샷을 찍는다. waitForSelector를 응용해서 대기후 촬영)
  await page.waitForSelector(".GLcBOb")
  await page.screenshot({path:"치킨.jpg", fullPage:true});

}

main ();