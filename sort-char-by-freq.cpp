class Solution{	
	public:
		vector<char> frequencySort(string& s){
			//your code goes here
            int n=s.length();
            int freq[26]={0};
            for(int i=0;i<n;i++){
                freq[s[i]-'a']++;
            }
            vector<char> result;
            for(int i=0;i<26;i++){
                if(freq[i]>0){
                    result.push_back(i+'a');
                }
            }
            sort(result.begin(),result.end(),[&](char a, char b){
                if(freq[a-'a']!=freq[b-'a']) return freq[a-'a'] > freq[b-'a'];
                else return a<b;
            });
            return result;
		}
};
