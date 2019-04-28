#include <conio.h>
#include <iostream>
using namespace std;
int main()
{
	int  angka[10],jml,bah,h,ck,k,t;
    cout<<"Masukkan jumlah data : ";cin>>jml;
	for (int i=0;i<jml;i++)
		{cout<<"Masukkan data ke-"<<i+1<<" = ";cin>>angka[i];}
		for(int i=jml-2;i>=0;i--)
            {for(int a=0;a<=i;a++)
                {if(angka[a]>angka[a+1])
                    {t=angka[a];
                     angka[a]=angka[a+1];
                     angka[a+1]=t;}}}
        cout<<"Sorting Ascending :"<<endl;
		for (int j=0;j<jml;j++)
        {cout<<"Indeks "<<j+1<<" = "<<angka[j]<<endl;}

	cout<<"====Ubah Data===="<<endl;
	cout<<"Data yang diubah   = ";cin>>bah;
	for (int g=0;g<jml;g++)
	{if (angka[g]==bah)
		{cout<<"Masukka nilai baru = ";cin>>angka[g];}
	}
        for(int i=jml-2;i>=0;i--)
                    {for(int a=0;a<=i;a++)
                        {if(angka[a]>angka[a+1])
                            {t=angka[a];
                             angka[a]=angka[a+1];
                             angka[a+1]=t;}}}
	cout<<"Data setelah diubah"<<endl;
	for (int h=0;h<jml;h++)
        {cout<<"Indeks "<<h+1<<" = "<<angka[h]<<endl;}
	cout<<"====Data Hapus===="<<endl;
	cout<<"Data yang dihapus  = ";cin>>h;
	for (int j=0;j<jml;j++)
	{if (h==angka[j])
		{for (int k=j;k<jml;k++)
			{angka[k]= angka[k + 1];
			jml -=1;}}
	}
	cout<<"Data Baru :"<<endl;
	for (int p=0;p<jml;p++)
        {cout <<"Indeks "<<p+1<<" = "<<angka[p]<<endl;}
	cout<<"====Data Searching===="<<endl;
	cout<<"Data yang dicari   = ";cin>>ck;
	for (int n=0;n<jml; n++)
    {if (ck==angka[n])
        {k=true;k++;
         cout<<"Nilai "<<ck<<" Pada index = "<<n+1<<endl;}
	}
	if (k==0) cout<<"Data di cari tidak ada";
}
