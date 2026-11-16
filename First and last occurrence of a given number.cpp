class Solution {
public:
    vector<int> searchRange(const vector<int>& arr, int key) {
        int first = -1, last = -1;
        int n = arr.size();
        
        int low = 0, high = n - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] == key) {
                first = mid;
                high = mid - 1;
            } else if (arr[mid] < key) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        
        if (first == -1) {
            return {-1, -1};
        }
        
        low = 0;
        high = n - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] == key) {
                last = mid;
                low = mid + 1;
            } else if (arr[mid] < key) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        
        return {first, last};
    }
};
