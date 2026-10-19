class Solution {
public:
    void pattern9(int n) {
        for(int i=0;i<n;i++){
            cout<<string((n-i-1),' ')<<string((2*i+1),'*')<<"\n";
        }
        for(int i=0;i<n;i++){
            cout<<string(i,' ')<<string((2*(n-i)-1),'*')<<"\n";
        }
    }
};
