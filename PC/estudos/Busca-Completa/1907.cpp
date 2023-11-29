#include <bits/stdc++.h>
using namespace std;
#define desync ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define pb push_back
#define eb emplace_back
template <class T>
void print_v(vector<T> &v) { for(auto x : v) cout << x << " "; }
ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
ll lcm(ll a,ll b) { return a/gcd(a,b)*b;}



typedef tuple<int,int,int> tii;

int main()
{
    char c;
    int n,m,cor,x,y;
    int image[1026][1026];
    bool visited[1026][1026];
    
    scanf("%d %d",&n,&m);
    
    for(int i = 0; i < 1026; i++)
    {
        for(int j = 0; j < 1026; j++)
        {
            image[i][j]=0;
            visited[i][j] = false;
        }
    }
    
    scanf("%c\n",&c);
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            scanf("%c",&c);
            if(c == '.')
                image[i][j]=1;
        }
        scanf("%c",&c);
    }
    
    cor = 0;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            if(image[i][j] == 1 and !visited[i][j])
            {
                cor++;
                queue<tii> fila;
                fila.push(make_tuple(i,j,cor));
                visited[i][j] = true;
                
                while(!fila.empty())
                {
                    tie(x,y,cor) = fila.front();
                    /*tii atual = fila.front();
                    x = get<0>(atual);
                    y = get<1>(atual);
                    cor = get<2>(atual);*/
                    fila.pop();
                    
                    if(image[x-1][y] == 1 and !visited[x-1][y])
                    {
                        fila.push(make_tuple(x-1,y,cor));
                        visited[x-1][y] = true;
                    }
                    
                    if(image[x+1][y] == 1 and !visited[x+1][y])
                    {
                        fila.push(make_tuple(x+1,y,cor));
                        visited[x+1][y] = true;
                    }
                    
                    if(image[x][y-1] == 1 and !visited[x][y-1])
                    {
                        visited[x][y-1] = true;
                        fila.push(make_tuple(x,y-1,cor));
                    }
                    
                    if(image[x][y+1] == 1 and !visited[x][y+1])
                    {
                        visited[x][y+1] = true;
                        fila.push(make_tuple(x,y+1,cor));
                    }
                }
            }
        }
    }
    
    printf("%d\n",cor);
    
    return 0;
}