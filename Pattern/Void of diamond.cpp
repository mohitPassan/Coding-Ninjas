/*
Print the following pattern for the given number of rows.
Pattern for N = 5
*****
** **
*   *
** **
*****
Input format : N (Total no. of rows and N can only be odd)

Output format : Pattern in N lines

Sample Input :
9
Sample Output :
*********
**** ****
***   ***
**     **
*       *
**     **
***   ***
**** ****
*********
*/

#include <cmath>

void printPatt(int n)
{
    //write your code here
    for(int i=0;i<n;i++)
        cout << "*";
    cout << endl;
    for(int i=0;i<ceil((n-2.0)/2);i++)
    {
        for(int j=(ceil((n-2.0)/2))-i;j>0;j--)
        {
            cout << "*";
        }
        for(int k=-1;k<=2*i-1;k++)
        {
            cout << " ";
        }
        for(int j=(ceil((n-2.0)/2))-i;j>0;j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    for(int i=floor((n-2.0)/2)-1;i>=0;i--)
    {
        for(int j=(ceil((n-2.0)/2))-i;j>0;j--)
        {
            cout << "*";
        }
        for(int k=-1;k<=2*i-1;k++)
        {
            cout << " ";
        }
        for(int j=(ceil((n-2.0)/2))-i;j>0;j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    for(int i=0;i<n;i++)
        cout << "*";
    cout << endl;
    
}