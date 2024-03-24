let N = 1000000000n; 
let sum = 0n; 
let startTime = process.hrtime.bigint();
for (let i = 1n; i <= N; ++i) { 
    sum += i;
}
let endTime = process.hrtime.bigint();
console.log("Sum:", sum.toString()); 
console.log("Time taken:", Number(endTime - startTime) / 1e9, "s"); 