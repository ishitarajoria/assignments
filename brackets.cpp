function BalancedBrackets(expr)
{
    
    
    let stack = [];

    
    for(let i = 0; i < expr.length; i++)
    {
       

        if (expr[i] == '(' || expr[i] == '[' || expr[i] == '{')
        {
            
            stack.push(expr[i]);
            continue;
        }

        
        if (stack.length == 0)
            return false;
            
        let x;
        switch (expr[i]){
        case ')':
            x = stack.pop();
            if (x == '{' || x == '[')
                return false;
            break;
        case ']':
            x = stack.pop();
            if (x == '(' || x == '{')
                return false;
            break;

        case '}':
            x = stack.pop();
            if (x == '(' || x == '[')
                return false;
            break;

        }
    }

    return (stack.length == 0);
}


let expr = "([{}])";


if (BalancedBrackets(expr))
    document.write("The expression is Balanced ");
else
    document.write("The expression is Not Balanced ");



