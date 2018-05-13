#include <iostream>
#include <iomanip>
using namespace std;
class Sale {
public:
	Sale();
	void setSale(int month, double amount);
	void printSale();
private:
	double sale[12];
	double getTotalSale();
};
inline Sale::Sale() {
	for (int i = 0; i < 12; i++) {
		sale[i] = 0.0;
	}
}
inline void Sale::setSale(int month, double amount){
	if (month >= 1 && month <= 12 && amount > 0) {
		sale[month - 1] = amount;
		return;
	}else {
		cout << "Invalid month or amount";
	}
}
inline double Sale::getTotalSale() {
	double total = 0.0;
	for (int i = 0; i < 12; i++) {
		total += sale[i];
	}
	return total;
}
inline void Sale::printSale() {
	cout << std::fixed;
	cout << setprecision(2)<< "Total of year: " << this->getTotalSale() << endl;
}
