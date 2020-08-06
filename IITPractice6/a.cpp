#include <bits/stdc++.h>

using namespace std;

int main (void)
{
    while(1){
    int n;
    stack <int> stc;
    cin >> n;
    if(n == 0) return 0;
    int m = n;
    set <long long> st;
    long long arr [n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        st.insert(arr[i]);
    }
    int dist = st.size();
    long long sum = 0;
    long long ans = 0;
    for (int i = 0; i < n; i++) sum += arr[i]*(dist-1);
    int last = sum%10;
    int carry = sum/10;
    int newCarry1 = (sum+carry)/10;
    int newCarry = (sum+newCarry1)/10;
    m -= 4;
    stc.push(last);
    stc.push((sum+carry)%10);
    stc.push((sum+newCarry1)%10);
    while(m--)
    {
        stc.push((sum+newCarry)%10);
    }
    cout << sum+newCarry;
    while(!stc.empty())
    {
        cout << stc.top();
        stc.pop();
    }
}
return 0;
}
