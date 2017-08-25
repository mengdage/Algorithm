function bubbleSort(arr) {
  arr = Array.from(arr);
  var len = arr.length,
      i, j, tmp;
  // two loops to compare pairs of number
  for(i = 0; i < len - 1; i += 1) {
    for(j=0; j < len-1-i; j += 1) {
      if(arr[j] > arr[j+1] ) {
        // exchange
        tmp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = tmp;
      }
    }
  }
  return arr;
}

function bubbleSortImporved(arr) {
  arr = Array.from(arr);
  var len = arr.length,
      lastIdx = len, // the index after and including which, the arr is sorted
      i, tmp, pos;
  while(lastIdx > 0) {
    pos = 0;
    for(i = 0; i < lastIdx-1; i+=1) {
      if(arr[i] > arr[i+1]) {
        // exchange
        tmp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = tmp;
        // set the last exchanging index
        pos = i+1;
      }
    }
    lastIdx = pos;
  }
  return arr;
}

function getRandomInt(n) {
  n = n || 100;
  return Math.floor(Math.random()*n);
}

var arr = [],
    i;
for(i = 0; i < 20; i+=1) {
  arr.push(getRandomInt());
}

console.log(arr);
console.time('bubbleSort');
console.log(bubbleSort(arr));
console.timeEnd('bubbleSort');
console.time('bubbleSortImporved');
console.log(bubbleSortImporved(arr));
console.timeEnd('bubbleSortImporved');
