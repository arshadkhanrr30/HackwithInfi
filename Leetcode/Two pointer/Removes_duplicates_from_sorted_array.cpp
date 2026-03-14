/*Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same.
Consider the number of unique elements in nums to be k​​​​​​​​​​​​​​. After removing duplicates, return the number of unique elements k.*/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int i = 0;
        int j = 1;
        int unique_el = 1;
        int n = nums.size();

        while (j < n)
        {
            if (nums[j] == nums[j - 1])
            {
                j++;
                continue;
            }

            nums[i+1] = nums[j];
            i++;
            unique_el++;
            j++;
        }

        return unique_el;
    }
};
