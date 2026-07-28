class Solution {
public:
    string smallestPalindrome(string s) {
        map<char,int> mp;

        for (auto ch: s)
            if (mp.find(ch) != mp.end())
                mp[ch]++;
            else
                mp[ch] = 1;
        
        string ans = "";
        char mid;
        bool flag = false;

        for (const auto& c: mp) {
            int length = c.second/2;

            while (length--)
                ans += c.first;

            if (c.second & 1) {
                mid = c.first;
                flag = true;
            }
        }

        string rev = ans;
        reverse(rev.begin(), rev.end());
        
        if (flag)
            ans += mid;

        return ans+rev;
    }
};