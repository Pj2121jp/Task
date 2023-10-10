#include<stdio.h>

int AreaRectangle(int iNo1, int iNo2)
{
    int iValue = 0;

    iValue = iNo1*iNo2;

    return iValue;
}

int main()
{
    int iHight = 0;
    int iWidth = 0;
    int iArea = 0;

    printf("========================================\n");
    printf("Enter the Hight of Rectangle : ");
    scanf("%d",&iHight);
    printf("========================================\n");
    printf("Enter the Width of Rectangle : ");
    scanf("%d",&iWidth);
    printf("========================================\n");

    iArea = AreaRectangle(iHight,iWidth);

    printf("========================================\n");
    printf("Area of Rectangle is : %d\n",iArea);
    printf("========================================\n");

}