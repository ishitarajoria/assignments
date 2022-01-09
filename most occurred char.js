  
let str = "My Name is Ishita";

let myMap = new Map();

for(let word of str.split(" ")){
    for(let ch of word.split(""))
        if (myMap.has(ch)){
            myMap.set(ch, (myMap.get(ch)+1) );
        }else{
            myMap.set(ch,1);
        }
}

let maxKey = "";
let maxVal = 0;

myMap.forEach((value, key) => {
    if(value>maxVal){
        maxVal = value
        maxKey = key
    }
})


console.log(maxKey)
