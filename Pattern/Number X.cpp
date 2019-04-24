/*
Print the following pattern for the given number of rows.
Pattern for N = 3 (No. of rows = 5, No. of columns = 5)
1   1
 2 2
  3
 2 2
1   1
Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines
Sample Input :
5
Sample Output :
No. of rows = 9, No. of columns = 9
1       1
 2     2
  3   3
   4 4
    5
   4 4
  3   3
 2     2
1       1
*/

void printPatt(int n)
{
    //write your code here
    for(int i=0;i<n;i++)
    {
        int k;
        for(k=0;k<i;k++)
        {
            cout << " ";
        }
        cout << i+1;
        for(int j=0;j<(2*n-1)-((k+1)*2);j++)
        {
            cout << " ";
        }
        if(i+1!=n)
        	cout << i+1;
        cout << endl;
    }
    for(int i=n-2;i>=0;i--)
    {
        int k;
        for(k=0;k<i;k++)
        {
            cout << " ";
        }
        cout << i+1;
        for(int j=0;j<(2*n-1)-((k+1)*2);j++)
        {
            cout << " ";
        }
        if(i+1!=n)
        	cout << i+1;
        cout << endl;
    }
}