/*
Repeating numbers
Level HARD
Print the following pattern for the given number of rows.
Pattern for N = 3
1
23
4567
Input format : N (Total no. of rows)

Output format : Pattern in N lines

Sample Input :
5
Sample Output :
1
23 
4567
89123456
7891234567891234
*/

#include <cmath>

void printPatt(int n)
{
    //write your code here
    int count = 1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<pow(2,i);j++)
        {
            if(count >= 10)
            	count = 1;    
            cout << count++;
        }
        cout << endl;
    }
}