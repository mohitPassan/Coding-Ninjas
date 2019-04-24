/*
Print the following pattern for the given number of rows.
Assume, N is always odd.
Pattern for N = 7
   *
  ***
 *****
*******
 *****
  ***
   *
Input format :
N (Total no. of rows and can only be odd)
Output format :
Pattern in N lines
Sample Input :
5
Sample Output :
  *
 ***
*****
 ***
  *
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
            cout << "*";
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
            cout << "*";
        }
        cout << endl;
    }
}