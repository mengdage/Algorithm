function fib(n) {
  var fibArray = [0, 1],
      i = 2;
  while( i < n) {
    fibArray.push(fibArray[i-1] + fibArray[i-2]);
    i += 1;
  }
  console.log(fibArray);
}

for(var i = 1, len = 15; i < len; i+= 1) {
  fib(i);
}
