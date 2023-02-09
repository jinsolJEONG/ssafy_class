//쌤 코드
const orderList = [
  {
    menu: "치킨",
    price: 17000,
    event: false,
    count: 50,
  },
  {
    menu: "돈까스",
    price: 8500,
    event: true,
    count: 99,
  },
  {
    menu: "마라탕",
    price: 8000,
    event: false,
    count: 100,
  },
  {
    menu: "쫄면",
    price: 6500,
    event: false,
    count: 0,
  },
  {
    menu: "짜장면",
    price: 5500,
    event: true,
    count: 30,
  },
];

const newOrderList = orderList
  .filter((order) => order.count !== 0)
  .map((order) => {
    const newOrder = structuredClone(order); // 원형 변형 안시키고 그대로 가져오기
    //const newOrder = order.price -> 원래배열이 바껴서 쓰면 안됨
    if (order.event) {
      newOrder.saledPrice = newOrder.price * 0.9;
      return newOrder;
    }
    newOrder.saledPrice = newOrder.price;
    return newOrder;
  });
console.log(orderList); // 원래 배열은 손상되지 않는다.
console.log(newOrderList); // 새로운 메뉴 리스트
