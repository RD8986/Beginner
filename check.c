#include<stdio.h>
int main()
{
    char f[3][100];
    int length=0;
    printf("Please any Three Name \n");
    for(int a=0; a<3; a++)
    {
        scanf("%s", &f[a]);
    }
        for(int a = 0; a < 3; a++)
    {
        for(int i = 0; f[a][i] != '\0'; i++)
        {
            length++;
        }
    }
    printf("\n Length of string is : %d\n", length);
    return 0;
}