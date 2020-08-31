var sayNode = function(){
    console.log('Node');
};
var es = 'ES';
var oldObject = {
    sayJS: function(){
        console.log('JS');
    }
    sayNode: sayNode,
};
oldObject[es+6]='Fantastic';

oldObject.sayNode(); //Node
oldObject.sayJs(); //JS
console.log(oldObject.ES6); //Fantastic

//위의 코드와 같은 코드
const newObject = {
    sayJS(){
        console.log('JS');
    },
    sayNode,
    [es + 6]: 'Fantastic',
};
newObject.sayNode();
newObject.sayJS();
console.log(newObject.ES6);

//oldObject와 newObject를 비교해서 보면 sayJS 같은 객체의 메서드에 함수를 연결할 때 더는 콜론(:)과 function을 붙이지 않아도 되고 sayNode: sayNode와 같이 속성명과 변수명이 겹치는 경우에는 한 번만 쓸 수 있게 됨