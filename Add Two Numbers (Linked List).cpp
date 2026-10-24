Node* addTwoNumbers(Node* l1, Node* l2) {
    Node* dummyHead = new Node(0);
    Node* current = dummyHead;
    int carry = 0;
    
    while (l1 != NULL || l2 != NULL || carry != 0) {
        int sum = carry;
        
        if (l1 != NULL) {
            sum += l1->data;
            l1 = l1->next;
        }
        
        if (l2 != NULL) {
            sum += l2->data;
            l2 = l2->next;
        }
        
        carry = sum / 10;
        current->next = new Node(sum % 10);
        current = current->next;
    }
    
    Node* result = dummyHead->next;
    delete dummyHead; // Free the dummy node to prevent memory leak
    return result;
}
