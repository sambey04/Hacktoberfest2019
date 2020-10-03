//RECURSION
function factorial_recursion(num){
if(num==0) return 1;
return num*factorial_recursion(num-1);
}

//ITERATION
function factorial_iteration(num){
let result = 1;
for(i = 2; i<=num;i++)
result *= i;
return result;
}

console.log(factorial_recursion(5)); // 120
console.log(factorial_iteration(6)); //720
