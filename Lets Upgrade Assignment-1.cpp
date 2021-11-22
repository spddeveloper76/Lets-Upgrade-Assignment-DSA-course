#include <iostream>
using namespace std;
int main() 
{  
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(i==j || i-j==2 || i-j==4)
            {
                cout<<"1";
            }
            else if(i-j==3 || i-j==1)
            { cout<<"0";}
            else
            { cout<<" ";}
        }
        
        cout<<endl;
    }
    return 0;
}
    
