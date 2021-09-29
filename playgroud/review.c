#include <stdio.h>
#include <math.h>

int is_or_not(char s[], size_t size, char ch){
	for (size_t i=0; i < size - 1; i++){
		if (s[i]==ch){
			return 1;
		}else{
			return 0;
		}
		}
	return 0;
}

int main(){
	char ch;
	int size;
	printf("Please, enter the number of chars: ");
	scanf("%d", &size);
	printf("Please, enter the string: ");
	char s[size];
	scanf("%s", s);
	printf("Please, enter the char: ");
	scanf("%s", &ch);
	int x=is_or_not(s, size, ch);
	if (x==0){
		printf("The char is not in the string");
	}else{
		printf("The char is in the string");
		}
	return 0;
}