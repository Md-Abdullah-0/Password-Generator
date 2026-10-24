#include<bits/stdc++.h>
using namespace std;
int main()
{
  int l;
    string ch="abcdefghijklmnopqrstuvwxyz"
    "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    "0123456789"
    "!@#$%^&*";
    string p="";
cout<<"------------------------\n";
cout<<"|  Password Generator  |\n";
cout<<"------------------------\n";
srand(time(0));
cout<<"Enter password length ( 1 to 1000 ): ";
cin>>l;
if(l<1 || l>1000)
    {
        cout<<"Invalid length!\n";
        return 0;
    }
for(int i=0;i<l;i++)
{
     p+= ch[rand() % ch.length()];
}
cout<<"Password: "<<p<<endl;
return 0;



}