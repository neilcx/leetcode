package main

import . "nc_tools"

type ListNode struct{
   Val int
   Next *ListNode
}

/*
 * type ListNode struct{
 *   Val int
 *   Next *ListNode
 * }
 */

/**
 *
 * @param pHead ListNode类
 * @return ListNode类
 */
func ReverseList( pHead *ListNode ) *ListNode {

	if pHead == nil || pHead.Next == nil {
		return pHead
	}

	cur := pHead
	var pNext *ListNode
	//pNext := cur

	for cur.Next != nil {
		pNext = cur.Next
		cur.Next = pNext.Next
		pNext.Next = pHead
		pHead = pNext
	}

	return pHead

}