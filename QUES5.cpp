class Solution {
public:
    void pattern5(int n) {
        for(int i=0;i<n;i++){
            cout<<string((n-i),'*')<<'\n';
        }
    }
};
