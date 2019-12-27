#include <iostream>
using namespace std;

int main()
{
	
    float x=6 , y=0;
    while(x<=19)
    {
    	y=y+1/x;
        x=x+1;
    }
    cout<<y;
    return 0;
}