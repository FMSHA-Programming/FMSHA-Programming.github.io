#include <stdio.h>

void print(unsigned int num){
	int arr[32];
	for (int i = 31; i >= 0; i--){
		arr[i] = 1 & num;
		num = num >> 1;}
	for (int i = 0; i < 32; i++){
		printf ("%d", arr[i]);}
}

int uryu ( int n, int k ){
    int c = n << (32 - k);
    if ( (c >> 31) & 1 ){
        return ((1 << 31) >> (31 - k)) ^ (c >> (32 - k));
    }
    return c >> (32 - k);
}

int main()
{
    int n, k;
    scanf ("%d", &n);
    scanf ("%d", &k);
    printf ("%d", uryu (n, k));
	putchar('\n');
	print(n);
	putchar('\n');
	print(uryu (n, k));
	putchar('\n');

    return 0;
}
