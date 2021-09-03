/*Find kth max min element */
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
int n;
    cout << "Enter the number of element: ";
    cin >> n;
    vector<int> vec, vec1;
    int num;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        vec.push_back(num);
    }
    sort(vec.begin(),vec.end(),greater<>());
    cout<<"Enter the kth max number: ";
    int pos;
    cin>>pos;
    cout<<vec.at(pos-1);
    cout<<"\nEnter the kth smallest number: ";
    cin>>pos;
    sort(vec.begin(),vec.end());
    cout<<vec.at(pos-1);

}