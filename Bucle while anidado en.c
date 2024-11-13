#include <stdio.h>
int main() {
    int i = 0;
    while (i < 3) {
        int j = 0;
        while (j < 2) {
            printf("i = %d, j = %d\n", i, j);
            j++;
        }
        i++;
    }
    return 0;
}
