#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {50, 40, 45, 30, 35, 42, 32, 25, 20, 10};
    int n;
    cout << endl
         << "How many values do you want to add?" << endl;
    cin >> n;
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        int x;
        cout << endl
             << endl
             << "Your number is: ";
        cin >> x;

        v.push_back(x);
        int current_index = v.size() - 1;
        cout << "Current index: " << current_index << endl
             << endl;

        while (current_index != 0)
        {
            int parent_index = (current_index - 1) / 2;
            cout << "Parent index: " << parent_index << endl;
            if (v[parent_index] < v[current_index])
                swap(v[parent_index], v[current_index]);
            else
                break;
            current_index = parent_index;
        }
    }

    cout << endl
         << "Your final array is: ";
    for (int val : v)
        cout << val << " ";

    return 0;
}
