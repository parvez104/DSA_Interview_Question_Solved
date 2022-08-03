/*4. Median of Two Sorted Arrays : https://leetcode.com/problems/median-of-two-sorted-arrays/

Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.
The overall run time complexity should be O(log (m+n)).

Example 1:::
Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.

Example 2:::
Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.

Constraints:::
nums1.length == m
nums2.length == n
0 <= m <= 1000
0 <= n <= 1000
1 <= m + n <= 2000
-106 <= nums1[i], nums2[i] <= 106
*/

// let nums1 = [1,3], nums2 = [2]
// let nums1 = [1,2], nums2 = [3,4]
// let nums1 = [0,0], nums2 = [0,0]
// let nums1 = [1,3], nums2 = [2,7]
// let nums1 = [1,3], nums2 = [2,7]
// let nums1 = [3], nums2 = [-2,-1]
// let nums1 = [], nums2 = [-3,-2,-1,1,5]


var findMedianSortedArrays = function(nums1, nums2) {
    let marge = [...nums1, ...nums2].sort( (a, b) => a - b)

    let even = marge.length / 2

    if(marge.length % 2 > 0){
        console.log("if middle is odd :", marge[Math.floor(marge.length / 2)])
        return marge[Math.floor(marge.length / 2)] 
    }else{
        console.log("if middle is even :",(marge[even] + marge[even - 1]) / 2)
        return (marge[even] + marge[even - 1]) / 2
    }
    
}
console.log(findMedianSortedArrays(nums1, nums2))
