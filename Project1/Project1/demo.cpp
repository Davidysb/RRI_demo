#include <string.h>
#include <stdio.h>
int main(){
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++){
		arr[i] = i + 1;
		printf("%d\n", arr[i]);
	}
	
	return 0;
}