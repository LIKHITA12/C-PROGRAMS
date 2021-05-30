/******************************************************************************
COMPACTION IN OS

It is problem where total space inside main memory is enough
to satisfy the request for accommodating a process but it was
not contiguous so it could not be used.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int arr[10] = {0,3,2,5,0,0,1,2,0,1};
    int c = (sizeof(arr)/sizeof(arr[0]))-1;
    int t = c-1;
    
    while(t>=0)
    {
        if(arr[t]!=0 && arr[c]==0)
        {
            swap(arr[t],arr[c]);
        }
        
        if(arr[c]!=0)
        {
            c--;
        }
        
        t--;
    }
    
    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
        cout<<arr[i]<<" ";

    return 0;
}

/******************************************************************************
OUTPUT:

0 0 0 0 3 2 5 1 2 1

*******************************************************************************/
