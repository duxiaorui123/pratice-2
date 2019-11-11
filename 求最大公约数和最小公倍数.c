//# include <stdio.h>
//
//int gcd(int, int);
//int lcm(int, int);
//
//int main(void)
//{
//	int a, b;
//
//	scanf_s("%d %d", &a, &b);
//	printf("%d %d", gcd(a, b), lcm(a, b));
//
//	return 0;
//}
//int gcd(int a, int b)
//{
//	if (b == 0)
//	{
//		return a;
//	}
//	else
//	{
//		gcd(b, a % b);
//	}
//}
//int lcm(int a, int b)
//{
//	return a * b / gcd(a, b);
//}