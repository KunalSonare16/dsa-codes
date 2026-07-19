class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*> visited;

        while(headA){
            visited.insert(headA);
            headA = headA->next;
        }

        while(headB){
            if(visited.count(headB)){
                return headB;
            }
            headB = headB->next;
        }

        return nullptr;
    }
};