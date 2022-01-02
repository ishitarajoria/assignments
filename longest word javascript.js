const readline = require("readline");
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

function findlongeststring(str)

{

    var words = str.replace(/[^\w\s]/g,"").split(" ")

    var longestword= "";
    for(var i=0;i<words.length;i++)
    {
        if(words[i].length>longestword.length)
        {
            longestword=words[i]
        }
    }
  
    return longestword;

}

rl.question("Enter your sentence\n", function (answer) {
  console.log("The Longest Word is => ", findlongeststring(answer))
  rl.close();
});