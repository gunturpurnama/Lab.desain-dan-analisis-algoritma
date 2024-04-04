#include <iostream>
using namespace std;
class silsilah{
	protected:
	string orangtua = "albert wijaya dan jenny lim ";
	string anakanak = "agatha wijaya dan jonatan ";
	
	public:
		string ceksilsilah(){
			return "ayah bernama albert wijaya dan ibu berna,a jenny lim ";
		}
};

class cucu : public silsilah{
	protected:
		string cucu = "wilbert tan dan rayanza wijaya ";
		
	public:
		string cekanak(){
			return "anak pertama keluarga wijaya adalah agatha wijaya dan anak kedua dari keluarga wijaya adalah jonathan wijaya ";
		}
};

class anak: public cucu{
	public:
		string lihatsilsilahnya(){
			return "silsilah kelarga wijaya ";
		}
		string cekcucu(){
			return "cucu pertama bernama wilbert tan dan cucu kedua bernama rayanza wijaya ";
		}
};

int main(){
	anak silsilahwijaya;
	
	cout << silsilahwijaya.lihatsilsilahnya() <<endl;
	cout << silsilahwijaya.ceksilsilah()<<endl;
	cout << silsilahwijaya.cekanak()<<endl;
	cout << silsilahwijaya.cekcucu()<<endl;
	
	return 0;
}
