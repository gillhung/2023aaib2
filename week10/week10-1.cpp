#include <stdio.h>
int func(int n){
    if(n==1) return 1; /// �פ����A���u�ƾ��k�Ǫk�v
    return n*func(n-1);
}
int main()
{
    printf("�п�JN:");
    int N;
    scanf("%d",&N);
    int ans=func(N);
    printf("%d",ans);
}
