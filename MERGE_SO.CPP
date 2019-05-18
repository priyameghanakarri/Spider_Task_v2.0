
	   //NAME: ELANTHAMIZHAN A R - 103118023


  //Merging two array
  //First array given in ascending order
  //Second array given in descending order
#include<iostream.h>
#include<conio.h>
void merge(int [],int,int [],int,int []);
void main()
{
  int a[10],b[10],c[10];
  int s1,s2;
  clrscr();
  cout<<"\nEnter the size of asc. array: ";
  cin>>s1;
  cout<<"\nEnter your asc. array: ";
  for(int i=0;i<s1;i++)
  {
   cin>>a[i]; }
  cout<<"\nEnter the size of desc. array: ";
  cin>>s2;
  cout<<"\nEnter your desc. array: ";
  for(int j=0;j<s2;j++)
  {
   cin>>b[j]; }
  int s3=s1+s2;
  merge(a,s1,b,s2,c);
  cout<<"\n\n\tYour merged array!!\n\t";
  for(i=0;i<s3;i++)
   cout<<c[i]<<" ";
  cout<<"\n";
  getch();
}
void merge(int a[],int m,int b[],int n,int c[])
{
 int i,j,k;
 for(i=0,j=n-1,k=0;i<m && j>=0; )
 {
  if(a[i]<=b[j])
   c[k++]=a[i++];
  else
   c[k++]=b[j--];
  }
  if(i<m)
  {
   while(i<m)
    c[k++]=a[i++];
    }
  else
  {
   while(j>=0)
    c[k++]=b[j--];
    }
}