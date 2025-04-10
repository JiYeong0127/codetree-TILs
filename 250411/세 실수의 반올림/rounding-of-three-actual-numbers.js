const fs = require("fs");
let input = fs.readFileSync(0).toString().trim().split('\n');

let first = Number(input[0]);
let second = Number(input[1]);
let third = Number(input[2]);

console.log(first.toFixed(3) + "\n" + second.toFixed(3) +"\n" + third.toFixed(3));