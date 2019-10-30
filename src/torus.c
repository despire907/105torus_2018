/*
** EPITECH PROJECT, 2018
** 105torus
** File description:
** torus.c
*/

#include "torus.h"

int main(int ac, char **av)
{
    if (ac == 2 && !strcmp(av[1], "-h"))
        printf("USAGE\n"
               "\t./105torus opt a0 a1 a2 a3 a4 n\n\n"
               "DESCRIPTION\n"
               "\topt\tmethod option:\n"
               "\t\t\t1 for the bisection method\n"
               "\t\t\t2 for Newton’s method\n"
               "\t\t\t3 for the secant method\n"
               "\ta[0-4]\tcoefficients of the equation\n"
               "\tn\tprecision (the application of the polynomial to the "
               "solution should\n\t\tbe smaller than 10ˆ-n)\n");
    else if (ac == 8)
        printf("x = ?\n");
    else
        return 84;
    return 0;
}