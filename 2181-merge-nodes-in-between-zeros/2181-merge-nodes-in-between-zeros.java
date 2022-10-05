/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode mergeNodes(ListNode head) {
    ListNode falseHead = new ListNode(0);
    ListNode itr = falseHead;

    while ( head != null )
    {
        if ( head.val == 0 && head.next != null ) {
            itr.next = new ListNode(0);
            itr = itr.next;
        }
        else
            itr.val += head.val;
        head = head.next;
    }

    return falseHead.next;
    }
}