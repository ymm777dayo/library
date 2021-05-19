struct unionfind{
  vector<int> par, siz;
  unionfind(int n) : par(n, -1), siz(n, 1){}
  int root(int x){
    if(par[x]==-1)return x;
    else return par[x] = root(par[x]); 
  }
  bool same(int x, int y){
    return root(x) == root(y);
  }
  bool unite(int x, int y){
    x = root(x), y = root(y);
    if(x==y)return false;
    if(siz[x]<siz[y])swap(x, y);
    par[y]=x;
    siz[x]+=siz[y];
    return true;
  }
  int size(int x){
    return siz[root(x)];
  }
};

/*
root(x) : xの親を検索(find), 経路圧縮付き
same(x, y) : xとyが同じ根にいるか判定
unite(x, y) : xとyを合成, union by size付き
size(x) : xの木の大きさを調べる
*/
