#include <stdio.h>

int t(int a){return a+1;}
int main(){
	int (*p)(int a) = &t;
	int s = (*p)(3);
	printf("%d\n",s);
	return 0;
}
