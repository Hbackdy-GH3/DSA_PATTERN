class Solution {
public:
    void pattern15(int n) {
        for(int i=0;i<n;i++){
            char l='A';
            for(int j=0;j<n-i;j++){
                cout<<(char)(l++);
            }
            cout<<'\n';
        }
    }
};
