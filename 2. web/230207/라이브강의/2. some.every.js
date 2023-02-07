const array =[1,2,3,4,5];

//some 하나의 조건만 만족해도 true반환
const rst1 =array.some(Element =>Element<0); //f
const rst = array.some(Element =>Element>4); //t

//every 모든 조건을 만족해야 true반환
const everyrst1 = array.every(Element =>Element>0); //t
const everyrst2 = array.every(Element =>Element>3); //f
