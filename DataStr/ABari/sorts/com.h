using namespace std;
void pri(int * arr,int n){
   for(int i=0;i<n;i++)cout<<arr[i]<<" ";
   cout<<endl;
}
void swap(int* x,int *y){
   *x=*x+*y;
   *y=*x-*y;
   *x=*x-*y;
}
void copy(int* arr,int n,int *temp){
   for(int i=0;i<n;i++) temp[i]=arr[i];
}

