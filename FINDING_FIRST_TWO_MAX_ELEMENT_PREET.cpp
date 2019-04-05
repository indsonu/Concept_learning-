#include <iostream>
#include <vector>
using namespace std;
pair<int, int> two_largest(const vector<int> &vec)
{
    int first = vec[0];
    int second = vec[0];
    for(int i = 1; i < vec.size(); ++i)
    {
        if(first < vec[i])
        {
            second = first;
            first = vec[i];
        }
        else if(second < vec[i] && vec[i]!=first)
        {
            second = vec[i];
        }
    }
    return make_pair(first, second);
}
int main()
{
    int t; cin >> t;
    vector<int> vec(t);
    for(int i = 0; i < t; ++i) cin >> vec[i];
    auto m = two_largest(vec);
    cout << m.second%m.first << '\n';
    return 0;
}
