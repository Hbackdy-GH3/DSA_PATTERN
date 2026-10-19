class Solution {
public:
    void pattern16(int n) {
        char l='A';
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                cout<<(char)l;
            }
            cout<<"\n";
            l++;
        }
    }
};
