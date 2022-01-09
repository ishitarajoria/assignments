const readline = require("readline");
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

function findlongeststring(str)

{

    var strings = str.split(" ")

    var longeststring= "";
    for(var i=0;i<strings.length;i++)
    {
        if(strings[i].length>longeststring.length)
        {
            longeststring=strings[i]
        }
    }
  
    return longeststring;

}

rl.question("Enter your sentence\n", function (answer) {
  console.log("The Longest string is => ", findlongeststring(answer))
  rl.close();
});
