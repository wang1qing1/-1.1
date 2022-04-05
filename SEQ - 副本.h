#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS
typedef int SListdataType;
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef struct ListNode
{
	SListdataType data;
	struct ListNode *prev;
	struct ListNode* next;
}ListNode;

void ListInit(ListNode** pphead);

ListNode* BuyListNode(int x);

void ListPushBank(ListNode** pphead, SListdataType x);

void ListPrintf(ListNode* phead);

void ListPopBank(ListNode** pphead);
