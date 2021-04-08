#include <stdio.h>

float tbamduong()
{
    int n;
    int a =0;
    int b =0;
    float s[100];
    float tduong=0, tam=0;
    printf("nhap so phan tu mang\n");
    scanf("%d",&n);
    for (int i = 0; i <n; i++){
        printf("nhap so thu %d\n",i);
        scanf("%f",&s[i]);
        if (s[i]>=0)
        {
            tbduong += s[i];
            a +=1;
        }
        else 
        {
            tbam -= s[i];
            b+=1;
        }
    }
    return tbduong/a, -tbam/b;

}