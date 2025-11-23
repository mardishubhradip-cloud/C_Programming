#include<stdio.h>

int main()
{
    int i,n;
    printf("Enter number of subjects: ");
    scanf("%d",&n);
    float marks[n];
    int sum = 0, max = 0;
    int passed = 1;
    printf("Enter marks of %d subjects: \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%f",&marks[i]);
        sum += marks[i];

        if(marks[i]>max)
            max = marks[i];

        if (marks[i]<33)
            passed = 0;

    }
float avg = (float)sum  / n;
printf("Average marks = %f\n",avg);
printf("Max marks = %d\n",max);

if(passed)
    printf("Passed in all subjects.");
else
    printf("Failed");
return 0;
}