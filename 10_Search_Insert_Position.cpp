class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        if (nums.empty()) return 0;

        int i = 0 ;
        for ( auto x : nums ){
            if (x == target) return i ;
            i++ ;
        }
        
        if ( nums[0] > target ) return 0 ; 

        for ( int j = 0 ; j < nums.size()-1 ; j++ ){
            if ( nums[j] <= target && nums[j+1] >= target ) return j+1 ;
        }

        return nums.size();
    }
};
