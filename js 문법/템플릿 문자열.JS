//ES2015 문법에 생긴 새로운 문자열로 큰따옴표나 작은 따옴표로 감싸는 기존 문자열과는 다르게 백틱 `으로 감싸고 특이한 점은 문자열 안에 변수를 넣을 수 있음
// 기존 ES5 문법을 사용한 문자열
var num1 = 1;
var num2 = 2;
var result = 3;
var string1 = num1 + '더하기' + num2 +'는\''+ result + '\'';
//문자열 string1은 띄어쓰기와 변수, 더하기 기호때문에 가독성이 좋지 않고 코드가 지저분함

//ES2015부터는
const num3 = 1;
const num4 = 2;
const result2 =3;
const string2 = `${num3}더하기${num4}는 '${result}'`;
console.log(string2); //1더하기 2는 '3'
 