/*
Print the following pattern for the given number of rows.
Pattern for N = 7
*
**
***
****
***
**
*
Input format : N (Total no. of rows)

Output format : Pattern in N lines

Sample Input :
5
Sample Output :
 *
 **
 ***
 **
 *
 */

void printPatt(int n)
{
    //write your code here
    int i;
    for(i=0;i<(n/2+1);i++)
    {
		for(int j=0;j<=i;j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for(i=i-2;i>=0;i--)
    {
		for(int j=0;j<=i;j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}