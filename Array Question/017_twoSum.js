//P.N0 1 :: https://leetcode.com/problems/two-sum/ 

// let nums = [2,7,11,15];
// let target = 9; //Output : [0,1]

let nums = [3,2,4];
let target = 6; //Output : [1,2]

// let nums = [3, 3];
// let target = 6; //Output : [0,1]

// let nums = [3, 3, 4, 7, 9, 4, 8, 6, 8];
// let target = 15; //Output : [3,6]

// let nums = [-1, -2, -3, -4, -5]
// let target = -8 //Output : [2,4]


let twoSum = function (nums, target) {

    for (let i = 0; i < nums.length; i++) {

        for (let j = i + 1; j < nums.length; j++) {
            if (nums[i] + nums[j] == target) {
                return [i, j]
            }
        }
    }
}
console.log(twoSum(nums, target))

