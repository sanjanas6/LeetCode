class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode *l, *p1, *p2, *p3;
        int d1, d2, carry; 

        p1 = l1;
        p2 = l2;   

        carry = 0;    

        p3 = new ListNode;
        l = p3;

        while (p1 || p2)
        {
            d1 = p1 ? p1->val : 0;    
            d2 = p2 ? p2->val : 0;

            p3->val = (carry + d1 + d2) % 10;
            carry = (carry + d1 + d2) / 10;

            if (p1) p1 = p1->next;
            if (p2) p2 = p2->next;   

            if (p1 || p2)
            {
                p3->next = new ListNode;
                p3 = p3->next;
            }             
        }

        if (carry)
        {   
            p3->next = new ListNode;
            p3 = p3->next;
            p3->val = carry;
        }

        return l;
    }
};