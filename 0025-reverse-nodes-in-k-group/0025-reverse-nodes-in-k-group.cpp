/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {

 
        int count = 0;
        ListNode* temp = head;

        while (temp) {
            count++;
            temp = temp->next;
        }

        ListNode* current = head;
        ListNode* newHead = nullptr;
        ListNode* previousGroupTail = nullptr;

        while (count >= k) {

            ListNode* groupTail = current;

            ListNode* prev = nullptr;

            for (int i = 0; i < k; i++) {
                ListNode* next = current->next;

                current->next = prev;

                prev = current;
                current = next;
            }

            if (newHead == nullptr) {
                newHead = prev;
            }
            if (previousGroupTail != nullptr) {
                previousGroupTail->next = prev;
            }

            previousGroupTail = groupTail;

            count -= k;
        }
        if (previousGroupTail != nullptr) {
            previousGroupTail->next = current;
        }

        return newHead;
    }
};

