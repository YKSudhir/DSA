// Heap implementation
#include<iostream>
using namespace std;
class MaxHeap
{
    int *arr;
    int size; // total elements of array
    int total_size; // total size of array

    public:
    MaxHeap(int n)
    {
        arr = new int[n];
        size = 0;
        total_size = n;
    }
    // printing elements of Heap
    void print()
    {
        for(int i=0 ; i<size ;  i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    // insert into heap
    void insert(int value)
    {
        // if heap size is unavaliable or not
        if(size==total_size)
        {
            cout<<"Heap Overflow\n";
            return;
        }
        arr[size] = value;
        int index = size;
        size++;
        // compare it with parent
        while(index>0 && arr[(index-1)/2]<arr[index])
        {
            swap(arr[(index-1)/2] , arr[index]);
            index = (index-1)/2;
        }
        cout<<arr[index]<<" is inserted into the Heap \n";
    }
    void Heapfiy(int index)
    {
        int largest = index;
        int left = 2*index+1;
        int right = 2*index +2;
        // Largest ele for max val of parent , left child , right child
        if(left<size && arr[left]>arr[largest])
        {
            largest = left;
        }
        if(right<size && arr[right]>arr[largest])
        {
            largest = right;
        }
        if(largest!=index)
        {
            swap(arr[index] , arr[largest]);
            Heapfiy(largest);
        }
    }
    void Delete()
    {
        if(size==0)
        {
            cout<<"Heap is Underflow\n";
            return;
        }
         cout<<arr[0]<<" is deleted now! \n";
        arr[0]=arr[size-1];
        size--;
        if(size==0)
        return ;

        Heapfiy(0);
    }
};
int main()
{
    MaxHeap H1(9);
    H1.insert(2);
    H1.insert(3);
    H1.insert(4);
    H1.insert(5);
    H1.insert(6);
    H1.print();
    H1.Delete();
    H1.print();
    H1.Delete();
    H1.print();
}