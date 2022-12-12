//toLocaleString() = returns a string with a language
//                   sensitive representative of this number

// number.toLocaleString(locale, {options});

// 'locale' = specify what language (undefined = default)
// 'options' = object with formatting options

let myNum = 123456.789;

myNum = myNum.toLocaleString("en-US"); // US English
myNum = myNum.toLocaleString("de-DE"); // standard German

myNum = myNum.toLocaleString("en-US", {style: "currency", currency: "USD"});

myNum = myNum.toLocaleString(undefined, {style: "unit", unit: "celcius"});

console.log(myNum)