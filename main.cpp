/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

int main()
{

    double c, f;
    
    printf("Digite a temperatura em Celsius ");
    scanf("%lf",&c);
    
    f = 9*c/5 +32;
    
    printf("O valor correspondente em Fahrenheit: %lf", f);
    
    
    
    return 0;
}