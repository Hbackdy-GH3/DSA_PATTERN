class Solution {
public:
    int LCM(int n1,int n2) {
        int p=n1*n2;
        if(p==1) return 1;
        int s,b;
      // GCD
        if(n1<n2){
            s=n1;
            b=n2;
        }else {
            s=n2;
            b=n1;
        }
        while(s!=0){
            int temp=b%s;
            b=s;
            s=temp;
        }
      // till here!!!!!
        return (p/b);
    }
};
