class Solution {
public:
    void pattern14(int n) {
        for(int i=0;i<n;i++){
            char l='A';
            for(int j=0;j<=i;j++){
                cout<<(char)(l++);
            }
            cout<<"\n";
        }
    }
};
