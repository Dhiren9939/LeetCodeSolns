# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        traverse = head
        while n:
            traverse = traverse.next
            n -= 1

        if not traverse:
            return head.next

        traverse = traverse.next
        prev = head
        while traverse:
            prev = prev.next
            traverse = traverse.next

        prev.next = prev.next.next
        return head
