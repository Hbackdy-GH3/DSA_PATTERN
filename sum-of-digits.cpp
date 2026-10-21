class Solution{
public:
    int d(int s){
        int temp=0;
        while(10<=s){
            temp=0;
            while(s!=0){
                temp+=s%10;
                s/=10;
            }
            s=temp;
        }
        return s;
    }
	int addDigits(int num){
		// your code goes here
        if(num==0) return 0;
        int s=num%10+addDigits(num/10);
        
        return d(s);
	}
};
