// Simple Interest

#include<stdio.h>

float SimpleInterest(int iNo1,float fNo2, float fNo3)
{
    float fValue = 0.0f;

    fValue = (((float)iNo1*fNo2*fNo3)/100);

    return fValue;
}


int main()
{
    long int iAmmount = 0;
    float fInterestReat = 0.0f;
    float fDay = 0.0f;

    float fInterset = 0.0f;

    printf("======================================================\n");
    printf("Enter your Ammount ==>> ");
    scanf("%d",&iAmmount);
    printf("======================================================\n");

    printf("======================================================\n");
    printf("Enter your Interest Reat ==>> ");
    scanf("%f",&fInterestReat);
    printf("======================================================\n");

    printf("======================================================\n");
    printf("Enter the years of invest Ammount ==>>");
    scanf("%f",&fDay);
    printf("======================================================\n");

    fInterset = SimpleInterest(iAmmount,fInterestReat,fDay);

    printf("======================================================\n");
    printf("Your total Interest is ==>> %f \n",fInterset);
    printf("======================================================\n");



    return 0;
}