#include <iostream>
#include <cmath>
using namespace std;

int fib(int n1);
int factorial(int n2);
int calsum(int n3);
int findMin(int a[], int size);
int DecToBin(int dec);
double sumOfSeries(int n4);

int main()
{
    ///for fibonacci series
    cout << "Part One...\n" << endl;
    int n1, i = 0, c;

    cout << "Enter nth term for Fibonacci series: ";
    cin >> n1;
    cout << "Fibonacci Series: " << endl;

    for(c=1; c<=n1; c++)
    {
        cout << fib(i) << endl;
        i++;
    }
    cout << "The " << n1 << " term Fibonacci number is: "<< fib(n1-1) << endl;
    cout << endl;

    ///for factorial
    cout << "Part Two...\n" << endl;
    int n2;
    cout << "Enter a number to find factorial: ";
    cin >> n2;
    cout << "Factorial of " << n2 <<" = "<< factorial(n2) << endl;
    cout << endl;

    ///sum of digit
    cout << "Part Three...\n" << endl;
    int n3, val;
    cout << "Enter a number: ";
    cin >> n3;

    val = calsum(n3);
    cout << "Sum of the digits of " << n3 << " is : " << val << endl;
    cout << endl;

    ///find min
    cout << "Part Four...\n" << endl;
    int a[5] = {5, 99, 205, 114, 15};
    int smallest = findMin(a, 5);
    cout << "From array: ";
    for(int i=0; i<5; i++)
        cout << a[i] << ", ";
    cout <<" smallest number is: " << smallest << endl;
    cout << endl;

    ///convert dec to bin
    cout << "Part Five...\n" << endl;
    int dec, bin;
    cout << "Enter a decimal number: ";
    cin >> dec;

    bin = DecToBin(dec);
    cout << "The binary equivalent of " << dec << " is: " << bin << endl;
    cout << endl;

    ///sum of a series
    cout << "Part Six...\n" << endl;
    int n4;
    double result;

    cout << "Input a number: ";
    cin >> n4;

    result = sumOfSeries(n4);
    cout << "Sum of Number From 1 to "<< n4 << " is: " << result << endl;

    return 0;
}

int fib(int n1)
{
   if (n1 == 0)
      return 0;
   else if (n1 == 1)
      return 1;
   else
      return (fib(n1-1) + fib(n1-2));
}

int factorial(int n2)
{
    if (n2 > 1) {
        return n2 * factorial(n2-1);
    }
    else {
        return 1;
    }
}

int calsum(int n3)
{
    if(n3 == 0)
        return 0;

    return calsum(n3/10) + n3%10;
}

int findMin(int a[], int size)
{
    if(size = 1)
    {
        return a[0];
    }
    else
    {
        return (a[size] < findMin(a, size-1)) ? a[size] : findMin(a, size-1);
    }
}

int DecToBin(int dec)
{
    if (dec == 0)
    {
        return 0;
    }
    else
    {
        return (dec%2 + 10 * DecToBin(dec / 2));
    }
}

double sumOfSeries(int n4)
{
    double res;
    if (n4 == 0)
    {
        return 1;
    }
    else
    {
        //res = n4 + sumOfSeries(1 / (pow(2, n4)));
        //double power = pow(2, n4);
        //res = 1 + sumOfSeries(1/power);
        return ((1/pow(2, n4)) + sumOfSeries(n4-1));
    }
   //return res;
}
