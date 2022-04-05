#include"SEQ.h"
int main()
{
	ListNode* phead = NULL;
	ListInit(&phead);
	ListPushBank(&phead, 100);
	ListPushBank(&phead, 200);
	ListPushBank(&phead, 300);
	ListPushBank(&phead, 400);
	//ListPrintf(phead);
	ListPopBank(&phead);
	ListPrintf(phead);
	

	return 0;
}