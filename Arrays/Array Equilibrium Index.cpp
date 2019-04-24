/*
Find and return the equilibrium index of an array. Equilibrium index of an array is an index i such that the sum of elements at indices less than i is equal to the sum of elements at indices greater than i.
Element at index i is not included in either part.
If more than one equilibrium index is present, you need to return the first one. And return -1 if no equilibrium index is present.
Input format :
Line 1 : Size of input array
Line 2 : Array elements (separated by space)
Sample Input :
7
-7 1 5 2 -4 3 0
Sample Output :
3
*/

int equilibrium(int arr[], int n) {
    int *previousSumArray = new int[n];
    previousSumArray[0] = arr[0];
    for(int i=1;i<n;i++)
    {
		previousSumArray[i] = arr[i] + previousSumArray[i-1];
    }
    for(int i=0;i<n;i++)
    {
        int temp = previousSumArray[n-1] - arr[i];
        if(temp%2 == 0 && previousSumArray[i-1] == temp/2)
        {
            return i;
        }
    }
    return -1;
}