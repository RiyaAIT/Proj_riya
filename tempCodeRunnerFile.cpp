#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
	for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
			if(i%j==0){
				sum=sum+i;
			}
		} 
    }
    cout<<sum;
    return 0;
}