class Solution {
public:
    void pattern22(int n) {
        for(int i=0;i<2*n-1;i++){
            for(int j=0;j<2*n-1;j++){
                int top=i;
                int bottom=2*(n-1)-i;
                int left=j;
                int right=2*(n-1)-j;
                int minm=min({top,bottom,left,right});
                cout<<n-minm<<' ';
            }
            cout<<'\n';
        }
    }
};
