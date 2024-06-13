#include<stdio.h>

int main() 
{
    int a[3];
    printf("Please enter obtained marks in English: ");
    scanf("%d", &a[0]);
    if (a[0] > 100) 
    {
        printf("Invalid marks! Please enter the marks again.\n");
    }
    printf("Please enter obtained marks in Hindi: ");
    scanf("%d", &a[1]);
    if (a[1] > 100) 
    {
        printf("Invalid marks! Please enter the marks again.\n");
    }

    printf("Please enter obtained marks in Math: ");
    scanf("%d", &a[2]);
    if (a[2] > 100) 
    {
        printf("Invalid marks! Please enter the marks again.\n");
    }
    int  total;
    total=a[0]+a[1]+a[2];
    float percent;
    percent=total/3;
printf("\n Obtained Mark in English : %d", a[0]);
printf("\n Obtained Mark in Hindi : %d", a[1]);
printf("\n Obtained Mark in Math : %d", a[2]);
printf("\n Total Obtained Mark : %d", total);
if(percent>=60)
{
    printf("\n Division : First");
}
if(percent>=40 && percent<60 )
{
    printf("\n Division : Second");
}
if(percent>40 )
{
    printf("\n Division : Third");
}
    return 0;
}
