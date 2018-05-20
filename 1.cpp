算法思想：
	Java简单运算。arr[]中的元素代表号码的数字,index[]中的数字,代表
数字在arr[]中的下标,用C的方法运行一下即可。
***************************************************************/
#include<stdio.h>
int main()
{
	int arr[] = {8,2,1,0,3};
	int index[] = {2,0,3,2,4,0,1,3,2,3,3};
	int i;
	for( i=0;i<11;i++ )
	{
		printf("%d",arr[index[i]]);
		if( i%4==2 )	//从arr[2]开始，每4个数字，分隔一次
			printf(" ");
	}
	printf("\n");
	return 0;
}



