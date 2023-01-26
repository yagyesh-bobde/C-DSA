/*

Q. for n =5 
*                 * 
* *             * * 
* * *         * * * 
* * * *     * * * * 
* * * * * * * * * * 
* * * * * * * * * * 
* * * *     * * * * 
* * *         * * * 
* *             * * 
*                 *

*/

#include <iostream>

using namespace std;

int main()
{
    int i , j , n ;
    cin>>n ;
    
    for(i = 0 ; i < n ; i++) {
        for(j = 0 ; j< 2*n ; j++) {
            if( j<=i || j >= 2*n-1-i){
                cout<<"* ";
            } 
            else {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    for(i = n-1 ; i >=0 ; i--) {
        for(j = 0 ; j< 2*n ; j++) {
            if( j<=i || j >= 2*n-1-i){
                cout<<"* ";
            } 
            else {
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    return 0;
}
