class Solution {
public:
    void pattern12(int n) {
        for(int i=0;i<n;i++){
            for(int j=0;j<2*n;j++){
                if(j<=i) cout<<j+1;
                else if(j<=(i+(2*(n-i-1)))) cout<<' ';
                else cout<<(2*n-j);
            }
            cout<<'\n';
        }
    }
};
