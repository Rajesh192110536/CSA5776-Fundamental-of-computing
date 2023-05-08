#include <stdio.h                                                                                             >

int main()                                                                                                    {
    int num, remainder                                                                                        ;

    printf("enter an integer number: ")                                                                       ;
    scanf("%d", &num)                                                                                         ;

    printf("Digits in %d are: ", num)                                                                         ;

    while (num > 0)                                                                                           {
        remainder = num % 10                                                                                  ;
        printf("%d ", remainder)                                                                              ;
        num /= 10                                                                                             ;
                                                                                                              }

    return 0                                                                                                  ;
                                                                                                              }

