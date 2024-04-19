#include <stdio.h>
int globalA=300; ///外面的全域變數
void myFuncA(){
    int localA=500;
    globalA=0;
    printf("myFunc():global:%d localA:%d\n",globalA,localA);
}
int main()
{
    int localA=200;
    printf("main():globalA:%d localA:%d\n",globalA,localA);
    myFuncA();
    printf("main():globalA:%d localA:%d\n",globalA,localA);
}
