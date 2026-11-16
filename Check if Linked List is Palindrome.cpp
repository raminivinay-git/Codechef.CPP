bool isPalindrome(Node* head) {
    vector<int> v;
    while (head != NULL) {
        v.push_back(head->val);
        head = head->next;
    }
    
    int left = 0, right = v.size() - 1;
    while (left < right) {
        if (v[left] != v[right]) {
            return false;
        }
        left++;
        right--;
    }
    
    return true;
}
