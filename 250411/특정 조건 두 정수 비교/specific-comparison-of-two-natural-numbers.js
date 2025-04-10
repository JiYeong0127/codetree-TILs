const fs = require("fs");
let input = fs.readFileSync(0).toString().trim().split(" ");

let a = Number(input[0]);
let b = Number(input[1]);

let resulta, resultb
if(a < b){
    resulta = 1;

}else{
    resulta = 0;

}
if(a === b){
    resultb = 1;
}else{
    resultb = 0;
}
console.log(resulta, resultb);

