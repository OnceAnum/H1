//Linear search
#include<iostream.h>
#include<conio.h>
int Lsearch(int[],int,int);
int main()
{
clrscr();
int AR[50],ITEM,N,index;
cout<<"enter desired array size(max. 50):";
cin>>N;
cout<<"\nEnter Array elements\n";
for(int i=0;i<N;i++)
{ cin>>AR[i];
}
cout<<"\nEnter Element to be searched for : ";
cin>>ITEM;
index=Lsearch(AR,N,ITEM);
if(index==-1)
cout<<"\nSorry  element could not be found.\n";
else
cout<<"\nElement found at index :"<<index<<",Position :"
<<index + 1  <<endl;
getch();
return 0 ;
}
int Lsearch(int AR[],int size,int item)
{
for(int i=0;i<size;i++)
{
if(AR[i]==item)return i ;
}
return -1;
}
