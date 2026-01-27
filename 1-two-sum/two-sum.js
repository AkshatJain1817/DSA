/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    const seen = new Map();

    for (let i=0;i<nums.length;i++){
        const com = target-nums[i];
        if(seen.has(com)){
            return [seen.get(com),i];
        }
        seen.set(nums[i],i);
    }

    return [];
};