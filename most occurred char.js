 let str = "Hello World!";

let myMap = new Map();

for(let ch of str.split("")){
    if (myMap.has(ch)){
        myMap.set(ch, (myMap.get(ch)+1) );
    }else{
        myMap.set(ch,1);
    }
}
console.log(myMap)
let maxKey = "";
let maxVal = 0;

myMap.forEach((value, key) => {
    if(value>maxVal){
        maxVal = value
        maxKey = key
    }
})


console.log(maxKey)
