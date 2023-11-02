#include <stdio.h>

int main() {
    float s1Length, s2Length, s3Length;

    printf("Enter Length of Side 1: ");
    scanf("%f", &s1Length);
    printf("Enter Length of Side 2: ");
    scanf("%f", &s2Length);
    printf("Enter Length of Side 3: ");
    scanf("%f", &s3Length);

    if (s1Length == s2Length && s2Length == s3Length) {
        printf("Equilateral Triangle\n");
    } 
    else if (s1Length == s2Length || s2Length == s3Length || s1Length == s3Length) {
        printf("Isosceles Triangle\n");
    } 
    else {
        printf("Scalene Triangle\n");
    }

    return 0;
}

