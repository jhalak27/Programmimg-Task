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
			float dis = pow(pow(l - 2 * nr, 2) + pow(w - 2 * nr, 2), 0.5); //max distance between centres of virus
			if(dis < 2 * nr || l < 2 * nr || w < 2 * nr)
				cout<<"Not enough space for fission."<<endl;
			else
				cout<<fixed<<setprecision(4)<<dis<<endl; //setting precision of 4 decimal places as given in output
		}

		else{
			// for fusion
			float r1, r2, d; //r1->radius of the first virus, r2->radius of the second virus d->distance between virus
			cin>>r1>>r2>>d;
			float ratio; //to store Compaction ratio 
			if(d >= r1 + r2) //condition for Compaction ratio to be 1 (if d is greater or equal to sum of radii)
			{
				ratio = 1;
				cout<<fixed<<setprecision(4)<<ratio<<endl; //setting precision of 4 decimal places as given in output
				cout<<"No compaction has occurred."<<endl; //priniting line as asking in the question
			}
			else
			{
				float area1, area2, intersection; //area1->area of first virus, area2->area of second virus, intersection->intersection area of both virus

				area1 = M_PI * r1 * r1; //area of first virus (PI*r1*r1)
				area2 = M_PI * r2 * r2; //area of first virus (PI*r2*r2)

				float angle1 = acos((d*d + r1*r1 - r2*r2) / (2 * d * r1)); //angle between lines from centre of first virus to centre of second radius and point of intersection 
				float angle2 = acos((d*d + r2*r2 - r1*r1) / (2 * d *r2)); //angle between lines from centre of second virus to centre of first radius and point of intersection 
				intersection = r2*r2*angle2 + r1*r1*angle1 - (0.5 * (r1*r1*sin(2 * angle1) + r2*r2*sin(2 * angle2))); //interestion area between virus
				
				float surfTotal = area1 + area2 - intersection; //total surface area of merged virus
				
				ratio = surfTotal / (area1 + area2); //ratio as given in question
				cout<<fixed<<setprecision(4)<<ratio<<endl; //setting precision of 4 decimal places as given in output
			}
		}

		cout<<endl; //blank line after each test input
	}
	return 0;
}
