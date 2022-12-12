// This = reference to a particular object.
//        The object depends on the immediate context.

const car1 = {
    model:"Mustang",
    colour:"red",
    year:2023,

    drive : function(){
        console.log(`You drive the ${this.model}`);
    }
}
const car2 = {
    model:"Corvette",
    colour:"blue",
    year:2024,

    drive : function(){
        console.log(`You drive the ${this.model}`);
    }
}