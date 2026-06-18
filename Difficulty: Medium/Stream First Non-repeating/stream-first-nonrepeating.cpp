class Solution {
	public:
	string firstNonRepeating(string &s) {
		// code here
		queue<char> q;
		int freq[26] = {0};
		string answer = "";
		
		for (int i = 0; i < s.length(); i++) {
			char ch = s[i];
			
			freq[ch - 'a']++;
			q.push(ch);
			
			while (!q.empty()) {
				if (freq[q.front() - 'a'] > 1)
					q.pop();
				else {
					answer += q.front();
					break;
				}
			}
			
			if (q.empty())
				answer += '#';
		}
		
		return answer;
	}
};
