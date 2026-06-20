class Solution {
	public:
	int getLastDigit(string& a, string& b) {
		// code here
		if (b == "0")
			return 1;
		
		int base = a[a.length() - 1] - '0';
		int len = 4;
		
		if (base == 4 || base == 90)
			len = 2;
		else if (base == 0 || base == 1 || base == 5 || base == 6)
			return base;
		
		int power = 0; 
		for (char ch: b)
            power = ((power * 10) + (ch - '0')) % len;	

		power = power == 0 ? 4 : power;
		base = pow(base, power);
		return base % 10;
	}
};
