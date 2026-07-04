class Solution {
  public:
    void quickSort(vector<int>& arr, int low, int high) {
        // code here
        if (low >= high)
            return;
            
        int pivot = partition(arr, low, high);
        quickSort(arr, low, pivot - 1);
        quickSort(arr,  pivot + 1, high);
        
    }

    int partition(vector<int>& arr, int l, int r) {
        // code here
  
		int pivotIndex = l;
		int count = 0; 
		
		for (int i = l + 1; i <= r; i++)
		    if (arr[i] <= arr[pivotIndex])
		        count++;
		 
		swap(arr[pivotIndex], arr[pivotIndex+count]);
		pivotIndex = pivotIndex + count;
		
		int i = l;
		int j = r;
		
		while (i < pivotIndex && j > pivotIndex) {
		    
		    while (arr[pivotIndex] >= arr[i])
		        i++;
		        
		    while (arr[pivotIndex] < arr[j])
		        j--;
		        
		    if (i < pivotIndex && j > pivotIndex)
		        swap(arr[i], arr[j]);
		}
		
		return pivotIndex;
    }
};