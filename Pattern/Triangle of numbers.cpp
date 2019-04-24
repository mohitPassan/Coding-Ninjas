/*
Print the following pattern for the given number of rows.
Pattern for N = 3
       1
     232
   34543
Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines
Sample Input :
5
Sample Output :
           1
         232
       34543
     4567654
   567898765
*/

#include <iostream>
using namespace std;

int main() {
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        for(int k=0;k<n-i-1;k++)
        {
            cout << " ";
        }
        for(int j=i+1;j<=2*i+1;j++)
        {
            cout << j;
        }
        for(int j=2*i;j>i;j--)
        {
            cout << j;
        }
        cout << endl;
    }  
}