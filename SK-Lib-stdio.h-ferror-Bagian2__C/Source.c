#pragma warning(disable:4996)

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
    Source by GeeksForGeeks (https://www.geeksforgeeks.org)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    FILE* fp;

    char feedback[100];

    int i;
    fp = fopen("GeeksForGeeks.TXT", "w");

    if (fp == NULL) {
        printf("\n The file could not be opened");
        exit(1);
    }

    printf("\n Provide feedback on this article: ");
    fgets(feedback, 100, stdin);

    for (i = 0; i < feedback[i]; i++) {
        fputc(feedback[i], fp);
    }
        
    if (ferror(fp)) {
        printf("\n Error writing in file");
        exit(1);
    }

    _getch();
    fclose(fp);
}