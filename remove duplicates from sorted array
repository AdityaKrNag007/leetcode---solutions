#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len = nums.size();
        vector<int> st;
        st.push_back(nums[0]);
        for( auto x : nums ){
            if( st[st.size()-1] != x ) st.push_back(x);
            else continue;
        }
        for( int i = 0 ; i < st.size() ; i++ ){
            nums[i] = st[i];
        }
        return st.size(); 
     }

};
