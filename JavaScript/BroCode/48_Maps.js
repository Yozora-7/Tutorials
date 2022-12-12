// Map = object that holds key-value pairs of any data type

const store = new Map([
    ["T-shirt", 20],
    ["Jeans", 30],
    ["Socks", 10],
    ["Hoodie", 50]
]);

let cart = 0;

cart += store.get("T-shirt");
console.log(cart);

store.set("Hat", 40);

store.delete("Hat");

store.has("Hat");

console.log(store.size);

store.forEach((value, key) => console.log(`${key} £${value}`));
