#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

void printArr( const int* ar, int size )
{
    for( int j = 0; j < size; j++ )
    {
        cout<< ar[j] <<" ";
    }
    cout<<endl;
}

void insertionSort(int ar_size, int *  ar) {
    
    int insert_num;
    
    for( int j = 0; j < ar_size - 1; j++ )
    {
        insert_num = ar[j+1];
        bool done = false;
        
        for( int i = j; i >= 0 && !done; i-- )
        {
            if( insert_num < ar[i] )
            {
                ar[i+1] = ar[i]; // shift to right
            }
            else
            {
                ar[i+1] = insert_num; // insert the number here
                done = true;
            }
        }
        if( !done )
        {
            ar[0] = insert_num; // insert the number to the first position
        }
        
        printArr( ar, ar_size );
    }
}
int main(void) {
    /*
    Sample Input
    6
    1 4 3 5 6 2
    */
    int _ar_size;
    cin >> _ar_size;
    //scanf("%d", &_ar_size);
    int _ar[_ar_size], _ar_i;
    for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) {
        cin >> _ar[_ar_i];
        //scanf("%d", &_ar[_ar_i]);
    }
    
    insertionSort(_ar_size, _ar);
    /*
    Sample Output
    1 4 3 5 6 2 
    1 3 4 5 6 2 
    1 3 4 5 6 2 
    1 3 4 5 6 2 
    1 2 3 4 5 6 
    */
    
    return 0;
}

