//Question: Write a program that accepts a month number (between 1 and 12), then show the number of days of that month. Leap years are excluded. Incorrect inputs must be taken into account.

// Write - Your - Code
let monthNumber=Number(prompt("Enter month number"));
if ((monthNumber===1)||(monthNumber===3)||(monthNumber===5)||(monthNumber===7)||(monthNumber===8)||(monthNumber===10)||(monthNumber===12)){
    console.log("Number of days: 31");
}else if(monthNumber===2){
    console.log("Number of days: 29 or 28");
}else if(monthNumber<12){
    console.log("Number of days: 30");
}else{
    console.log("Enter a vaild number between 1-12");
}