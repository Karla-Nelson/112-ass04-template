// main.c — local sandbox, do NOT submit

#include <stdio.h>

// prototypes from code.c
void   clear_string(char s[], int n);
int    my_isdigit(char c);
int    my_islower(char c);
int    my_isupper(char c);
int    my_isalpha(char c);
int    my_isalnum(char c);
int    my_strcmp(char a[], char b[]);
int    my_strchr(char s[], char c);
int    my_pow(int a, int b);
double my_pow_double(double a, int b);
char * format_my_isupper(char dest[], char c, int r);
char * format_my_isalpha(char dest[], char c, int r);
char * format_my_isalnum(char dest[], char c, int r);
char * format_my_strcmp(char dest[], int r);
char * format_my_strchr(char dest[], int r);
char * format_my_pow(char dest[], int r);
char * format_my_pow_double(char dest[], double r);

int main(void)
{
    char buf[64]; 
    
    //clear_string(buf, 64);



    // test your functions here:


    int r1 = my_isdigit('a');
    int r2 = my_islower('A');
    int r3 = my_isupper('a');
    int r4 = my_isalpha('A');
    int r5 = my_isalnum('-');
    int r6 = my_strcmp('abc', 'abb');
    int r7 = my_strchr("hello", '3');
    int r8 = my_pow(2, 3);
    double r9 = my_pow_double(2.5, 9);
    printf(format_my_isupper(buf, 'A', 64));
    printf(format_my_isalpha(buf, '4', 64));
    printf(format_my_isalnum(buf, '4', 64));
    printf(format_my_strcmp(buf, r6));
    printf(format_my_strchr(buf, r7));
    printf(format_my_pow(buf, r8));
    printf(format_my_pow_double(buf, r9));



    // printf("%d\n", my_pow(2, 8));
    // printf("%s\n", format_my_pow(buf, my_pow(2, 8)));

    return 0;
}