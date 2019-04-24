/*
Write a function to print the following pattern for the given number of rows.

Pattern for N = 5

 1    2   3    4   5
 11   12  13   14  15
 21   22  23   24  25
 16   17  18   19  20
 6    7    8   9   10

Sample Input :
4

Sample Output :
 1  2  3  4
 9 10 11 12
13 14 15 16
 5  6  7  8
 */

void printPattern(int n)
{
    int arr[n][n],count=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
			arr[i][j] = count++;
        }
    }
    for(int i=0;i<n;i+=2)
    {
        for(int j=0;j<n;j++)
        {
			cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for(int i=(n%2==0?n-1:n-2);i>0;i-=2)
    {
        for(int j=0;j<n;j++)
        {
			cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}