
#include <iostream>

using namespace std;

void ReadArrayData(int arr1[100], int &length)
{
    cout << "How Many Numbers Do You Wont to Enter? 1 to 100? \n";
    cin >> length;

    for (int i = 0; i <= length - 1; i++)
    {
        cout << "Please Enter Number" << i + 1 << endl;
        cin >> arr1[i];
    }
}
void PrintArrayData(int arr1[100], int length)
{
    for (int i = 0; i <= length -1; i++)
    {
        cout << "Number [" <<i+1 << "]" << arr1[i] << endl;
       
    }
}
int CalculatArraySum(int arr1[100], int length)
{
    int Sum = 0;
    for (int i = 0; i <= length-1; i++)
    {
        Sum += arr1[i];
    }
    return Sum;
}
float CalculatArrayAverge(int arr1[100], int length)
{
    return (float)CalculatArraySum( arr1, length)/length;
}

int main()
{
    int arr1[100],length=0;
    ReadArrayData(arr1, length);
    PrintArrayData(arr1, length);
    cout << "*************************************************\n";
    cout << "sum = " << CalculatArraySum(arr1, length)<<endl;
    cout << " Averge = " << CalculatArrayAverge(arr1, length) << endl;
    

}
