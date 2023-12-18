/*1913. Maximum Product Difference Between Two Pairs
The product difference between two pairs (a, b) and (c, d) is defined as (a * b) - (c * d).

For example, the product difference between (5, 6) and (2, 7) is (5 * 6) - (2 * 7) = 16.
Given an integer array nums, choose four distinct indices w, x, y, and z such that the product difference between pairs (nums[w], nums[x]) and (nums[y], nums[z]) is maximized.

Return the maximum such product difference.*/


class Solution {
public:
    int maxProductDifference(vector<int>& nums) {

        long max1 = INT_MIN;
        long max2, min2; 
        long min1 = INT_MAX;
        long output = 0;

        if(nums.size() >= 4 && nums.size()<= pow(10, 4)){
            for(int i=0; i<nums.size(); i++){
                if(nums[i]<= pow(10, 4) && nums[i]>= 1){
                    if(max1 < nums[i]){
                        max2 = max1;
                        max1 = nums[i];
                    }
                    else if(max2 < nums[i]){
                        max2 = nums[i];
                    }

                    if(min1 > nums[i]){
                        min2 = min1;
                        min1 = nums[i];
                    }
                    else if(min2 > nums[i]){
                        min2 = nums[i];
                    }
                }
            }
        }
        output = (max1 * max2) - (min1 * min2);
        //printf("%i %i", min1, min2);
        return output;
    }
};
