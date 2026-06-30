#include <bits/stdc++.h>
using namespace std;

int main()
{
    // // we are seeing the void pointer here which intially has no datatype and we can assign any type's address to it

    // int val = 10;
    // float valr = 12.334;
    // void *ptr;

    // // assigning it to integer
    // ptr = &val;
    // // most important that we cannot dereference the pointer until and unless we typecast it - *((int*)ptr)
    // cout << ptr << endl;

    // int a = 5;
    // int *p = &a;
    // int **q = &p;

    // cout << *p << endl;
    // cout << **q << endl;
    // cout << p << endl;
    // cout << *q << endl;

    int arr[] = {10, 20, 30, 40};
    int *ptr = arr;

    cout << *(ptr + 1) << endl; // 20
    cout << *(ptr + 3) << endl; // 40 
    ptr++; // the value of pointing to 0 will go to 1 now so ptr -> arr[1] default
    cout << *ptr << endl; // 20 again
    
}