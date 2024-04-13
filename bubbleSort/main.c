#include <stdio.h>
#include "bubbleSort.h"
#include <stdbool.h>

#define ARRY_LENTH 5

/*Static Var*/
static int SortDir;

void GetUserPrintNum(int* Arry,int len );

int main()
{

	int SourArry[ARRY_LENTH];// , DestionArry[ARRY_LENTH], Len;
	
	GetUserPrintNum(SourArry , ARRY_LENTH);

	printf("原数据顺序为:\n");
	for (int j = 0; j < ARRY_LENTH; j++)
	{
		printf(" %d ", SourArry[j] );
	}

	bubbleSort(SourArry , ARRY_LENTH);
	printf("\n");
	printf("排序后数据为:\n");

	if(SortDir == 0)
	{
		for (int j = 0; j < ARRY_LENTH; j++)
		{
			printf(" %d ", SourArry[j]);
		}
	}
	else
	{
		for (int j = ARRY_LENTH - 1; j >= 0; j--)
		{
			printf(" %d ", SourArry[j]);
		}
	}

	return 0;
}

void GetUserPrintNum(int* Arry, int len)
{
	int i = 0;
	bool ErrScanf = 1;
	while(ErrScanf)
	{
		printf("请输排序方向：\n");
		printf("0 : 从小到大排序\n");
		printf("1 ：从大往小排序\n");
		scanf("%d",&SortDir);
		if((SortDir >= 0) && (SortDir <= 1))
		{
			ErrScanf = 0;
		}
		else
		{
			ErrScanf = 1;
		}	
	}

	do
	{
		printf("请输入要排序的整数数字(每次一个,以回车结束)\n");
		scanf("%d", &Arry[i]);
		printf("这是第 %d 个数字，还有 %d 个数字待输入\n", i + 1, len - i - 1);
		i++;

	} while (i < len);

}