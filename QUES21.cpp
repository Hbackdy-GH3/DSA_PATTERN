class Solution {
public:
    void pattern21(int n) {
        for(int i=0;i<n;i++){
            if(i==0 || i==n-1) cout<<string(n,'*');
            else{
                cout<<'*';
                cout<<string(n-2,' ');
                cout<<'*';
            }
            cout<<'\n';
        }
    }
};
