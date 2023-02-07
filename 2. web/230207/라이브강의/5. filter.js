const arr = [3,5,4,2];
//특정 조건을 만족하는 값들을 가져올 수 있다.
const filteredArr = arr.filter(data => data >3);

//도전
const bucketList = [
  {
    id: 1,
    text: "여행 가기",
    done: false,
  },
  {
    id: 2,
    text: "치킨 먹기",
    done: true,
  },
  {
    id: 3,
    text: "코딩 하기",
    done: true,
  },
  {
    id: 4,
    text: "요리 하기",
    done: false,
  }
];

const filterBuc = bucketList.filter(li => li.done===false);
const rst2 = bucketList.filter(li => !li.done);
