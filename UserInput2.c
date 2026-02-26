// This is the more userinput practise

#include<stdio.h>

int main()

{

    char name [20];
    char g_mail[30];

    int num;

     printf("Please Enter your name ");
     gets(name);
    
    printf("Your Entered name is ");
     puts(name);

    printf("Please eneter your gmail ");
    fgets(g_mail, sizeof(g_mail), stdin);

    g_mail[strcspn(g_mail, "\n")]=0;
    printf("Your entered another name is: ");
    fputs(g_mail, stdout);

    // here is a another magic that if you want to take input as a string and print as a string

    printf("Please enter any number ");
    fgets(name, 20, stdin);

    num=atoi(name);

    printf(" your number is %d", num);
    
}
