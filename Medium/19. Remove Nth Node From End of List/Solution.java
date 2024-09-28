//   Definition for singly-linked list.
//   public class ListNode {
//   int val;
//   ListNode next;
//   ListNode() {}
//   ListNode(int val) { this.val = val; }
//   ListNode(int val, ListNode next) { this.val = val; this.next = next; }
//   }
 
class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {
        ListNode traverse = head;
        while(n!=0){
            traverse = traverse.next;
            n--;
        }

        if(traverse == null) return head.next;

        traverse = traverse.next;
        ListNode prev = head;
        while(traverse != null){
            prev = prev.next;
            traverse = traverse.next;
        }
        
        prev.next = prev.next.next;
        return head;
    }
}