#include<stdio.h>
int main()
{
    char str[80], search[10];
    int count1 = 0, count2 = 0, i, j, flag;
    int count=0;
    printf("Enter a string:");
    gets(str);
    printf("Enter search substring:");
    gets(search);
    while (str[count1] != '\0')
        count1++;
    while (search[count2] != '\0')
        count2++;
    for (i = 0; i <= count1 - count2; i++)
    {
    	count++;
        for (j = i; j < i + count2; j++)
        {
        	count++;
            flag = 1;
            if (str[j] != search[j - i])
            {
            	count++;
                flag = 0;
                break;
            }
            count++;
        }
        if (flag == 1)
            break;
            count++;
    }
    count++;
    if (flag == 1)
        printf("substring is present\n");
    else
        printf("substring is not present\n");
        printf("Time complexity:%d",count);
    }
