
// Sprtowanie przez wybieranie
#include <iostream>

using namespace std;

int main()
{
    int tab[8]={2,9,1,6,0,7,5,8};
    int minimum;
    for(int i=0; i<8; i++)
    {
        cout <<tab[i]<< " ";
    }
    cout<<endl;

    for(int i=0;i<8; i++)
    {
        minimum=i;
        for(int j=i+1; j< 8; j++)
        {
            if(tab[j]<tab[minimum])
            {
                minimum=j;
            }
        }
        int temp=tab[minimum];
        for(int j=minimum;j>i;j--)
        {
            tab[j]=tab[j-1];

        }
        tab[i]=temp;
    }
    cout << endl<< endl;
    for(int i=0;i<8;i++)
    {
        cout<<tab[i]<<" ";
    }



    return 0;
}
