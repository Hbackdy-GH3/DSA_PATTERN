class Solution {
public:
    void pattern20(int n) {
        for(int i=0;i<2*n-1;i++){
            int tStar;
            i<=n-1 ? tStar=2*(i+1) : tStar=2*(2*n-i-1);
            cout<<string(tStar/2,'*');
            cout<<string((2*n-tStar),' ');
            cout<<string(tStar/2,'*');
            cout<<"\n";
        }
    }
};
