//# include <stdio.h>
//# include <malloc.h>
////ð������
//int g(int* p, int len)
//{
//	for (int i = 0; i < len - 1; ++i)
//	{
//		for (int j = 0; j < len - i - 1; ++j)
//		{
//			if (p[j] > p[j + 1])
//			{
//				int t;
//				t = p[j];
//				p[j] = p[j + 1];
//				p[j + 1] = t;
//			}
//		}
//	}
//	return 0;
//}
//int main(void)
//{
//	int n, i;
//	printf("��������ָ���Ϊ��");
//	scanf_s("%d", &n);
//	int* q = (int*)malloc(sizeof(int) * n);
//	printf("����������:");
//	for (i = 0; i < n; ++i)
//	{
//		scanf_s("%d", &q[i]);
//	}
//	g(q, n);
//	printf("��Щ���ִ�С��������Ϊ:");
//	for (i = 0; i < n; ++i)
//	{
//		printf("%d ", q[i]);
//	}
//	return 0;
//}