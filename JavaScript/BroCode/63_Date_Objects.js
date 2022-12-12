// The Date object is used to work with dates and times

let date = new Date();

date = date.toLocaleString();
console.log(date);

date.setFullYear(2023);
date.setMonth(3);
date.setDate(4);
date.setHours(23);

function formatDate(date1){
    let year = date1.getFullYear();
    let month = date1.getMonth();
    let day = date1.getDate();

    return `${month}/${day}/${year}`;
}