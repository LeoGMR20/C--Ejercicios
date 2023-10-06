#include <bits/stdc++.h>

using namespace std;

struct node
{
    int t;
    int s;
};

bool operator<(node x, node y)
{
    return x.t > y.t;
}

priority_queue<node> q;

int a[2];
void solve()
{
    int n;
    scanf("%d%d%d", &n, &a[0], &a[1]);
    int ans = 0;
    int tt = 0;
    node x;
    x.s = 0;
    x.t = a[0];
    q.push(x);
    x.s = 1;
    x.t = a[1];
    q.push(x);
    while (!q.empty())
    {
        node temp = q.top();
        q.pop();
        ans++;
        if (q.top().t == temp.t && (ans + 1) == n)
        {
            ans = n;
            tt = temp.t;
            break;
        }
        tt = temp.t;
        if (ans < n)
        {
            temp.t += a[temp.s];
            q.push(temp);
        }
    }
    printf("%d %d", ans, tt);
}

int main()
{
    solve();
    return 0;
}