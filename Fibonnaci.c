void main()
{
int f0=0,f1=1,f2,i,n;
clrscr();
printf("Enter any number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("%d",f0);
f2=f1;
f1=f0;
f0=f1+f2;
getch();
}
}
