/* 
Given a set, S, n of distinct integers, 
print the size of a maximal subset ,S' , of S where the sum of any numbers in S' are not evenly divisible by K.
 */
 
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int N;
    int K;
    cin >> N >> K;
    int *array = new int [N];
    int *r = new int[K];
    
    for( int i = 0; i < K; i++ )
    {
        r[i] = 0;
    }
    
    int remainder;
    for( int i = 0; i < N; i++ )
    {
        cin >> array[i];
        remainder = array[i] % K;
        r[remainder]++;
    }
    
    int maximum = 0;
    
    int half = (K+1)/2;
    
    for( int i = 1; i < half; i++ )
    {
        maximum+= max( r[i], r[K-i] );
    }
    
    if( r[0] > 0 )
    {
        maximum++;
    }
    if( K % 2 == 0 && r[K/2] > 0 )
    {
        maximum++;
    }

    cout<<maximum<<endl;
    
    return 0;
}
