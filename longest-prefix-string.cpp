class Solution{	
	public:
		string longestCommonPrefix(vector<string>& str){
			//your code goes here
            string lcp="";
            string base=str[0];
            for(int i=0;i<base.length();i++){
                char l=base[i];
                for(int j=1;j<str.size();j++){
                    if(i>=str[j].length() || str[j][i]!=l){
                        lcp=base.substr(0,i);
                        return lcp;
                    }
                }
            }
            return lcp;
		}
};
