#include <stdio.h>
int main()
{
    int BOUND=20000,ans=0;
    int table[20000]={}; /// ����l�A����0
    for(int i=2;i<BOUND;i++){
        if(table[i]==0){ ///�ٯd�ۡA�S���Q����
            ans++;
            for(int k=i*i;k<BOUND;k+=i){
                table[k]=-1;
            }
        }
    }
    printf("��Ʀ�:%d ��\n",ans);
}
