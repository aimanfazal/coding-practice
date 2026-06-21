class Solution {
	public:
	char getMaxOccuringChar(string& s) {
		//  code here
		int freq[256] = {0};
		int count = -1;
		char answer = '\0';
		
		for (auto ch: s)
			freq[ch]++;
		
		for (int i = 0; i < 256; i++) {
			if (freq[i] > count) {
				count = freq[i];
				answer = char(i);
			}
		}
		return answer;
	}
};
