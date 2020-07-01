#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number to check whether number is positive or negative:");
    scanf("%d",&num);
    printf("%d",num);
    
    if(num>0)
    {
        printf("\n%d is positive",num);
    }
    else
    {
        printf("\n%d is negative",num);
    }
    return 0;
}


/*
test case:1
input:10
output:Enter the number to check whether number is positive or negative:10
10 is positive

test case:2
input:-23
output:Enter the number to check whether number is positive or negative:-23
-23 is negative

test case:3
input:-982
output:Enter the number to check whether number is positive or negative:-982
-982 is negative

test case:4
input:56894
output:Enter the number to check whether number is positive or negative:56894
56894 is positive

test case:5
input:219532
output:Enter the number to check whether number is positive or negative:219532
219532 is positive
*/