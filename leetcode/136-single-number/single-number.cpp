class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if (nums.size() == 1)
            return nums[0];

        int ans = nums[0];
        for (int i = 1; i <nums.size(); i++)
            ans = ans ^ nums[i];
        return ans;
    }
};

const static auto io_speed_up = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    FILE* fptr = fopen("user.out", "w");
    int x, out = 0;
    while (!cin.eof()) {
        if (cin.peek() == '[')
            cin.ignore();
        else
            break;
        out = 0;
        while (cin.peek() != ']') {
            cin >> x;
            if (cin.peek() == ',')
                cin.ignore();
            out ^= x;
        }
        fprintf(fptr, "%d\n", out);
        cin.ignore(1024, '\n');
    }
    fclose(fptr);
    exit(0);
    return 0;
}();