const fs = require("fs");
let input = fs.readFileSync(0).toString().trim();

let a = "";
for(let i=0; i<8; i++){
    a += input;
}

console.log(a);