#include<iostream>
using namespace std;

int main(){
	int m, d;
	cout<<"請分別輸入月份及日期"<<endl;
	cin >> m >> d;

	if (m == 1){ //一月
		//判斷在20日以前還以後
		if (d < 20)
			cout << "Capricorn";
		else
			cout << "Aquarius";
	}
	
	else if (m == 2){ //二月
		//判斷在19日以前還以後
		if (d < 19)
			cout << "Aquarius";
		else
			cout << "Pisces";
	}
	
	else if (m == 3){ //三月
		//判斷在21日以前還以後
		if (d < 21)
			cout << "Pisces";
		else
			cout << "Aries";
	}
	
	else if (m == 4){ //四月
		//判斷在21日以前還以後
		if (d < 21)
			cout << "Aries";
		else
			cout << "Taurus";
	}
	
	else if (m == 5){ //五月
		//判斷在22日以前還以後
		if (d < 22)
			cout << "Taurus";
		else
			cout << "Gemini";
	}
	
	else if (m == 6){ //六月
		//判斷在22日以前還以後
		if (d < 22)
			cout << "Gemini";
		else
			cout << "Cancer";
	}
	
	else if (m == 7){ //七月
		//判斷在23日以前還以後
		if (d < 23)
			cout << "Cancer";
		else
			cout << "Leo";
	}
	
	else if (m == 8){ //八月
		//判斷在24日以前還以後
		if (d < 24)
			cout << "Leo";
		else
			cout << "Virgo";
	}
	
	else if (m == 9){ //九月
		//判斷在24日以前還以後
		if (d < 24)
			cout << "Virgo";
		else
			cout << "Libra";
	}
	
	else if (m == 10){ //十月
		//判斷在24日以前還以後
		if (d < 24)
			cout << "Libra";
		else
			cout << "Scorpio";
	}
	
	else if (m == 11){ //十一月
		//判斷在23日以前還以後
		if (d < 23)
			cout << "Scorpio";
		else
			cout << "Sagittarius";
	}
	
	else if (m == 12){ //十二月
		//判斷在23日以前還以後
		if (d < 22)
			cout << "Sagittarius";
		else
			cout << "Capricorn";
	}

	cout << endl; //換行

	return 0;
}
