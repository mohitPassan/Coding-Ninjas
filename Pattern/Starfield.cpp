/*
Print the following pattern for the given number of rows.
Pattern for N = 3
*             *
    *     *
*      *      *
    *     *
*             *
Input format : N (Total no. of rows)

Output format : Pattern in N lines

Sample Input :
5
Sample Output :
*                           *
    *                   *
*      *             *      *
    *      *     *      *
*      *      *      *      *
    *      *     *      *
*      *             *      *
    *                   *
*                           *
*/
void printPatt(int n)
{
    //write your code here
    n--;
    for(int i=-n;i<=n;i++)
    {
        for(int j=-n;j<=n;j++)
        {
            if(abs(i) <= abs(j) && (abs(i)+abs(j))%2 == 0)
            	cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}