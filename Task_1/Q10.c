// Calculate CGPA
// Ex:==>> SPPU total grade point are :  60
//                    and subject are :  6

#include<stdio.h>


float CalculateCGPA(float fGP, int iSub)
{
    float fValue = 0.0f;

    fValue = fGP/iSub;
    return fValue;
    
}

int main()
{
    float fGrade = 0.0f;
    int iSubject = 0;
    float fCGPA = 0.0f;

    printf("========================================\n");
    printf("Enter your Grade_Point :==>> ");
    scanf("%f",&fGrade);
    printf("========================================\n");
    printf("Enter your total Suject  :==>> ");
    scanf("%d",&iSubject);
    printf("========================================\n");
    
    fCGPA = CalculateCGPA(fGrade,iSubject);

    printf("========================================\n");
    printf("your CGPA is :==>>> %f\n",fCGPA);
    printf("========================================\n");

}