const puppeteer = require("puppeteer");
const main = async() =>{
  //브라우저 만들기
  const browser = await puppeteer.launch({
    headless:false
  })
  //브라우저에 페이지 만들기
  const page = await browser.newPage();
  await page.goto("https://news.daum.net/digital#1");

  const data = await page.evaluate(()=>{
    const itHeadline = document.querySelectorAll(".list_newsmajor li .link_txt");
    const result = Array.from(itHeadline).map(li=>li.textContent);
    return result;
  });
  console.log(data);
}

main ();