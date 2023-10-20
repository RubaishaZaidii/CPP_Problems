#include<iostream>
using namespace std;

bool issort(int arr[],int size)
{
    // base case
    if(size==0|| size==1)
    {
        return 1;
    }
    // processing

    if(arr[size-1]<arr[size-2])
    {
        return false;
    }
    else{
       bool is= issort(arr,size-1);
        return is;
    }
    
}
/**
 love babbar code is better
 #include<iostream>
using namespace std;

bool isSorted(int arr[], int size) {

    //base case
    if(size == 0 || size == 1 ){
        return true;
    }

    if(arr[0] > arr[1])
        return false;
    else {
        bool remainingPart = isSorted(arr + 1, size - 1 );
        return remainingPart;
    }

}

int main() {

    int arr[5] = {2,4,9,9,9};
    int size = 5;

    bool ans = isSorted(arr, size);

    if(ans){
        cout << "Array is sorted " << endl;
    }
    else {
        cout << "Array is not sorted " << endl;
    }

    return 0;
} 
*/
int main()
{
    int arr[7]={3,2,5,5,6,6,6};
    bool check=issort(arr,7);
    if(check==0)
    {
        cout<<"no sorted"<<endl;
    }
    else{
        cout<<"sorted"<<endl;
    }

}