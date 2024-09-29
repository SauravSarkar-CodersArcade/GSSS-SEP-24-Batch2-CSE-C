#include <stdio.h>
int isPrime(int n){
    if(n <= 1) return 0;
    for (int i = 2; i <= n/2; ++i) {
        if(n % i == 0) return 0;
    }
    return 1;
}
void displayPrimeInIntervals(int start, int end){
    for (int i = start; i <= end ; ++i) {
        if(isPrime(i)){
            printf("%d ", i);
        }
    }
}
int main() {
    displayPrimeInIntervals(20,30);
    return 0;
}
