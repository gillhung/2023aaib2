#include <stdio.h>
int isPrime(int n)
{
    for(int i=2;i<n;i++){
        if(n%i==0) return 0; ///�Q�㰣�A�N���O���
    }
    return 1;
}
int main()
{ ///�Q��BOUND�ܼơA�ݬݨ쩳�n�]�h�j���d��A30�U�A�~����2�U�ӼƦr
    int BOUND=300000,ans=0;
    for(int i=2;i<BOUND;i++){
        if(isPrime(i)){
            printf("%d",i); /// �L�X���
            ans++; /// �P��++�A�h�@�ӽ��
        }
    }
    printf("��Ʀ�:%d ��\n",ans);
}