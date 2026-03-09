class Solution {
public:
    void sortColors(vector<int>& nums) {
        //sort(nums.begin(), nums.end());
        int lo = 0; //0 ->  lo - 1 - all zero
        int mid = 0; // lo - > mid - 1 all one
        int hi = nums.size() - 1 ;// mid - > hi all one
        while(mid <= hi){
            if(nums[mid] == 1){
                mid++;
            }
            else if(nums[mid] == 0){
                swap(nums[lo++],nums[mid++]);
            }
            else{
                swap(nums[mid],nums[hi--]);
            }
        }
    }
};
