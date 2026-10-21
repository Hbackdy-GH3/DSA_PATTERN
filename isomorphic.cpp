class Solution {
public:
    bool isomorphicString(string s, string t) {
    	//your code goes here
        if(s.length()!=t.length()) return false;
        int mapS[256]={0};
        int mapT[256]={0};
        for(int i=0;i<s.length();i++){
            char charS=s[i];
            char charT=t[i];
            if(mapS[charS]!=mapT[charT]) return false;
            mapS[charS]=i+1;
            mapT[charT]=i+1;
        }
        return true;
    }
};
