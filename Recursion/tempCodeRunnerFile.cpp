void reverseArr(int arr[],int start,int end){
  if(start >= end)
    return;

  swap(arr[start],arr[end]);
  reverseArr(arr,start+1,end-1);
}