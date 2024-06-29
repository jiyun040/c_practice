#include <stdio.h>

int two() {
    int sum = 0;
    for (int i = 1; i <= 2; i++) {
        sum += i;
    }
    return sum;
}

int five() {
    int sum = 0;
    for (int i = 1; i <= 5; i++) {
        sum += i;
    }
    return sum;
}

int hund() {
    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    printf("%d\n", two()); 
    printf("%d\n", five()); 
    printf("%d\n", hund()); 

    return 0;
}
