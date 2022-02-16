#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool prime(int str) {
	int k=0;
	int i;
    for (i=2;i<str;i++){
        if(str%i==0)
            k++;
    }
    if (k == 0)
        return true;
    else
        return false;
}

int main(int argc, char** argv) {
	int str;

	printf("Enter a number: ");
	scanf("%d", &str);

	if (prime(str))
		printf("%d is a prime number\n", str);
	else
		printf("%d is not a prime number\n", str);

	return 0;
}
