class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = needle.size() ;
        int h = haystack.size() ;
        int c = -1 ;
        for ( int i = 0 ; i < (h-n+1) ; i++ ){
            if (haystack.substr(i,n) == needle){
                c = i ;
                break ;
            }
        }
        return c ;
    }
};
