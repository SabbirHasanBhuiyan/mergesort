#include<iostream>
using namespace std;

void merge (int arr[],int l,int r,int mid)
{
    int n1 = mid-l+1;
    int n2 = r-mid;
    int a[n1];
    int b[n2];//temp array

    for(int i=0;i<=n1;i++){
        a[i]=arr[l+i];
    }
    for(int i=0;i<=n2;i++){
        a[i]=arr[mid+1+i];
    }

    int i=0;
    int j=0;
    int k=l;
    while (i<n1 && j<n2)
    {
        if (a[i],b[j])
        {
             arr[k]=a[i];
             k++; j++;
        }
    }

    while (i<n1){
        arr[k]=a[i];
        k++; j++;
    }
    while (i<n2){
        arr[k]=b[j];
        k++; j++;
    }

    {
        /* code */
    }

}

void mergeSort(int arr[],int l, int r)
{
    if (l<r)
    {
        int mid =(l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);

        merge(arr,l,mid,r);

    }

}


int main()
{
    int p,q;
    cout<<"enter the number of element:"<<"\n";
    cin>>p;
    int arr[p];
    for(q=0;q<p;q++)
    {
        cout<<"Enter element"<<q+1<<" :";
        cin>>arr[q];
    }
    mergeSort(arr,0,p-1);//printing the sorted data.
    cout<<"\nSorted data";
    for(q=0;q<p;q++)
    {
        cout<<arr[q]<<" ";

    }
    cout<<endl;
    return 0;
}
