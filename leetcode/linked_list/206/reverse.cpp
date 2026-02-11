
// Definition for singly-linked list.
#include <cinttypes>
#include <cstdio>
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr) {
            return head;
        }

        if (head->next == nullptr) {
            return head;
        }

        
        ListNode* l = head;
        ListNode* c = head->next;
        head->next = nullptr;

        // 1 2 3 4 5
        // l c
        // c -> l
        // 
        while (c) {
            ListNode* tmp = c->next;
            c->next = l;
            l = c;
            c = tmp;
        }
        return l;
    }
};