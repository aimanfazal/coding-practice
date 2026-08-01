class Solution {
    
private:
    void helper(vector<int>& data, int l, int m, int r) {
        int n1 = m - l + 1;
        int n2 = r - m;
        
        int *left = new int[n1];
        int *right = new int[n2];
        
        for (int i = 0; i < n1; i++)
            left[i] = data[l+i];
        for (int i = 0; i < n2; i++)
            right[i] = data[m+1+i];
            
        int i = 0, j = 0, k = l;
        
        while (i < n1 && j < n2) {
            if (left[i] <= right[j])
                data[k++] = left[i++];
            else
                data[k++] = right[j++];
        }
        
        while (i < n1)
            data[k++] = left[i++];
        while (j < n2)
            data[k++] = right[j++];
            
        delete[] left;
        delete[] right;
    }
  public:
    void mergeSort(vector<int>& data, int l, int r) {
        // code here
        if (l >= r)
            return;
            
        int m = l + (r-l)/2;
        mergeSort(data, l, m);
        mergeSort(data, m+1, r);
        helper(data, l, m, r);
    }
};