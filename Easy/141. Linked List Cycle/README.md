# [141. Linked List Cycle](https://leetcode.com/problems/linked-list-cycle/description/)


## Time Complexity: 
O(n) in the best case (no cycle) and O(c) in the worst case (cycle with length c), where n is the number of nodes in the list.

## Space Complexity: 
O(1)

## Algorithm: 
Hare-Tortoise algorithm is a classic technique used to detect cycles in linked lists. It involves using two pointers, a slow pointer and a fast pointer, that start at the head of the list and traverse it at different speeds. If there's a cycle, the fast pointer will eventually catch up to the slow pointer, indicating the presence of a cycle. This algorithm is efficient and widely used due to its simplicity and effectiveness.