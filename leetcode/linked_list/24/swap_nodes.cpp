
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
    ListNode* swapPairs(ListNode* head) {
        if (head == nullptr) {
            return head;
        }

        if (head->next == nullptr) {
            return head;
        }

        ListNode* pre = nullptr;
        ListNode* cur = head;
        ListNode* ne1 = head->next;
        ListNode* ne2 = head->next->next;
        ListNode* res = ne1;

        while (ne1) {
            ne1->next = cur;
            cur->next = ne2;
            if (pre != nullptr) {
                pre->next = ne1;
            }

            pre = cur;
            cur = ne2;
            ne1 = cur ? cur->next : nullptr;
            ne2 = ne1 ? ne1->next : nullptr;
        }

        return res;
    }
};