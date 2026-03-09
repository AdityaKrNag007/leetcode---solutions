#include <bits/stdc++.h>
using namespace std;

int minimaz(vector<string>& strs){
    int x = strs[0].length();
    for ( int j = 1 ; j < strs.size() ; j++ ){
        if ( strs[j].length() < x ){
            x = strs[j].length();
        } 
    }
    return x;
}

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int len = strs.size();
        int x = minimaz(strs);
        string lena = "";
        string A[len];
        for ( int i = x ; i > 0 ; i-- ){
            for ( int g = 0 ; g < len ; g++ ){
            A[g] = strs[g].substr(0,i);
            }
            int c = 0;
            string stre = A[0];
            for ( int k = 0 ; k < len ; k++ ){
                if ( A[k] != stre ){
                    c = -1;
                }
            }
            if ( c == 0 ){
                lena = A[0];
                return lena;
            }
        }
        return lena;
    }
};
