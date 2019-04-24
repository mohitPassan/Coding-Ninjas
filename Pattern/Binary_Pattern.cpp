/*
Write a function to print the following pattern for the given number of rows.
Pattern for N = 4
1111
000
11
0
Sample Input :
5
Sample Output :
11111
0000
111
00
1
*/

void printPatt(int n)
{
    //write your code here
    bool x = 1;
    for(int i=n;i>0;i--)
    {
        for(int j=0;j<i;j++)
        {
			cout << x;
        }
        x ^= 1;
        cout << endl;
    }
}