 #include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int x, int y, int z, int w){
int ans; int e,s;
e=x>y?x:y;
s=z>w?z:w;
ans=e>s?e:s;
return ans;
 	
	
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}


