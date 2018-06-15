#include <iostream>
using namespace std;
void bubble(int* arr, int num)
{
  for (int i=num-1; i>=0; i--)
  {
    for (int j=0; j<i; j++)
    {
      if (arr[j] > arr[j+1])
      {
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
  cout<<endl<<"BUBBLE SORT!"<<endl<<endl;
  for (int i = 0; i < num; i++)
    {
        cout<<"arr["<<i<<"]="<<arr[i]<<endl;
    }
}


void selection_sort(int *arr, int num)
{
    for (int i = 0; i < num - 1; i++) {
                    int min_i = i;
    	    for (int j = i + 1; j < num; j++) {
		if (arr[j] < arr[min_i]) {
			min_i = j;
		}
	    }
	    int temp = arr[i];
	    arr[i] = arr[min_i];
	    arr[min_i] = temp;
    }
    cout<<endl<<"SELECTION SORT!"<<endl<<endl;
  for (int i = 0; i < num; i++)
    {
        cout<<"arr["<<i<<"]="<<arr[i]<<endl;
    }
}


void quicksort(int* arr, int first, int last)
{
    int i = first, j = last, x = arr[(first + last) / 2];
    do {
        while (arr[i] < x) i++;
        while (arr[j] > x) j--;

        if(i <= j) {
            if (i < j) swap(arr[i], arr[j]);
            i++;
            j--;
        }
    } while (i <= j);
    if (i < last)
        quicksort(arr, i, last);
    if (first < j)
        quicksort(arr, first,j);
}


int main()
{
    int num;
    cout<<"num = "; cin>>num;
    int arr[num];
    int arr_for_bubble[num];
    int arr_for_selection_sort[num];
    int arr_for_quicksort[num];
    for (int i = 0; i < num; i++)
    {
        cout<<"arr["<<i<<"]="; cin>>arr[i];
        arr_for_bubble[i] = arr[i];
        arr_for_selection_sort[i] = arr[i];
        arr_for_quicksort[i] = arr[i];
    }
    bubble(arr_for_bubble, num);
    selection_sort(arr_for_selection_sort, num);
    quicksort(arr_for_quicksort, 0, num-1);
    cout<<endl<<"QUICKSORT!"<<endl<<endl;
  for (int i = 0; i < num; i++)
    {
        cout<<"arr["<<i<<"]="<<arr_for_quicksort[i]<<endl;
    }
    return 0;
}
