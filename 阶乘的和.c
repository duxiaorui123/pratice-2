////1到a的阶乘的和
//# include <stdio.h>
//
//long long int f(int n)      //定义long long int类型，避免数值溢出
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * f(n - 1);
//	}
//}
//int main(void)
//{
//	int a;
//	long long int sum;
//	scanf_s("%d", &a);
//	sum = 0;
//	for (int i = 1; i < a + 1; ++i)
//	{
//		sum += f(i);
//	}
//	printf("%lld", sum);
//	return 0;
//}