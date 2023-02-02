#include <iostream>

using namespace std;

int main()
{
    
    int n;
    cin>>n;
    int arr[n];
    int i, j;
    
    // Enter the array
    for (i = 0 ; i < n ; i++ )
        cin>>arr[i];
    
    //  Bubble sort
    while (1) {
        int count = 0;
        for(i=0 ; i< n-1 ; i++) {
            if(arr[i] > arr[i+1]){
                int temp = arr[i+1];
                arr[i+1] = arr[i];
                arr[i] = temp;
                count++;
            }
        }
        // print after each swap iteration
        for(i = 0 ; i<n ; i++) 
            cout<<arr[i]<< " ";
        if (count == 0 ) 
            break;
    }
    cout<<"fianl sorted array: "<<endl;
    for(i = 0 ; i<n ; i++) 
            cout<<arr[i]<< " ";
    
    return 0;
}
