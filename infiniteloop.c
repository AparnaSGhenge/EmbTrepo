#include <stdio.h>
int main()
{

float x = 3.0;
while (x != 4.0) //computer represent value of 4.0 as 3.999999 or 4.000001, so the condition (x !=4.0) will never be false.
{ 
printf("x= %f\n", x);
x += 0.1;
}
for(;;)
{
printf(" ");
}

infinite_loop:
// body statements.
goto infinite_loop;

int i=1;
while(i<=10);  //Due to this semicolon, the internal body of the while loop will not execute.
{
printf("%d", i);   // warning: while loop has empty body [-Wempty-body] 
i++;
}

char ch='n';
while(ch ='y')   // warning: using the result of an assignment as a condition without parentheses [-Wparentheses]  
{
printf("hello");
}

for(int ii=1;ii<=1;ii++) //(i>=1) will always be true 
{
printf("hello");
}

return 0;
}

int it_ternary_search(int left, int right, int A[], int target) {
if (left < right) {
    //if (right - left < absolutePrecision) 
    {
        for (int i = left; i <= right; i++)
        {
        	//if (A[i] == target)
            return i;
        }
        return -1;
    }