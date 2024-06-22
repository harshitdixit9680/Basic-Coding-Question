#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    // int arr[6] = {24,652,54,54,52,11};
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // find the two element of sum in array
    int sum = 4 ;
    for (int i = 0; i < n; i++)
    {
        for (int j = (i + 1); j < n; j++)
        {
            if (arr[i] + arr[j]== sum)
            {
                cout << "YES" << endl;
                 break;
            }
            else
            {
                cout << "NO" << endl;
                 break;
            }
           
        }
    }

    // // largest element of arrary
    // int max = arr[0];
    // for (int i = 0; i < n; i++)
    // {
    //     if(max<arr[i]){
    //         max = arr[i];
    //     }
    // }
    // cout<<max<<endl;

    // for (int i = n; i >= 0; i--)
    // {

    //     // cout<<"Enters The Element"<<endl;
    //     cout<<arr[i]<<" ";
    //         cout<<sizeof(arr[n])<<endl;
    // }

    // sum of array is
    // int sum = 0;
    //     for (int i = 0; i < n; i++)
    //     {
    //      sum += arr[i];
    //     }
    //     cout<<sum<<endl;

    return 0;
}