#include<stdio.h>
int main()
{
int a[2][2], b[2][2], c[2][2], i, j ,count=0;
int m1, m2, m3, m4 , m5, m6, m7;
printf("Enter four elements of first matrix: ");
count++;
count++;
for(i = 0;i < 2; i++)
for(j = 0;j < 2; j++)
{
	count++;
	count++;
	scanf("%d", &a[i][j]);
	count++;
}
count++;
printf("Enter four elements of second matrix: ");
count++;
count++;
for(i = 0; i < 2; i++)
for(j = 0;j < 2; j++)
{
	count++;
	count++;
	scanf("%d", &b[i][j]);
	count++;
}
count++;
printf("\nThe first matrix is\n");
count++;
count++;
for(i = 0; i < 2; i++)
{
	count++;
	count++;
printf("\n");
count++;
count++;
for(j = 0; j < 2; j++)
{
	count++;
	count++;
	count++;
	printf("%d\t", a[i][j]);
}
count++;
printf("\nThe second matrix is\n");
count++;
count++;
for(i = 0;i < 2; i++)
{
	count++;
	count++;
printf("\n");
count++;
count++;
for(j = 0;j < 2; j++)
{
	count++;
	count++;
	printf("%d\t", b[i][j]);
	count++;
}
count++;

}
count++;
m1= (a[0][0] + a[1][1]) * (b[0][0] + b[1][1]);
m2= (a[1][0] + a[1][1]) * b[0][0];
m3= a[0][0] * (b[0][1] - b[1][1]);
m4= a[1][1] * (b[1][0] - b[0][0]);
m5= (a[0][0] + a[0][1]) * b[1][1];
m6= (a[1][0] - a[0][0]) * (b[0][0]+b[0][1]);
m7= (a[0][1] - a[1][1]) * (b[1][0]+b[1][1]);
c[0][0] = m1 + m4- m5 + m7;
c[0][1] = m3 + m5;
c[1][0] = m2 + m4;
c[1][1] = m1 - m2 + m3 + m6;
printf("\nAfter multiplication using Strassen's algorithm: \n");
count++;
count++;
for(i = 0; i < 2 ; i++)
{
	count++;
	count++;
printf("\n");
count++;
}
count++;
count++;
for(j = 0;j < 2; j++)
{
	count++;
    count++;
    printf("%d\t", c[i][j]);
    count++;
}
count++;
printf("Time complexity is %d\n",count);
return 0;
}
}
