#include <bits/stdc++.h>
using namespace std;

void insert_heap(vector<int> &v, int x)
{
    v.push_back(x);
    int current_index = v.size() - 1;

    while (current_index != 0)
    {
        int parent_index = (current_index - 1) / 2;
        if (v[parent_index] < v[current_index])
            swap(v[parent_index], v[current_index]);
        else
            break;
        current_index = parent_index;
    }
}

void delete_heap(vector<int> &v)
{
    v[0] = v[v.size() - 1];
    v.pop_back();
    int currentIndex = 0;
    while (true)
    {
        int leftIndex = currentIndex * 2 + 1;
        int rightIndex = currentIndex * 2 + 2;
        int lastIndex = v.size() - 1;

        if (leftIndex <= lastIndex && rightIndex <= lastIndex)
        {
            if (v[leftIndex] >= v[rightIndex] && v[leftIndex] > v[currentIndex])
            {
                swap(v[leftIndex], v[currentIndex]);
                currentIndex = leftIndex;
            }
            else if (v[leftIndex] <= v[rightIndex] && v[rightIndex] > v[currentIndex])
            {
                swap(v[rightIndex], v[currentIndex]);
                currentIndex = rightIndex;
            }
            else
                break;
        }
        else if (leftIndex <= lastIndex)
        {
            if (v[leftIndex] > v[currentIndex])
            {
                swap(v[leftIndex], v[currentIndex]);
                currentIndex = leftIndex;
            }
            else
                break;
        }
        else if (rightIndex <= lastIndex)
        {
            if (v[rightIndex] > v[currentIndex])
            {
                swap(v[rightIndex], v[currentIndex]);
                currentIndex = rightIndex;
            }
            else
                break;
        }
        else
            break;
    }
}

void print_heap(vector<int> v)
{
    for (int val : v)
        cout << val << " ";
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        insert_heap(v, x);
    }
    print_heap(v);
    delete_heap(v);
    print_heap(v);
    delete_heap(v);
    print_heap(v);

    return 0;
}
