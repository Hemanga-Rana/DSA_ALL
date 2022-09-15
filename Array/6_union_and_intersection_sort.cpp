#include<bits/stdc++.h>
using namespace std;


// Print the Union ARRAY:
void printUnion(int arr1[], int arr2[], int m, int n)
{
    int i=0, j=0;
    while(i<m && j<n)
    {
        if(arr1[i] < arr2[j])
            cout<<arr1[i++]<<" ";

        else if(arr2[j] < arr1[i])
            cout<< arr2[j++] <<" ";

        else{
            cout<<arr2[j++] <<" ";
            i++;
        }
    }
    while(i<m)
        cout<<arr1[i++]<<" ";

    while(j<n)
        cout<<arr2[j++]<<" ";
}

//Print only the Count value of Union:
void countUnion(int arr1[], int arr2[], int m, int n)
{
    int i=0, j=0, count=0;
    while(i<m && j<n)
    {
        if(arr1[i]<arr2[j])
        {
            count++;
            i++;
        }

        else if(arr2[j] < arr1[i])
        {
            count++;
            j++;
        }

        else{
            count++;
            j++; 
            i++;
        }
    }
    while(i<m)
    {
        count++;
        i++;
    }
    while(j<n)
    {
        count++;
        j++;
    }
    cout<<count<<endl;
}

int main()
{
    int arr1[] = {1,2,3,4,5,6};
    int arr2[] = {2,3,5,7};

    int m = sizeof(arr1) / sizeof(int);
    int n = sizeof(arr2) / sizeof(int);

    // printUnion(arr1, arr2, m, n);
    countUnion(arr1, arr2, m, n);

}





// Good Approch but not give any answer

int doUnion(int a[], int n , int b[], int m)
{
    set<int> s;
    for(int i=0; i<n;i++)
    {
        s.insert(a[i]);
    }
    for(int j=0; j<m; j++)
    {
        s.insert(b[j]);
    }
    return s.size();
}
