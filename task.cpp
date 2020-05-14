#include<bits/stdc++.h>
using namespace std;

int main(){
	int N; //N -> number of test cases (int as value can't exceed 2000)
	cin>>N;
	for(int i = 0; i < N; i++){
		char c;
		cin>>c;

		if(c=='S'){
			// for fission
			float l, w, r; //l->length, w->width r->radius of the virus to make fission (float as they are in real number)
			cin>>l>>w>>r;
			float nr = r / pow(2, 0.5); //nr -> new raduis after fission
			float minReq = 4 * nr; //minimum length requried (4*newRadius)

			if(l < minReq || w < minReq) //condition for min space required (if length or width is less than minimun required)
			{  
				cout<<"Not enough space for fission."<<endl;
			}

			else
			{
				float ans = pow(pow(l - 2 * nr, 2) + pow(w - 2 * nr, 2), 0.5); //max distance between centres of virus
				cout<<fixed<<setprecision(4)<<ans<<endl; //setting precision of 4 decimal places as given in output
			}
		}

		else{
			// for fusion
			float r1, r2, d; //r1->radius of the first virus, r2->radius of the second virus d->distance between virus
			cin>>r1>>r2>>d;
			//perform calculation for fusion set here
		}

		cout<<endl; //blank line after each test input
	}
	return 0;
}