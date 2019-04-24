/*
Print the following pattern for the given number of rows.
Assume N is always odd.
Note : There is space after every star.
Pattern for N = 7
*
 * *
   * * *
     * * * *
   * * *
 * *
*
Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines
Sample Input :
11
Sample Output :
*
 * *
   * * *
     * * * *
       * * * * *
         * * * * * *
       * * * * *
     * * * *
   * * *
 * *
*
*/

#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int n;
    cin >> n;
    for(int i=0;i<n/2+1;i++)
    {
        for(int k=0;k<i;k++)
        {
            cout << " ";
        }
		for(int j=0;j<=i;j++)
        {
			cout << "* ";
        }
        cout << endl;
    }
    for(int i=n/2-1;i>=0;i--)
    {
        for(int k=0;k<i;k++)
        {
            cout << " ";
        }
		for(int j=0;j<=i;j++)
        {
			cout << "* ";
        }
        cout << endl;
    }
  
}