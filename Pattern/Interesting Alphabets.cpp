/*
Print the following pattern for the given number of rows.
Pattern for N = 5
E
DE
CDE
BCDE
ABCDE

Sample Input :
8
Sample Output :
H
GH
FGH
EFGH
DEFGH
CDEFGH
BCDEFGH
ABCDEFGH
*/

void printPatt(int n)
{
    //write your code here
    char c;
    for(int i=n;i>0;i--)
    {
        for(int j=i;j<=n;j++)
        {
            c = 'A' + j - 1;
            cout << c;
        }
        cout << endl;
    }
}