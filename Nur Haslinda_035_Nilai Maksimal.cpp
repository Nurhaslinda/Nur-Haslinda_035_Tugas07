#include <iostream>
using namespace std;
 
int main () {
	int a = 0;
	int i;
	int sum = 0, max = 0, min = 0;
	
	cout<<"Masukkan banyak data nilai = ";
	cin>> a;
	
	int data[a];
	
	for(i=0; i<a; i++){
		cout<<"Nilai ke ";
		cout<< i+1;
		cout<<" = ";
		cin>> data [i];
	}
	
	sum = 0;
	int *ptr;
	ptr = data;
	
	cout<<"\n\tPake Pointer "<<endl;
	cout<<"======================================";
	cout<<"\nData nilai yang anda masukkan adalah	= ";
	max = min = *ptr;
	for(i = 0; i<a; i++){
		cout<< *(ptr + i) << ",";
		
		sum = sum + *(ptr + i);
		if(max < *(ptr + i)) {
			max = *(ptr + i);
		}
		if (min > * (ptr + i)) {
			min = * ( ptr + i);
		}
	}
	cout << "\nJumlah data nilai	= " << sum;
	cout << "\nRata-rata nilai		= " << sum/a;
	cout << "\nNilai minimal		= " << min;
	cout << "\nNilai Mkasimal		= " << max;
	return 0;
}
