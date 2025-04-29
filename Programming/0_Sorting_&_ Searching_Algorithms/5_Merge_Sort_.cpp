#include <bits/stdc++.h>
using namespace std;

void Merge(int *arr, int si, int mid, int ei){
	int i = si;
	int j = mid+1;
	int xrr[ei-si+1];
	int k = 0;

	while(i<=mid && j<=ei){
		if(arr[i] < arr[j]) xrr[k++] = arr[i++];
		else xrr[k++] = arr[j++];
	}
	while(i <= mid) xrr[k++] = arr[i++];
	while(j <= ei) xrr[k++] = arr[j++];
	
	for(i=si; i<=ei; i++) arr[i] = xrr[i-si];
}

void Merge_Sort(int *arr, int si, int ei){
	if(si >= ei) return;

	int mid = ((ei-si)/2)+si;

	Merge_Sort(arr, 0, mid);
	Merge_Sort(arr, mid+1, ei);
	Merge(arr, si, mid, ei);
}

int main() {
	int n;
    printf("Enter Array Size : ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter value : ");
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);

    Merge_Sort(arr,0,n-1);

    printf("sorted   : ");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }

	return 0;
}
