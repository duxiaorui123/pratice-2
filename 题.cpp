#include<stdio.h>
int main() {
	char s[10] = {"\0"};
	scanf_s("%s", s,sizeof(char));  //or scanf("%s")
	printf("%s", s);
	return 0;
}