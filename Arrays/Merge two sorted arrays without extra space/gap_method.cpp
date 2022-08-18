#include<bits/stdc++.h>
using namespace std;

// gap method

void merge(vector<int> &arr1, vector<int> &arr2, int n, int m){

    // Find out the initial gap, always take ceil
    int gap = ceil((float)(n+m)/2);

    // calculate until (gap > 0)
    while(gap > 0){

        // initialize two variable i and j
        int i=0;
        int j = gap;

        // take a loop to check is j out of bound
        while(j < (n+m)){

            // case 1: i and j both in arr1
            if(j < n and (arr1[i] > arr1[j])){
                swap(arr1[i],arr2[j]);
            }

            //case2: i in arr1 and j in arr2
            else if(j >= n and i < n and arr1[i]>arr2[j-n]){
                swap(arr1[i], arr2[j-n]);
            }

            // case3: i and j both in arr2
            else if(j >= n and i>n and arr2[i-n]>arr2[j-n]){
                swap(arr2[i-n],arr2[j-n]);
            }

            // increment i and j both
            i++;
            j++;
        }

        // Reduce the gap now
        if(gap == 1)
            gap=0;
        else
            gap = ceil(gap/2);

    }
}

int main(){
    int n,m;
    cin>>n>>m;

    vector<int> arr1(n),arr2(m);
    for(auto &it: arr1)
        cin>>it;
    for(auto &it: arr2)
        cin>>it;

    cout<<"Before merge:"<<endl;
    for(auto it: arr1)
        cout<<it<<" ";
    cout<<endl;
    for(auto it: arr2)
        cout<<it<<" ";
    cout<<endl;

    merge(arr1,arr2,n,m);

    cout<<"After merge:"<<endl;
    for(auto it: arr1)
        cout<<it<<" ";
    cout<<endl;
    for(auto it: arr2)
        cout<<it<<" ";
    cout<<endl;
}
