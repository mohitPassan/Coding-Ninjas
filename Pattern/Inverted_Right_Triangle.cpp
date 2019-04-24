/*
Write a function to print the following pattern for the given number of rows.
Pattern for N = 4
****
***
**
*
Sample Input :
   5
Sample Output :
* * * * *
* * * *  
* * *
* *
*
*/

void printPatt(int n)
{
    //write your code here
    for(int i=n;i>0;i--)
    {
    	for(int j=0;j<i;j++)
        {
            cout << "*";
		}
        cout << endl;
	}
}