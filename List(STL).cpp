#include<iostream>
#include<list>
using namespace std;
void display(list<int>&l)
{
list<int>::iterator itr;
for(itr=l.begin();itr!=l.end();++itr)
cout<<*itr<<",";
cout<<"\n\n";
}
int main()
{
list<int>l1;
list<int>l2(5);
int no,value;
cout<<"Enter no of elements in list";
cin>>no;
cout<<"enter values";
for(int i=0;i<no;i++)
{
cin>>value;
l1.push_back(value);
}
display(l1);
list<int>::iterator itr2;
for(itr2=l2.begin();itr2!=l2.end();++itr2)
{
*itr2=rand()/100000;
}
cout<<"List 1 Element are";
display(l1);
cout<<"List 2 element are:";
display(l2);
list<int>listA ,listB;
listA=l1;
listB=l2;
l1.merge(l2);
cout<<"Merged List Is";
display(l1);
listA.sort();
listB.sort();
listA.merge(listB);
cout<<"Merge sorted list is";
display(listA);
if(listA.empty())
{
cout<<"Empty List"<<endl;
}
else
{
cout<<"Not Empty"<<endl;
}
listA.reverse();
cout<<"Printing Reverse";
display(l1);
listA.unique();
cout<<"Printing Unique";
display(l1);
return 0;
}
