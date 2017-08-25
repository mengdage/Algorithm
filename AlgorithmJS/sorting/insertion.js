var getRandomInt = require('./getRandom');
function insertionSort(arr) {
  arr = Array.from(arr);
  var len = arr.length,
      i, j, tmp;

  for(i = 1; i < len; i += 1) {
    j = i -1;
    tmp = arr[i];

    // if arr[j] > tmp, move arr[j] to the next position, j+1
    while(j >= 0 && arr[j] > tmp) {
      arr[j+1] = arr[j];
      j -= 1;
    }
    // find the position for tmp=arr[i]
    arr[j+1] = tmp;
  }
  return arr;
}

function biInsertionSort(arr) {
  arr = Array.from(arr);
  var len = arr.length,
      i, j, tmp,
      lo, hi, mid;

  for(i = 1; i < len; i++) {
    // use binary search to find the smallest one that is larger than arr[i]
    // [lo=0, hi=i-1]
    lo = 0, hi = i-1;
    tmp = arr[i];
    // 13 2
    while(lo <= hi) {
      mid = Math.floor((hi-lo)/2+lo);
      if(arr[mid] >tmp) {
        hi = mid-1;
      } else{
        lo = mid+1;
      }
    }

    j = i;
    while(j>=lo) {
      arr[j] = arr[j-1];
      j-=1;
    }
    arr[lo] = tmp;
  }
  return arr;
}

var arr = [],
    i;
for(i = 0; i < 10; i+=1) {
  arr.push(getRandomInt());
}
console.log(arr);
console.time('insertionSort');
console.log(insertionSort(arr));
console.timeEnd('insertionSort');
console.time('biInsertionSort');
console.log(biInsertionSort(arr));
console.timeEnd('biInsertionSort');
