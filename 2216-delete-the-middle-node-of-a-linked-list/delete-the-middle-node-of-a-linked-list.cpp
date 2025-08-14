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
    ListNode* deleteMiddle(ListNode* head) {
        if(head == NULL || head->next == NULL) {
            return NULL;
        }
        int cnt = 0;
        ListNode* temp = head;
        while(temp != NULL) {
            cnt++;
            temp = temp->next;
        }
        temp = head;
        int mid_index = cnt/2;
        for(int i = 0; i < mid_index-1; i++) {
            temp = temp->next;
        }
        ListNode* delNode = temp->next;
        temp->next= delNode->next;
        delete delNode;
        return head;
    }
};