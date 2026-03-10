#include <bits/stdc++.h>
using namespace std;

double kvalue(string a){
    string q[] = { "(" , ")" , "[" , "]" , "{" , "}" };
    vector<double> t = { 1.234768 , -1.234768 , 6.943997 , -6.943997 , 38.229137 , -38.229137 };
    for ( int j = 0 ; j < 6 ; j++ ){
        if ( a == q[j] ){
            return t[j];
        }
    }
    return -1;
}

class Solution {
public:
    bool isValid(string s) {
        int c = 0;
        int len = s.size();
        vector<double> x;
        double k;
        int gewq = 0;
        for ( int i = 0 ; i < len ; i++ ){
           k = kvalue( string(1,s[i]));
           if ( k > 0 ){
            gewq++;
            x.push_back(k);
           }
           if ( k < 0 ){
            if( gewq == 0 ) return false;
            x[gewq-1] = x[gewq-1] + k;
            gewq--;
            if ( abs(x[gewq]) < 1e-9 ){
                x.pop_back();
            }
            else c = -1;
           }
        }
        return c==0 && x.empty();
    }
};
