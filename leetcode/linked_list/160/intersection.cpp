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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (headA == nullptr || headB == nullptr) {
            return nullptr;
        }

        // get length
        int lengthA {0};
        int lengthB {0};

        ListNode* curr = headA;
        while (curr) {
            ++lengthA;
            curr = curr->next;
        }
        curr = headB;
        while (curr) {
            ++lengthB;
            curr = curr->next;
        }

        // double ptr
        // swap to make A not longer than B
        int lenDif {0};
        if (lengthA > lengthB) {
            ListNode* tmp = headB;
            headB = headA;
            headA = tmp;
            int tmpLen = lengthB;
            lengthB = lengthA;
            lengthA = tmpLen;
        }
        lenDif = lengthB - lengthA;
        int count {0};
        ListNode* curA = headA;
        ListNode* curB = headB;
        
        while (curA && curB) {
            if (curA == curB) {
                return curA;
            }
            curB = curB->next;
            ++count;
            if (count > lenDif) {
                curA = curA->next;
            }
        }

        return nullptr;        
    }
};
