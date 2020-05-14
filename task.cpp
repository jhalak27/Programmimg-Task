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
			float l, w, r; //l->length, w->width r->radius of the virus to make fission
			cin>>l>>w>>r;
			//perform calculation for fission here
		}
		else{
			// for fusion
			float r1, r2, d; //r1->radius of the first virus, r2->radius of the second virus d->distance between virus
			cin>>r1>>r2>>d;
			//perform calculation for fusion set here
		}
		
	}
	return 0;
}