#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    map<string, int> shape;

    shape["Tetrahedron"] = 4;
    shape["Cube"] = 6;
    shape["Octahedron"] =8;
    shape["Dodecahedron"] =12;
    shape["Icosahedron"] =20;
    map<string, int>::iterator it;
    string Shape_input;
    int n;
    long long sum=0;
    pair<string, int> p ;
    cin>>n;
for(int i=0; i<n; i++)
{
    cin>>Shape_input;
    for(it = shape.begin(); it != shape.end(); it++)
    {
        // Readin a map element into pair to use it
        p=*it;
        if(p.first==Shape_input)
        {
            sum+=p.second;
            continue;
        }
    }
}
cout<<sum<<endl;
}