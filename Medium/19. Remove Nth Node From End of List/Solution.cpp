#include <stdlib.h>

// Definition for singly-linked list.
// struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode() : val(0), next(nullptr) {}
//     ListNode(int x) : val(x), next(nullptr) {}
//     ListNode(int x, ListNode *next) : val(x), next(next) {}
// };

class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *traverse = head;
        while (n != 0)
        {
            traverse = traverse->next;
            n--;
        }

        if (traverse == NULL)
            return head->next;

        traverse = traverse->next;
        ListNode *prev = head;
        while (traverse != NULL)
        {
            prev = prev->next;
            traverse = traverse->next;
        }

        prev->next = prev->next->next;
        return head;
    }
};