#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
    int a,b;
    string word[9]={"one","two","three","four","five","six","seven","eight","nine"}; 
    cin>>a>>b;
    for(int i=a ; i<=b ; i++)
    {
        if(i<=9)
        cout<<word[i-1]<<endl;
        if(i>9)
        {
            if(i%2==0)
                cout<<"even"<<endl;
            else
                cout<<"odd"<<endl;
        }
    }
    return 0;
}

