//#6Companies30Days Challenge GoldmanSachs-10 (Find Kth Largest Number)

#include <bits/stdc++.h>
using namespace std;

vector<int> findKthLargest(vector<int> &n, int k)
{
    vector<int> res;
    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < n.size(); i++)
    {
        pq.push(n[i]);
        if (pq.size() > k)
        {
            pq.pop();
        }
    }
    while (!pq.empty())
    {
        res.push_back(pq.top());
        pq.pop();
    }

    return res;
}
int main()
{
    vector<int> v{900, 25, 887, 84, 100, 23, 326, 761, 154, 1, 1200, 2000};
    vector<int> res = findKthLargest(v, 10);
    for (auto i : res)
        cout << i << " ";
    return 0;
}
