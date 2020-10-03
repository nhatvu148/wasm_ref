let arr = []
console.time('Create random array');
for(let i=0; i < 10000000; i++) {
    arr[i] = Math.floor(Math.random * 1e6);
}
console.timeEnd('Create random array');
console.time('Sort random array');

arr.sort((a, b) => a - b);
console.timeEnd('Sort random array');
