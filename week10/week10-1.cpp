#include <stdio.h>
int func(int n){
    if(n==1) return 1; /// 終止條件，像「數學歸納法」
    return n*func(n-1);
}
int main()
{
    printf("請輸入N:");
    int N;
    scanf("%d",&N);
    int ans=func(N);
    printf("%d",ans);
}
