class Solution {
	public:
	
	int divisibleBy4(string N) {
		// Your Code Here
		int size = N.size();
		int a = N[size - 1] - '0';
		if (size > 1) {
			int b = (N[size - 2] - '0') * 10;
			a = a + b;
		}
		
		return (a % 4 == 0) ? 1 : 0;
	}
};
