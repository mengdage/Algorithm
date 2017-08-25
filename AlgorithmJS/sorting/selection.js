var getRandomInt = require('./getRandom');

function selection(arr) {
  var len = arr.length,
      sortedIdx = len, // unsorted [0, sortedIdx-1]; sorted [sortedIdx, len-1]
      i, min, minIdx, tmp;
  while(sortedIdx > 0) {
    // find the larges in [0, sortedIdx-1]
    for(i = 0, min = arr[0], minIdx=0; i < sortedIdx; i+=1) {
      if(arr[i] <= min) {
        min = arr[i];
        minIdx = i;
      }
    }

    // exchange arr[minIdx] with arr[sortedIdx-1]
    tmp = arr[minIdx];
    arr[minIdx] = arr[sortedIdx-1];
    arr[sortedIdx-1] = tmp;
    // sortedIdx -= 1
    sortedIdx -= 1;

  }

  return arr;
}


var arr = [],
    i;
for(i = 0; i < 20; i+=1) {
  arr.push(getRandomInt());
}
console.log(arr);
console.time('selectionSort');
console.log(selection(arr));
console.timeEnd('selectionSort');
