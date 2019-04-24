/*
Print the following pattern for the given number of rows.
Pattern for N = 4
4444444
4333334
4322234
4321234
4322234
4333334  
4444444
Input format : N (Total no. of rows)

Output format : Pattern in N lines

Sample Input :
3
Sample Output :
33333
32223
32123
32223
33333
*/

void printPatt(int n)
{
    int t,i,j,k;
    for(i=0;i<n;i++)
    {
        t=n;
        for(j=0;j<=i;j++)
        {
            cout << t--;
        }
        for(k=0;k<t+n-i-1;k++)
        {
            cout << t+1;
        }
        t++;
        for(int m=0;m<(2*n-1)-(j+k);m++)
        {
            cout << ++t;
        }
        cout << endl;
    }
    for(i=n-2;i>=0;i--)
    {
        t=n;
        for(j=0;j<=i;j++)
        {
            cout << t--;
        }
        for(k=0;k<t+n-i-1;k++)
        {
            cout << t+1;
        }
        t++;
        for(int m=0;m<(2*n-1)-(j+k);m++)
        {
            cout << ++t;
        }
        cout << endl;
    }
}