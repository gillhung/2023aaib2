///要認識float 浮點數(floating point number)
#include <stdio.h>
int main()
{ ///寫了這麼多位，結果在c語言(CPU運作中)裡，只用了少少位數
    float pi = 3.141592653589793238462643383279;
    double pi2 = 3.141592653589793238462643383279;
    printf("float %f\n",pi);
    printf("double %f\n",pi2);
    printf("float 10位: %10f\n",pi);
    printf("double 10位: %10f\n",pi2);
    printf("float 10位: %20.18f\n",pi);
    printf("double 10位: %20.18f\n",pi2);
}

