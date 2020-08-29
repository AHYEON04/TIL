#include <stdio.h>
 
void tsn(int i) {
    int num = i;
    int count = 0;
 
    do {
        if (num % 10 != 0) {
            if ((num % 10) % 3 == 0) {
                printf("¦");
                count++;
            }
        }
 
        num = num / 10;
 
    } while (num > 0);
 
    if (count == 0) {
        printf("%d ", i);
    }
    else {
        printf(" ");
    }
 
    return;
}
 
 
int main() {
    int N;
 
    scanf("%d", &N);
 
    for (int i = 1; i <= N; i++) {
        tsn(i);
    }
 
    return 0;
}



