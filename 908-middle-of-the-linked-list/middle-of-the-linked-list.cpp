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
    ListNode* middleNode(ListNode* head) {
        if(head == NULL || head->next == NULL ) return head;
        int cnt = 0;
        ListNode* temp = head;
        while(temp != NULL) {
            cnt++;
            temp = temp->next;
        }
        ListNode* newNode = new ListNode(-1);
        temp = head;
        int i = 1;
        while(temp != NULL) {
            if(i == (cnt/2)) {
                newNode->next = temp->next;
                temp->next = nullptr;
            }
            i++;
            temp = temp->next;
        }
        return newNode->next;
    }
};