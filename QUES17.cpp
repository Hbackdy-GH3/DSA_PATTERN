class Solution {
public:
    void pattern17(int n) {
        for(int i=0;i<n;i++){
            char l='A';
            cout<<string((n-i-1),' ');
            for(int j=0;j<=(2*i+1)/2;j++){
                cout<<(char)l++;
            }
            l-=2;
            for(int j=(2*i+1)/2+1;j<(2*i+1);j++){
                cout<<(char)l--;
            }
            cout<<'\n';
        }
    }
};
