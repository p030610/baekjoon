#include<iostream>
using namespace std;

bool hansu(int n)
{
    int array[5] = {-1};
    
    int count = 0;
    
    while(1)
    {
        array[count] = n % 10;
        n = n / 10;
        if(n == 0)
        {
            break;
        }
        count++;
    }
    
    for(int i = 0; i < count; i++)
    {
        
    }
    return 
}

int main()
{
    
    return 0;
}