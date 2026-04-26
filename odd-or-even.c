#include <stdio.h>

int main() {

	int x;
	
	printf("Enter num: ");
	scanf("%d", &x);
	
	if (x < 0) {
	    printf("Negative");
	} else if (x > 0) {
	    printf("Positive");
	} else {
	    printf("Zero");
	}

    return 0;
}