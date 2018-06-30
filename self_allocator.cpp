#include "self_allocator.h"
#include<iostream>
#include<vector>
using namespace std;
using namespace bursh_allocator;
int main(int argc, char const *argv[])
{
    /* code */
    int arr[5] = {1,2,3,4,5};
    bursh_allocator::allocator<int> test;
    vector<int, bursh_allocator::allocator<int> > iv(arr,arr+5);
    for(int i=0;i<iv.size();i++){
        cout<<iv[i]<<' ';
    }
    cout<<endl;
    return 0;
}
