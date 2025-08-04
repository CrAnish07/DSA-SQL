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
    ListNode* sortList(ListNode* head) {
        ListNode* temp = head;
        vector<int> vals;
        while(temp != NULL) {
            vals.push_back(temp->val);
            temp = temp->next;
        }
        sort(vals.begin(), vals.end());
        temp = head;
        int i = 0;
        while(temp != NULL) {
            temp->val = vals[i];
            i++;
            temp = temp->next;
        }
        return head;
    }
};