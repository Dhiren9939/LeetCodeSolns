# [19. Remove Nth Node From End of List](https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/)

## Time Complexity:
O(N)
## Space Complexity:
O(1)
## Algorithm: 
It starts by advancing a `traverse` pointer `n` steps ahead in the list. If `traverse` reaches the end (null) after this, it indicates that the `head` needs to be removed, so it returns `head.next`. If `traverse` is not null, it continues by moving `traverse` one step further and initializes a `prev` pointer at the `head`. Then, it iterates through the list until `traverse` reaches the end, simultaneously advancing `prev`. Once `traverse` is `null`, prev will be positioned just before the target node to be removed, allowing the code to adjust `prev.next` to skip the nth node from the end. Finally, it returns the modified head of the list.