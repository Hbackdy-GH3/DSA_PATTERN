class Solution {
public:
    void pattern19(int n) {
        for(int i=0;i<2*n;i++){
            i<n ? tStar=2*(n-i):tStar=2*(i-n+1);
            cout<<string(tStar/2,'*');
            cout<<string((2*n-(tStar)),' ');
            cout<<string(tStar/2,'*');
            cout<<'\n';
        }
    }
};
