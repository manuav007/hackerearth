#include<bits/stdc++.h>
using namespace std;

long long solve (int N, int start, int finish, vector<int> Ticket_cost) {
    start--;
    finish--;
    long long c1 = 0;
    long long total_sum = 0;
    for (int i = 0; i < N; i++) {
        total_sum += Ticket_cost[i];
        if (i >= start && i <= finish) {
            c1 += Ticket_cost[i];
        }
        else if (i <= start && i >= finish) {
            c1 += Ticket_cost[i];
        }
    }
    if(finish>start){
        c1 = c1-Ticket_cost[finish];
    }
    else{
        c1 = c1-Ticket_cost[start];
    }
    return min(c1,total_sum-c1);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    int start;
    cin >> start;
    int finish;
    cin >> finish;
    vector<int> Ticket_cost(N);
    for(int i_Ticket_cost = 0; i_Ticket_cost < N; i_Ticket_cost++)
    {
    	cin >> Ticket_cost[i_Ticket_cost];
    }

    long long out_;
    out_ = solve(N, start, finish, Ticket_cost);
    cout << out_;
}