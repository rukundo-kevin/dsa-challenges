function maxMountainSum(heights) {
  const n = heights.length;
  let max = 0;

  for (let p = 0; p < n; p++) {
    let sum = heights[p];
    let cur = heights[p];

    for (let i = p - 1; i >= 0; i--) {
      cur = Math.min(heights[i], cur);
      sum += cur;
    }

    cur = heights[p];
    for (let i = p + 1; i < n; i++) {
      cur = Math.min(heights[i], cur);
      sum += cur;
    }

    if (sum > max) max = sum;
  }

  return max;
}

console.log(maxMountainSum([5, 3, 4, 1, 1]));
console.log(maxMountainSum([6, 5, 3, 9, 2, 7]));
console.log(maxMountainSum([3, 2, 5, 5, 2, 3]));
