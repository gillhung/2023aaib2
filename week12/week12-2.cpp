# include <stdio.h>
int main()
{
    int n=2;
    int a[2][3]={{10,20,30},{11,22,33}};
    int b[2][3]={{3,2,1},{4,3,2}};
    int c[2][2];
    ///Part 1 �|Ū a[i][j]�C���]�n�A�N���ΦAŪ
    ///Part 2 �|Ū b[i][j]�C���]�n�A�N���ΦAŪ
    for(int i=0;i<n;i++){ ///Part 3 �L���
        for(int j=0;j<n;j++){
            int*p1=&a[i][j] ///���F�bTutor�q�b�Y
            printf("%3d ",a[i][j]);
        }
        printf("\n");
    }
}
