#include <bits/stdc++.h>
#include <regex>
#include <unordered_map>

using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if (!head) {
            return nullptr;
        }

        ListNode* s = head;
        ListNode* f = head;

        while (s && f->next) {
            s = s->next;
            f = f->next->next;

            if (s == f) {
                ListNode* p1 = head;
                ListNode* p2 = f;
                while (p1 != p2) {
                    p1 = p1->next;
                    p2 = p2->next;
                }
                return p1;
            }
        }


        return nullptr;
    }
};