#include<stdio.h>
#include<cs50.h>
int main(void)
{
    int paraustu=0;
    int kurussayısı=0;
    while(paraustu<=0)
{

    printf("kaç kuruş para üstü kaldı?= ");
    if (scanf("%d",&paraustu) !=1)
{
             while (getchar() != '\n');
             paraustu=0;
             printf( "uyarı!!sayı giriniz= ");
}
else if(paraustu <=0)
{
    printf( "pozitif sayı giriniz= ");
}
}


kurussayısı += paraustu/50;
paraustu %= 50;
kurussayısı += paraustu/25;
paraustu %= 25;
kurussayısı += paraustu/10;
paraustu %= 10;
kurussayısı += paraustu/5;
paraustu %= 5;
kurussayısı += paraustu/1;

printf("%d tane kuruş gerekir",kurussayısı);
}
