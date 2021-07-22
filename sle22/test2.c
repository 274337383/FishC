#include "stdio.h"

int main() {
	char str[128];
	printf("我的域名是:");
	scanf("%s", str);

	printf("我的域名是%s\n", str);
	printf("内存地址是%p\n", str);
	printf("内存地址是%p\n", &str[0]);

	return 0;
}
