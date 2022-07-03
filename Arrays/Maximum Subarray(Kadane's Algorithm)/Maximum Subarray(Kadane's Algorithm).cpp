// Leetcode
// Accepts negative result
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxElement = nums[0];
        
        for(int x: nums) {
            sum += x;
            maxElement = max(maxElement, sum);
            if(sum < 0) {
                sum = 0;
            }
        }
        return maxElement;
    }
};

// Codestudio
// Doesn't accept negative result. If negative return 0
#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    long long sum = 0;
    long long maxElement = arr[0];

    for(int i=0;i<n; i++) {
        sum += arr[i];
        maxElement = max(maxElement, sum);
        if(sum < 0) {
            sum = 0;
        }
    }
    return (maxElement < 0) ? 0 : maxElement;
}