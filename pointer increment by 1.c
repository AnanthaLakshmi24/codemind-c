
#include <stdio.h>
void incrementByOne(int *numPtr) {
    (*numPtr)++;
}
int main() {
    int number;
    scanf("%d", &number);


    incrementByOne(&number);

    printf("%d\n", number);

    return 0;
}
