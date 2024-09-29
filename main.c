////#include <stdio.h>
////#include <stdbool.h>
////#define PI 3.14
////int main() {
////    // Question 1
//////    double radius;
//////    printf("Enter the radius:\n");
//////    scanf("%lf", &radius);
//////    double area = PI * radius * radius;
//////    printf("The area is: %.2lf", area);
////    // ASCII
//////    char ch;
//////    printf("Enter the character:\n");
//////    scanf("%c", &ch);
//////    printf("The ASCII value is %d\n", ch);
//////    printf("%d", '2'-'0');
//////    int hours = 24;
//////    printf("Number of seconds: %d\n", hours*60*60);
//////    double p;
//////    int time;
//////    double rate;
//////    scanf("%lf %d %lf", &p, &time, &rate);
//////    printf("SI: %.2lf\n", p*time*rate*0.01);
//////    printf("%d\n", 'a'-'A');
//////    printf("%c\n", 'a'-32);
//////    printf("%c\n", 'A'+32);
//////    int a = 10;
//////    int b = 20;
//////    printf("%d\n", a++ + ++b);
//////    printf("%d %d", a,b);
////
////    return 0;
////}
//#include <stdio.h>
//#include <string.h>
//
//// Function to sort an array of strings
//void sortStrings(char arr[][100], int n) {
//    char temp[100];
//    for (int i = 0; i < n - 1; i++) {
//        for (int j = i + 1; j < n; j++) {
//            if (strcmp(arr[i], arr[j]) > 0) {
//                // Swap strings
//                strcpy(temp, arr[i]);
//                strcpy(arr[i], arr[j]);
//                strcpy(arr[j], temp);
//            }
//        }
//    }
//}
//
//int main() {
//    int n;
//
//    // Input number of strings
//    printf("Enter the number of strings: ");
//    scanf("%d", &n);
//    getchar(); // To consume the newline character
//
//    char arr[n][100];
//
//    // Input the strings
//    printf("Enter the strings:\n");
//    for (int i = 0; i < n; i++) {
//        gets(arr[i]);
//    }
//
//    // Sort the strings
//    sortStrings(arr, n);
//
//    // Display the sorted strings
//    printf("Sorted strings:\n");
//    for (int i = 0; i < n; i++) {
//        printf("%s\n", arr[i]);
//    }
//
//    return 0;
//}

#include <stdio.h>
#include <string.h>
struct Employee {
    char name[20];
    int age;
    int empID;
};
int main() {
    char data[20]; // Static Memory
    strcpy(data, "Sahana");
    struct Employee e1;
    strcpy(e1.name, "Sahana");
    return 0;
}
