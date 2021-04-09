#include <iostream>
#include "assertion.h"
using namespace std;
Stock::Stock() {
	cout << "Default constuctor called"
		<< endl;
	company = "no name";
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
	return;
}
Stock::~Stock() {
	cout << "Bye, "
		<< company
		<< "!"
		<< endl;
}
void Stock::acquire(const string& co, long n, double pr) {
	company = co;
	if (n < 0) {
		cout << "Number of shares can't be negative;"
			<< company
			<< " shares set to 0."
			<< endl;
		shares = 0;
	}
	else {
		shares = n;
	}
	share_val = pr;
	set_tot();
	return;
}
void Stock::buy(long num, double price) {
	if (num < 0) {
		cout << "Number of shares purchased can't be negative."
			<< "Transaction is aborted."
			<< endl;
	}
	else {
		shares += num;
		share_val = price;
		set_tot();
	}
	return;
}
void Stock::sell(long num, double price) {
	if (num < 0) {
		cout << "Number of shares sold can't be negative."
			<< "Transacton is aborted."
			<< endl;
	}
	else if (num > shares) {
		cout << "You can't sell more than you have!"
			<< "Transaction is aborted."
			<< endl;
	}
	else {
		shares -= num;
		share_val = price;
		set_tot();
	}
	return;
}
void Stock::update(double price) {
	share_val = price;
	set_tot();
	return;
}
void Stock::show() {
	cout << "Company: "
		<< company
		<< " Shares: "
		<< shares
		<< endl
		<< " share Price: $"
		<< share_val
		<< " Total Worth: $"
		<< total_val
		<< endl;
	return;
}