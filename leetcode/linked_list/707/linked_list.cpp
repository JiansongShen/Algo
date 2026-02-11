class MyLinkedList {

    struct node {
        int val;
        node * next;
    };

public:
    MyLinkedList() : tail(nullptr), length(0) {
        
    }
    
    int get(int index) {
        if (index >= length || !tail) {
            return -1;
        }
        node* res = tail->next;
        for (int i = 0; i < index; ++i) {
            res = res->next;
        }
        return res->val;
    }
    
    void addAtHead(int val) {
        if (tail) {
            node* h = new node{val};
            h->next = tail->next;
            tail->next = h;
            ++length;
            return;
        }
        
        tail = new node{val};
        tail->next = tail;
        ++length;
    }
    
    void addAtTail(int val) {
        if (tail) {
            node* h = new node{val};
            h->next = tail->next;
            tail->next = h;
            tail = h;
            ++length;
            return;
        }

        tail = new node{val};
        tail->next = tail;
        ++length;
    }
    
    void addAtIndex(int index, int val) {
        if (index > length){
            return;
        }
        if (length == 0) {
            tail = new node{val};
            tail->next = tail;
            ++length;
            return;
        }

        node* cur = tail;
        for (int i = 0; i < index; ++i) {
            cur = cur->next;
        }
        node* tmp = new node{val};
        tmp->next = cur->next;
        cur->next = tmp;
            
        if (index == length) {
            tail = tmp;
        }
        ++length;
    }
    
    void deleteAtIndex(int index) {
        if (index >= length){
            return;
        }

        if (length == 1) {
            delete tail;
            tail = nullptr;
            --length;
            return;
        }

        node* cur = tail;
        for (int i = 0; i < index; ++i) {
            cur = cur->next;
        }
        node* target = cur->next;
        cur->next = target->next;
        if (target == tail) {
            tail = cur;
        }
        
        delete target;
        --length;
    }

private:
    node* tail;
    int length;
};

int main(){
    MyLinkedList* myLinkedList = new MyLinkedList();
myLinkedList->addAtHead(1);
myLinkedList->addAtTail(3);
myLinkedList->addAtIndex(1, 2);    // linked list becomes 1->2->3
myLinkedList->get(1);              // return 2
myLinkedList->deleteAtIndex(1);    // now the linked list is 1->3
myLinkedList->get(1);              // return 3
}

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */