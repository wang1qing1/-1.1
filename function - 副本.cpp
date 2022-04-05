#include"SEQ.h"

void ListPrintf(ListNode* phead)
{
	assert(phead);
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
}

ListNode* BuyListNode( int x)
{
	ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));
	newnode->data = x;
	newnode->next = NULL;
	newnode->prev = NULL;
	return newnode;
}

void ListInit(ListNode **pphead)
{
	*pphead = BuyListNode(0);
	(* pphead)->next = *pphead;
	(* pphead)->prev = *pphead;
}

void ListPushBank(ListNode** pphead, SListdataType x)
{
	assert(*pphead);
	ListNode* tail = (*pphead)->prev;
	ListNode* newnode = BuyListNode(x);
	newnode->next = *pphead;
	(*pphead)->prev = newnode;
	newnode->prev = tail;
	tail->next = newnode;
}

void ListPopBank(ListNode** pphead)
{
	assert(*pphead);
	assert((*pphead)->next != *pphead);
	ListNode* tail = (*pphead)->prev;
	ListNode* tail_prev = tail->prev;
	tail_prev->next = *pphead;
	(*pphead)->prev = tail_prev;
	free(tail);
	tail = NULL;
}
