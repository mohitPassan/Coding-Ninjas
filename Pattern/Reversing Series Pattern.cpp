/*
Print the following pattern for the given number of rows.
Pattern for N = 5
1 
3 2 
4 5 6 
10 9 8 7 
11 12 13 14 15
Input format : N (Total no. of rows)

Output format : Pattern in N lines

Sample Input :
7
Sample Output :
1
3 2
4 5 6
10 9 8 7
11 12 13 14 15
21 20 19 18 17 16
22 23 24 25 26 27 28
*/

void printPatt(int n)
{
    //write your code here
    int **arr,c=1;
    arr = new int*[n];
    for(int i=0;i<n;i++)
    {
		arr[i] = new int[n];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            arr[i][j] = c++;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(i%2 == 0)
        {
            for(int j=0;j<=i;j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
        else
        {
            for(int j=i;j>=0;j--)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
        
    }
}