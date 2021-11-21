//Progam menetukan keterangan dari nilai mata kuliah menggunakan fungsi pointer
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int nilai_matkul,matkul;
	char nama[30],nim[30],prodi[30],nama_matkul[30],grade[30]="Grade Nilai Mata Kuliah";
	char *Tmatkul,*Tgrade,*Tnama,*Tnim,*Tprodi;
	Tmatkul=nama_matkul;
	Tgrade=grade;
	Tnama=nama;
	Tnim=nim;
	Tprodi=prodi;
	string grd;
	
	cout<<"============================================================"<<endl;
	cout<<"|                Progam Nilai Mata Kuliah                  |"<<endl;
	cout<<"============================================================"<<endl;
	cout<<"\n";
	
	cout<<"| Masukkan Nama                    : "; cin.getline (Tnama,30);
	cout<<"| Masukkan NIM                     : "; cin.getline (Tnim,30);
	cout<<"| Masukkan Progam Studi            : "; cin.getline (Tprodi,30);
	cout<<"| Masukkan Jumlah Data Mata Kuliah : "; cin>>matkul;
	
	cout<<"------------------------------------------------------------"<<endl;
	cout<<"\n";
	
	for (int i=1;i<=matkul;i++)
	{
		cout<<"              Data Mata Kuliah ke-"<<i<<"                   "<<endl;
		cout<<"============================================================"<<endl;
		cout<<"| Masukkan Nama Mata Kuliah  : "; cin>>Tmatkul;
		cout<<"| Masukkan Nilai Mata Kuliah : "; cin>>nilai_matkul;
		
		if ((nilai_matkul>=90)&&(nilai_matkul<=100))
		{
			grd="A";
		}
		else if ((nilai_matkul>=80)&&(nilai_matkul<90))
		{
			grd="B";
		}
		else if ((nilai_matkul>=70)&&(nilai_matkul<80))
		{
			grd="C";
		}
		else if ((nilai_matkul>=60)&&(nilai_matkul<70))
		{
			grd="D";
		}
		else if ((nilai_matkul>=50)&&(nilai_matkul<60))
		{
			grd="E";
		}
		else
		{
			grd="Tidak Lulus";
		}
		cout<<"| "<<Tgrade<<"    : "<<grd<<endl;
		cout<<"============================================================"<<endl;
		cout<<"\n";
	}
	
	cout<<"\n";
	cout<<"              TABEL NILAI                "<<endl;
	cout<<"========================================="<<endl;
	cout<<"|     NILAI MATKUL           GRADE      |"<<endl;
	cout<<"|      >= 90-100               A        |"<<endl;
	cout<<"|      >= 80-<90               B        |"<<endl;
	cout<<"|      >= 70-<80               C        |"<<endl;
	cout<<"|      >= 60-<70               D        |"<<endl;
	cout<<"|      >= 50-<60               E        |"<<endl;
	cout<<"|          <50            Tidak Lulus   |"<<endl;
	cout<<"========================================="<<endl;
	cout<<"\n";
	
	cout<<" TERIMA KASIH TELAH MENGGUNAKAN LAYANAN INI :)"<<endl;
	getch();
	
}

