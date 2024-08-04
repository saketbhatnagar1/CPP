#include<iostream>
using namespace std;

//problems on array using recurison and binary search using recurison


//input->array-: output->soted array or not
bool issorted(int arr[],int size)
{
    //base case: if size of array is 0 or 1,then that aarray is sorted;

   if(size==0||size==1){
    return true;
   }
       if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool ans = issorted(arr+1,size-1);
                                            //size-1 because we have checked the first and second part of the array 
                                            //also we have passed the pointer to an array that means all the operations are passed as  a pointer to ther refrence
    return ans;

    }

}
                                            //linear search:basic approach will be to reduce size of the array and pass the reduced size to the function
bool linsearch(int arr[],int size,int key){

if(size==0){
    return false;
}
else if(arr[0]==key){
    return true;
}else{
    bool remainingpart = linsearch(arr+1,size-1,key);//arr+1 => point to the next element,size -1 means the same thing since it's an integer

    return remainingpart;
}
}







bool binarysearch(int arr[],int start,int end,int key){
if(start>end){
    return false;
}
int mid = (start+end)/2;
if(arr[mid]==key){
    return true;
}
if(arr[mid]<key){
    return binarysearch(arr,mid+1,end,key);
}else{
    return binarysearch(arr,start,mid-1,key);
}


}

int main()
{
int arr[6]={1,2,34,45,433,9999};

bool ans = binarysearch(arr,0,5,343);
if(ans){
    cout<<"Present";
}else{
    cout<<"absent";
}
    return 0;
}