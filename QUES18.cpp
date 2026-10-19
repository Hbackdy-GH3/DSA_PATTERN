class Solution {
public:
    void pattern18(int n) {
        for(int i=0;i<n;i++){
            char l=65+n-1-i;
            for(int j=0;j<=i;j++){
                cout<<(char)l++<<' ';
            }
            cout<<'\n';
        }
    }
};
