if(true){
    var x = 3; //3 var은 함수 스코프를 가지므로 if문의 블록과 관계없이 접근가능
}
console.log(x);

if(true){
    const y=3;  // const는 블록 스코프를 가지므로 블록밖에서는 접근할 수 없음.
}
console.log(y); //Uncaught ReferenceError: y is not defined

//const와 let의 차이점: const는 한 번 대입하면 다른 값을 대입할 수 없지만 let은 다른 값을 대입할 수 있음