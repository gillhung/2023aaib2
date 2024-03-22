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
    bool isPalindrome(ListNode* head) {
        int a[100000],N=0; ///陣列最多10萬個
        while(head!=NULL){
            a[N++] = head -> val;
            head = head -> next;
        }
        for(int i=0;i<N/2;i++){
            if(a[i] != a[N-1-i]) return false;
        }
        return true;
    }
};
