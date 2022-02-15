#include <iostream>
using namespace std;
int main()
{
    int v1,v2,v3,temp;
    cout<<"Swaping Three Value : \n";
    cout<<"\nGet Input V1 = ";
    cin>>v1;
    cout<<"\nGet Input V2 = ";
    cin>>v2;
    cout<<"\nGet Input V3 = ";
    cin>>v3;
    
    cout<<"\nNow Swaping Here ----\n";
    temp = v1;
    v1 = v2;
    v2 = v3;
    v3 = temp;
    cout<<"\nv1 = "<<v1;
    cout<<"\nv2 = "<<v2;
    cout<<"\nv3 = "<<v3;
    return 0;
}