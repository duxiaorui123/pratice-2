////1��a�Ľ׳˵ĺ�
//# include <stdio.h>
//
//long long int f(int n)      //����long long int���ͣ�������ֵ���
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