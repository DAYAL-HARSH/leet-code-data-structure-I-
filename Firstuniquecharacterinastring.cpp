class Solution {
public:
    int firstUniqChar(string s) {
        vector<int>f(26);
        int n = s.size();
        for(auto i:s)f[i-'a']++;
        for(int i=0;i<n;i++)
            if(f[s[i]-'a'] == 1)
                return i;
        return -1;
    }
    
};
