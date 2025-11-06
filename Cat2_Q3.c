/*
Name :Lenny Lepayapui
Reg no :CT101/G/26444/25
course: computer science
Description:c programming for files
Date:6/11/2025
*/
#include <stdio.h>

int main() {
    FILE *in, *out;
    int i, num, sum = 0;
    float average;

    // 1. Write 10 integers to input.txt
    in = fopen("input.txt", "w");
    if (in == NULL) { printf("Error opening input.txt\n"); return 1; }

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &num);
        fprintf(in, "%d\n", num);
    }
    fclose(in);

    // 2. Read integers, calculate sum & average, write to output.txt
    in = fopen("input.txt", "r");
    out = fopen("output.txt", "w");
    if (in == NULL || out == NULL) { 
        printf("Error opening file.\n"); 
        return 1; 
    }

    sum = 0;
    for (i = 0; i < 10; i++) {
        fscanf(in, "%d", &num);
        sum += num;
    }
    average = sum / 10.0;

    fprintf(out, "Sum = %d\nAverage = %.2f\n", sum, average);

    fclose(in);
    fclose(out);

    // 3. Display file contents
    printf("\nContents of input.txt:\n");
    in = fopen("input.txt", "r");
    while ((num = fgetc(in)) != EOF) putchar(num);
    fclose(in);

    printf("\nContents of output.txt:\n");
    out = fopen("output.txt", "r");
    while ((num = fgetc(out)) != EOF) putchar(num);
    fclose(out);

    return 0;
}