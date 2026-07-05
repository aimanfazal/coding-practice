class Solution {
	public:
	int maxCharGap(string &s) {
		// code here
		int answer = -1;
		set<char> checker;
		
		for (int i = 0; i < s.size(); i++) {
			if (checker.find(s[i]) == checker.end())
				for (int j = i + 1; j < s.size(); j++) {
				
				if (s[j] == s[i]) {
					
					checker.insert(s[j]);
					answer = max(answer, j - i-1);
				}
			}
		}
		
		return answer;
		
	}
};
