#include<stdio.h>
//写一个函数打印arr数组的内容，不使用数组下标，使用指针。
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int* p = &arr;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	for (n = 1; n <= 7; n++)
//	{
//		for (m = 0; m < 7 - n; m++)
//		{
//			printf(" ");
//		}
//		for (m = 0; m <2*n-1; m++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (n = 1; n < 7; n++)
//	{
//		for (m = 0; m < n; m++)
//		{
//			printf(" ");
//		}
//		for (m = 12; m > 2 * n - 1; m--)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//求出0～100000之间的所有“水仙花数”并输出。

#include <math.h>
//int main()
//{
//	int n = 0;
//	for (n = 0; n <= 100000; n++)
//	{
//        int count = 1;
//        int sum = 0;
//        int m = n;
//        while (m / 10) 
//        {
//            count++;
//            m /= 10;
//        }
//        m = n;
//        while (m) {
//            sum += pow(m % 10, count);
//            m /= 10;            
//        }
//        if (n == sum) {
//            printf("%d\n", sum);
//        }
//    }
//    return 0;
//}
int main()
{
	int num, sum, a, b, c, d, e;
	scanf_s("%d", &num);
	a = num;
	b = num * 10 + a;
	c = num * 100 + b;
	d = num * 1000 + c;
	e = num * 10000 + d;
	sum = a + b + c + d + e;
	printf("%d+%d+%d+%d+%d=%d\n", a, b, c, d, e, sum);
	return 0;
}