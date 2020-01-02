#include <stdio.h>

int main(){
	char a[] = "name for linux";
	//char *a = "hello world";
	a[4] = '\0';
	printf("%s\n",a);
	return 0;
}

