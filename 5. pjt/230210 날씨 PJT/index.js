async function setRenderBackground(){
   // body의 background 주소를 넣어도 ok
   // 일부러 axios 요청으로 이미지를 받아오기
   // blob : 이미지, 사운드, 비디오 등 멀티미디어 데이터를 다룰때 사용
  const result = await axios.get("https://picsum.photos/3840/2160", {
    responseType : "blob"
  });
  console.log(result);
  // URL.createObjectURL : 임시 URL을 만든다(페이지 내에서만 유효)
  // 받아온 데이터를 임시 URL을 만들어서 그 url의 body에 넣는다
  const imageURL = URL.createObjectURL(result.data);
  document.querySelector('body').style.backgroundImage = `url(${imageURL})`;
}
//const setRenderBackground = async () => {}

//시간갱신
function setTime(){
  const timer = document.querySelector('.timer');

  setInterval(()=>{
    //date 함수
    const date = new Date();
    console.log(date);
    console.log(date.getHours());
    timer.textContent = `${date.getDate()}:${date.getMinutes()}:${date.getSeconds()}`;
  }, 1000)
}

function getMemo(){
  //localstorage로 부터 가져와서 memo에 넣어주는 작업
  const memo = document.querySelector('.memo');
  memo.textContent = localStorage.getItem('todo');
}

function setMemo(){
  const memoInput = document.querySelector('.memo-input');
  memoInput.addEventListener('keyup', function(e){
    // e.code 입력시 -> 작성한 키보드 조회
    //console.log(e.code);
    //console.log(e.target);
    console.log(e.target.value);
    // e.code가 enter인 경우에만 메모를 바꿀 수 있도록
    // ! null underfined false "" => 부정의 의미
    // if(e.target.value) => 위 부정의 의미가 아닌 경우를 통합
    // if(!e.targer.value) => 부정의 의미인경우
    if (e.code === 'Enter' && e.target.value) {
      //메모를 저장
      // const memo = document.querySelector('.memo');
      // memo.textContent = e.target.value;

      //메모가 날아가지 않도록 저장
  /*  원래는 백엔드 DB에 저장해서 가져오는 작업이 필요
      브라우져에도 간단한 저장소 개념이 있다. localstorage
      localstorage 사용법
      localstorage.setItem('키', '넣을값')
      localstorage.getItem('키') -> 값을 가져온다 
  */  
      localStorage.setItem('todo', e.target.value);
      //gerMemo로 분리
      getMemo();

      e.target.value = "";
    }
  })
}

function deleteMemo(){
  // 이벤트 위임
  // document.querySelector('body')
  // 똑같은 함수를 수백만개으 addEvelisn 가정 => 속도 저하
  document.addEventListener('click', function(e){
    console.log(e.target);
    //localstorage 지워야하고
    // html 파트도 지워야함
    // if 문으로 e.target.classlist 가 hello 인경우에 ~ 이벤트 실행
    if(e.target.classList.contains('memo')){
      localStorage.removeItem('todo');

      e.target.textContent = "";
    }
  })

}

function allRender(){
 setRenderBackground();
 setTime();
 setMemo();
 getMemo();
 deleteMemo();

 //5초마다 해당 콜백함수 반복
 setInterval(()=>{
  setRenderBackground();
 }, 5000)
}
allRender();
