#include <iostream>

using namespace std;
int main(){

    int A[5] = {12,15,25};
    // A[0] = 12;
    // A[1] = 15;
    // A[2] = 25;

    for(int i = 0; i < 5; i++)
    {
        cout<<A[i]<<endl;
    }
    cout << sizeof(A)<< endl;
    cout << A[1]<< endl;
    printf("%d\n", A[0]);
    return 0;
}