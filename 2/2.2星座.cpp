#include<iostream>
using namespace std;

int main(){
	int m, d;
	cout<<"�Ф��O��J����Τ��"<<endl;
	cin >> m >> d;

	if (m == 1){ //�@��
		//�P�_�b20��H�e�٥H��
		if (d < 20)
			cout << "Capricorn";
		else
			cout << "Aquarius";
	}
	
	else if (m == 2){ //�G��
		//�P�_�b19��H�e�٥H��
		if (d < 19)
			cout << "Aquarius";
		else
			cout << "Pisces";
	}
	
	else if (m == 3){ //�T��
		//�P�_�b21��H�e�٥H��
		if (d < 21)
			cout << "Pisces";
		else
			cout << "Aries";
	}
	
	else if (m == 4){ //�|��
		//�P�_�b21��H�e�٥H��
		if (d < 21)
			cout << "Aries";
		else
			cout << "Taurus";
	}
	
	else if (m == 5){ //����
		//�P�_�b22��H�e�٥H��
		if (d < 22)
			cout << "Taurus";
		else
			cout << "Gemini";
	}
	
	else if (m == 6){ //����
		//�P�_�b22��H�e�٥H��
		if (d < 22)
			cout << "Gemini";
		else
			cout << "Cancer";
	}
	
	else if (m == 7){ //�C��
		//�P�_�b23��H�e�٥H��
		if (d < 23)
			cout << "Cancer";
		else
			cout << "Leo";
	}
	
	else if (m == 8){ //�K��
		//�P�_�b24��H�e�٥H��
		if (d < 24)
			cout << "Leo";
		else
			cout << "Virgo";
	}
	
	else if (m == 9){ //�E��
		//�P�_�b24��H�e�٥H��
		if (d < 24)
			cout << "Virgo";
		else
			cout << "Libra";
	}
	
	else if (m == 10){ //�Q��
		//�P�_�b24��H�e�٥H��
		if (d < 24)
			cout << "Libra";
		else
			cout << "Scorpio";
	}
	
	else if (m == 11){ //�Q�@��
		//�P�_�b23��H�e�٥H��
		if (d < 23)
			cout << "Scorpio";
		else
			cout << "Sagittarius";
	}
	
	else if (m == 12){ //�Q�G��
		//�P�_�b23��H�e�٥H��
		if (d < 22)
			cout << "Sagittarius";
		else
			cout << "Capricorn";
	}

	cout << endl; //����

	return 0;
}
