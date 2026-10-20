class Solution {
public:
    int primeUptoN(int n) {
        int cnt=0;
        for(int i=2;i<=n;i++){
            bool isp=true;
            if(i>2 && i%2==0) isp=false;
            int sq=sqrt(i);
            for(int d=3;d<=sq;d+=2){
                if(i%d==0){
                    isp=false;
                    break;
                }
            }
            if(isp) cnt++;
        }
        return cnt;
    }
};
