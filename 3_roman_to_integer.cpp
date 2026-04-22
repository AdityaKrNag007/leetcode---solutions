#include <bits/stdc++.h>
using namespace std;

int indof(char A[],char B){
    for ( int j = 0 ; j < 7 ; j = j + 1 ){
        if ( A[j] == B ){
            return j;
        }
    }
    return 0;
};

class Solution {
public:
    int romanToInt(string s) {
        char A[] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
        int B[] = {1,2,3,4,5,6,7,0};
        int s1 = 0;
        int len = s.size();
        int l;
        for ( int i = (len-1) ; i >= 0 ; i = i-1 ){
            int k = indof(A,s[i]);
            if (i != (len-1) ){
                l = indof(A,s[i+1]);
            }
            else{
                l = 7;
            }
            
            if (s[i]=='I'){
                if ( B[l] > B[k] ){
                    s1 = s1 - 1;
                }
                else{
                    s1 = s1 + 1;
                }
            }
            if (s[i]=='V'){
                s1 = s1 + 5;
            }
            if (s[i]=='X'){
                if ( B[l] > B[k] ){
                    s1 = s1 - 10;
                }
                else{
                    s1 = s1 + 10;
                }
            }
            if (s[i]=='L'){
                s1 = s1 + 50;
            }
            if (s[i]=='C'){
                if ( B[l] > B[k] ){
                    s1 = s1 - 100;
                }
                else{
                    s1 = s1 + 100;
                }
            }
            if (s[i]=='D'){
                s1 = s1 + 500;
            }
            if (s[i]=='M'){
                s1 = s1 + 1000;
            }

        }
        return s1;
    }
};
