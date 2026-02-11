// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* res {};
        ListNode* curr {head};
        ListNode* target {nullptr};
        ListNode* preOfTarget {nullptr};

        int count {0};

        while (curr) {
            curr = curr->next;
            ++count;
            if (count >= n) {
                if (target == nullptr) {
                    target = head;
                } else {
                    preOfTarget = target;
                    target = target->next;
                }
            }
        }

        if (target == head) {
            head = head->next;
            delete target;
            return head;
        }

        if (preOfTarget != nullptr && target != nullptr)
        {
            preOfTarget->next = target->next;
            delete target;
            return head;
        }

        return head;
    }
};