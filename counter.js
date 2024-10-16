
// Memoized Version of Js
const add =(x,y)=>{
   return x+y;
}
const memoized=(func)=>{
    const cache={}
    
    return function(x,y){
        if(cache[x]){
            console.log("From Cache")
            return cache[x];
        }else{
            console.log("Giving Manually")
            cache[x]=func(x,y);
           return result = cache[x]
        }

    }
    
}

const calculate =memoized(add)


console.log(calculate(4,5))
console.log(calculate(4,5))
console.log(calculate(4,5))
console.log(calculate(4,5))
console.log(calculate(4,5))
console.log(calculate(4,5))