class Solution {
public:
    
    void static mySwap(int &x, int &y) {
        int temp = x;
        x = y;
        y = temp;
    }
    
    void static DutchNationalFlagSort(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int mid=0;
        int high=n-1;
        
        while(mid<=high) {
            cout << "nums[low] = " << nums[mid] << " ";
            cout << "nums[mid] = " << nums[low] << " ";
            cout << "nums[high] = " << nums[high] << endl;
            if(nums[mid] == 0) {
                mySwap(nums[mid], nums[low]);
                mid++;
                low++;
            } else if(nums[mid] == 1) {
                mid++;
            } else if(nums[mid] == 2) {
                mySwap(nums[mid], nums[high]);
                high--;
            }
        }
    }
    
    void sortColors(vector<int>& nums) {
        DutchNationalFlagSort(nums);
    }
};