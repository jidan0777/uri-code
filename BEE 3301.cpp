#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h,z,l;
    cin>>h>>z>>l;
    if((h<z && h>l) || (h>z && h<l) || (h==z) || (h==z && z==l))
        cout<<"huguinho"<<endl;
    else if( (l>z && l<h) || (l<z && l>h ) )
        cout<<"luisinho"<<endl;
    else if( (z>h && z<l) || (z<h && z>l) || ( z==l))
        cout<<"zezinho"<<endl;
    return 0;
}
