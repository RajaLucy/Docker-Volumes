#include <iostream.h>
using namespace std;

void printnumbers(int n, int arr[n]){

for (int i=0;i<n;i++){
cout << arr[i] << endl;
}

cout << "This is void Function for Printing numbers" << endl;
}

int main(){

int n=5;
int a[n]={1,2,3,4,5};


    printnumbers(n, a);
}
