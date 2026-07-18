class Solution
{
public:
    ListNode *removeElements(ListNode *&head, int val)
    {
        ListNode *tmp = head;

        while (tmp != NULL)
        {
            if (head->val == val)
            {
                ListNode *del = head;
                head = head->next;
                delete del;
            }
            if (tmp->next->val == val)
            {
                ListNode *del = tmp->next;
                tmp->next = del->next;
                delete del;
            }
            tmp = tmp->next;
        }
        return head;
    }
};