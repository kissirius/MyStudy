#include <stdio.h>

#define MAXSIZE 10

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

typedef int Status;
typedef int ElemType;

typedef struct
{
	ElemType data[MAXSIZE];
	int length;
} SqList;


Status GetElem(SqList L, int i, ElemType * e)  // 获得元素操作
{
	if (L.length == 0 || i<1 || i >L.length) // 1. 链表长度等于0； 2. i（所处位置不能脱离其范围）；
		return ERROR;
	*e = L.data[i - 1];
	return OK;
}

Status ListInsert(SqList * L, int i, ElemType e)
{
	int k;
	if (L->length == MAXSIZE)     // 顺序线表已经满
		return ERROR;
	if (i <1 || i> L->length + 1)   // 插入的位置不在范围内
		return ERROR;

	if (i < L->length)
	{
		for (k = L->length - 1; k >= i - 1; k--)
		{
			//                                             printf("L->data[%d] = L->data[%d]\n", L->data[k + 1], L->data[k]);
			L->data[k + 1] = L->data[k];
		}
	}
	L->data[i - 1] = e;
	L->length++;
	return OK;
}

void input_val(SqList * qlist)
{
	int i, j;
	for (i = 0, j = 0; i < MAXSIZE; i++, j++)
		scanf("%d", qlist->data[i]);

	qlist->length = j;
}

int main()
{
	SqList qlist;

	input_val(&qlist);

	return 0;
}
