/*
Print the following pattern for the given number of rows.
Pattern for N = 2
  0
 101
21012
Input format : N (Total no. of rows)

Output format : Pattern in N lines

Sample Input :
6
Sample Output :
      0
     101
    21012
   3210123
  432101234
 54321012345
6543210123456
*/

void printPatt(int n)
{
    //write your code here
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
			cout << " ";
        }
        int t = i;
        for(int k=0;k<(2*i+1);k++)
        {
            cout << (t-k<0?(-1)*(t-k):t-k);
        }
        cout << endl;
    }
}