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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        //ListNode*ans = list1; //�i�H�౵(�ª�)list1�L�h
        //ListNode*ans = new ListNode(99); //�i�H�}�s��(��99)
        ListNode*ans = new ListNode(99,new ListNode(90));
        //�}�s�� Node �̭���99�A�᭱�౵(�s��Node�̦�90)
        return ans;
    } //�Ч�T�ت����A������L�A�� Test Result�̭�����Output
};
