//Question: Write a program that accepts two numbers, then compares their values and displays an appropriate message in all cases.

let num1=Number(prompt("Enter your First number: "));
let num2=Number(prompt("Enter your second number: "));

if (num1>num2){
    console.log(`${num1} is greater than ${num2}`);
}
else if(num1<num2){
    console.log(`${num1} is smaller than ${num2}`);
}
else{
    console.log(`${num1} and ${num2} are equal`)
}