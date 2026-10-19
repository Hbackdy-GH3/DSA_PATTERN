class Solution {
public:
    void pattern8(int n) {
        for(int i=0;i<n;i++){
            cout<<string(i,' ')<<string((2*(n-i)-1),'*')<<'\n';
        }
    }
};
