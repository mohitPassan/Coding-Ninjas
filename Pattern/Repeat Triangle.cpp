/*
Print the following pattern for the given number of rows.
Pattern for N = 3
ABCCBA
 ABBA
  AA
Input format : N (Total no. of rows)

Output format : Pattern in N lines

Sample Input :
4
Sample Output :
ABCDDCBA
 ABCCBA
  ABBA
   AA
 */

void printPatt(int n)
{
    //write your code here
    char c;
    for(int i=n;i>0;i--)
    {
        c = 64;
        for(int j=n-i;j>0;j--)
        {
            cout << " ";
        }
        for(int k=0;k<i;k++)
        {
			cout << ++c;
        }
        for(int k=0;k<i;k++)
        {
			cout << c--;
        }
        cout << endl;
    }
}