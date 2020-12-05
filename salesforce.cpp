/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
using namespace std;
int main()
{
	//Write code here
	int n;
	cin>>n;
	//int tests[n];
	for(int i=0;i<n;i++){
		int villans;
		cin>>villans;
		int v[villans];
		int e[villans];
		for(int j=0;j<villans;j++){
			//int villans,energies;
			cin>>v[j];
		}
		for(int k=0;k<villans;k++){
			//array to store energies of players
			cin>>e[k];
		}
		//sorting first arrray
		for(int n=0;n<villans;n++){
			for(int o = n+1;o<villans;o++){
				int temp;
				if(v[n] < v[o]){
					temp = v[n];
					v[n] = v[o];
					v[o] = temp;
				}
			}
		}

		//sorting second array
		for(int n=0;n<villans;n++){
			for(int o = n+1;o<villans;o++){
				int temp;
				if(e[n] < e[o]){
					temp = e[n];
					e[n] = e[o];
					e[o] = temp;
				}
			}
		}
		int count=0;
		for(int p =0;p<villans;p++){
			if(v[p]<e[p]){
				count = count+1;
			}
		}
		if(count == villans){
				cout<<"WIN"<<endl;
			}else{
				cout<<"LOSE"<<endl;
			}

	}
}



