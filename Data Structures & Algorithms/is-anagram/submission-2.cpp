class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        if(s.size()!=t.size()) return false;
        unordered_map<char,int>mpp;
        for(auto it:s){
            mpp[it]++;
        }
        for(auto it:t){
            if(mpp.find(it)==mpp.end() || mpp[it] == 0) return false;
            mpp[it]--;
        }
        return true;
    }
};
