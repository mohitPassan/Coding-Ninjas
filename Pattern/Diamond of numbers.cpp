/*
Print the following pattern for the given number of rows.
Pattern for N = 7
    1
   123
  12345
 1234567
  12345
   123
    1
Input format : N (Total no. of rows)

Output format : Pattern in N lines

Sample Input :
5
Sample Output :
   1
  123
 12345
  123
   1
*/

void printPatt(int n)
{
    //write your code here
    for(int i=0;i<n/2+1;i++)
    {
        for(int k=0;k<(n/2+1)-i-1;k++)
        {
      cout << " ";
        }
        for(int j=0;j<2*i+1;j++)
        {
            cout << j+1;
        }
        cout << endl;
    }
    for(int i=n/2-1;i>=0;i--)
    {
        for(int k=0;k<(n/2+1)-i-1;k++)
        {
      cout << " ";
        }
        for(int j=0;j<2*i+1;j++)
        {
            cout << j+1;
        }
        cout << endl;
    }
}