#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void MultiplyVectorByScalar(vector<float> &v, float k){
	for(int i=0;i<v.size();++i)
		v[i] = v[i] * k;
}

void printVector(vector<float> v){
	for(int i=0;i<v.size();++i)
		cout<<v[i]<<' ';
	cout<<endl<<endl;
}

int main() {

	vector<float> v = {2 , 1 , 3 , 10};
	float k = 1.15;
	
	cout<<"Scalar : "<<k<<endl;
	cout<<"Vector : ";
	printVector(v);
	
	MultiplyVectorByScalar(v , k);
	
	cout<<"Vector After Scalar Multiplication by "<<k<<" = ";
	printVector(v);

}
