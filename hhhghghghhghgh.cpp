
using namespace std;
#define ll long long

int main() {
    int x;
   	scanf("%d",&x);
	while(x) {
        	int v;
        	int tres=0;
        	int kahan=0;
        	int res=0;
		scanf("%d",&v);
		bool falg = true;
		int j=v;
		int c=0;
       int i=0;
       int z;
       int l=0;
       int j=0;
        for ( j= 0; j< v; j++) {
            	scanf("%d",&z);
            if (z) {
               kahan= kahan+z;
            } else {
                l = z* -1;
                if (l<kahan) {
                   kahan-=l;
                   j++;
                   falg= true;
                } else {
                	c = l- kahan;
                	kahan=0;
                	
                   res+=c;
                    
                }
            }
        }
        printf("%d",res);
        printf("\n");
    }
}
