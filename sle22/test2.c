#include "stdio.h"

int main() {
	char str[128];
	printf("�ҵ�������:");
	scanf("%s", str);

	printf("�ҵ�������%s\n", str);
	printf("�ڴ��ַ��%p\n", str);
	printf("�ڴ��ַ��%p\n", &str[0]);

	return 0;
}
