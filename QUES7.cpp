class Solution {
public:
    void pattern7(int n) {
        for(int i=0;i<n;i++){
            cout<<string((n-i-1),' ')<<string((2*i+1),'*')<<'\n';
        }
    }
};
