#include <stdio.h>

int main(void) {
  int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int i = 2;
    while (num != 1) {
        if (num % i == 0) {
            printf("%d\n", i);
            num = num / i;
            i = 2;
        }else {
            i++;
        }
    }
    return 0;
}
