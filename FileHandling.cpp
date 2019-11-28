#include<iostream>
#include<fstream>
using namespace std;
int main()
{
string ch;
fstream f;
f.open("test.txt",ios::out);
if(!f)
{
cout<<"Error"<<endl;
return 0;
}
cout<<"File Name Test.txt Created"<<endl;
f<<"This is writing to file"<<endl;
f.close();
f.open("test.txt",ios::in);
if(!f)
{
cout<<"Error Opening"<<endl;
return 0;
}
while(!f.eof())
{
f>>ch;
cout<<ch;
}
f.close();
return 0;
}
