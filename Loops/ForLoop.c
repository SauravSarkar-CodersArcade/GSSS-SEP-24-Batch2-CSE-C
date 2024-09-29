#include <stdio.h>

int main() {
//    int a = 10;
//    printf("%d\n",a++);
//    printf("%d\n",a);
//    for (int i = 0; i < 10; i++) {
//        printf("%d GSSS.\n", i);
//    }
    for (int i = 0; i <= 5; ++i) {
        if(i == 4)
            break;
        printf("%d ", i);
    }
    return 0;
}
