class Solution {
public:
    void pattern10(int n) {
        for(int i=0;i<2*n-1;i++){
            int row=(i<n) ? i+1 :2*n-i-1;
            cout<<string(row,'*')<<'\n';
        }
    }
};
