#include <iostream>
using namespace std;

void printing_bill(int units, double rate) {
	double amount;
	amount = units * rate;
	if (amount < 300) {
		cout << "Bill for " << units << " units is ::" << amount;
	}
	else {
		amount = amount + (amount * 15 / 100);
		cout << "Bill for " << units << " units is ::" << amount;
	}
}

void electric_bill(int& units) {
	if (units > 0 && units <= 100) {
		printing_bill(units, 0.60);
	}
	else if (units > 100 && units <= 200) {
		printing_bill(units, 0.80);
	}
	else if (units > 200 && units <= 300) {
		printing_bill(units, 0.90);
	}
	else if (units == 0) {
		cout << "There are O units but still the user is charged the amount of 50.";
	}
}
int main() {
	int units = 0;
	electric_bill(units);
}

______________________________________________________________________________________________________________


#include<iostream>
using namespace std;

void create_matrix(int n , int m = 2) {
	int matrix[5][5];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> matrix[i][j];
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << matrix[i][j] << " ";
		}cout << endl;
	}
}

int main() {
	int r = 3;
	int c = 4;
	create_matrix(c);
	cin.get();
}


______________________________________________________________________________________________________________________

#include<iostream>
using namespace std;

inline int max_num(int a, int b, int c){
	if (a > b && a > c)
		return a;
	else if (b > c)
		return b;
	else
		return c;
}

int main() {
	int d = max_num(2, 9, 16);
	cout << d;
	cin.get();
}	


________________________________________________________________________________________________________________________

#include<iostream>
#include<cmath>
using namespace std;

double power(double m, double n = 2.0) {
	return pow(m,n);
}

int main() {
	cout << power(3,3);
	cin.get();
}

___________________________________________________________________________________________________________________________

#include<iostream>
#include<cmath>
using namespace std;

double power(double m, double n = 2.0) {
	return pow(m,n);
}

int power(int m, int n = 2) {
	return pow(m, n);
}

int main() {
	double m = 5.5;
	int a = 5;
	cout << power(m) << endl;
	cout << power(a);
	cin.get();
}

________________________________________________________________________________________________________________________________


#include<iostream>
#include<cmath>
using namespace std;

double area(double b, double h) {
	cout << "Area of triangle ::" << endl;
	return (b * h) / 2;
}

float area(float r) {
	cout << "Area of circle ::" << endl;
	return 3.14 *(pow(r, 2));
}

int main() {
	double m = 5.5;
	double n = 6.5;
	float a = 5;
	cout << area(m, n) << endl;
	cout << area(a);
	cout << endl << 2 * 8 / 2;
	cin.get();
}


___________________________________________________________________________________________________________________________________


#include<iostream>
#include<cstring>
#include<string>
using namespace std;

struct student {
	char name[20];
	int roll_number;
	float total_marks;
};

int main() {
	student a;
	strcpy_s(a.name, "sohail");
	a.roll_number = 999;
	a.total_marks = 605.5;
	float final_total = a.total_marks + 20;
	cout << a.name << endl
		<< a.roll_number << endl
		<< a.total_marks << endl
		<< final_total << endl;

	cin.get();
}


______________________________________________________________________________________________

#include<iostream>
using namespace std;

class Item {
private:
	int number;
	float cost;
public:
	void get_data(int, float);
	void put_data() {
		cout << number << endl << cost << endl;
	}
};

void Item::get_data(int a, float b) {
	number = a;
	cost = b;
}

int main() {
	
	Item a;
	a.get_data(3, 36.96);
	a.put_data();

	cin.get();
}

__________________________________________________________________________________________________________


#include<iostream>
using namespace std;

const int m = 50;

class ITEMS {
private:
	int itemCode[m];
	float itemPrice[m];
	int count;
public:
	void CNT(void) { count = 0; };
	void getitem();
	void displaySum();
	void remove(void);
	void displayItems(void);
};

void ITEMS::getitem() {
	cout << "Enter item code :";
	cin >> itemCode[count];
	cout << "Enter item cost :";
	cin >> itemPrice[count];
	count++;
}
void ITEMS::displaySum() {
	float sum = 0;
	for (int i = 0; i < count; i++)
		sum = sum + itemPrice[i];
	cout << "\nTotal value :" << sum << endl;
}
void ITEMS::remove() {
	int a;
	cout << "Enter item code :";
	cin >> a;
	for (int i = 0; i < count; i++) {
		if (itemCode[i] == a)
			itemPrice[i] = 0;
	}
}
void ITEMS::displayItems() {
	cout << endl << "Code Price" << endl;
	for (int i = 0; i < count; i++) {
		cout << endl << itemCode[i] << " : " << itemPrice[i];
	}
	cout << endl;
}

int main() {
	ITEMS order;
	order.CNT();
	int x;
	do {
		cout << endl << "You can do the folloeing:"
			<< "Enter appropriate number \n";
		cout << endl << "1 : Add an item";
		cout << endl << "2 : Display total value";
		cout << endl << "3 : Delete an item";
		cout << endl << "4 : Display all items";
		cout << endl << "5 : Quit";
		cout << endl << endl << "What is your option?";

		cin >> x;

		switch (x) {
		case 1: order.getitem(); break;
		case 2: order.displaySum(); break;
		case 3: order.remove(); break;
		case 4: order.displayItems(); break;
		case 5: break;
		default: cout << "Error in input, try again" << endl;
		}
	} while (x != 5);
	cin.get();
}

_______________________________________________________________________________________________________________

#include<iostream>
using namespace std;

const int m = 50;

class ITEMS {
private:
	int itemCode[m];
	float itemPrice[m];
	int count;
public:
	void CNT(void) { count = 0; };
	void getitem();
	void displaySum();
	void remove(void);
	void displayItems(void);
};

void ITEMS::getitem() {
	cout << "Enter item code :";
	cin >> itemCode[count];
	cout << "Enter item cost :";
	cin >> itemPrice[count];
	count++;
}
void ITEMS::displaySum() {
	float sum = 0;
	for (int i = 0; i < count; i++)
		sum = sum + itemPrice[i];
	cout << "\nTotal value :" << sum << endl;
}
void ITEMS::remove() {
	int a;
	cout << "Enter item code :";
	cin >> a;
	for (int i = 0; i < count; i++) {
		if (itemCode[i] == a)
			itemPrice[i] = 0;
	}
}
void ITEMS::displayItems() {
	cout << endl << "Code Price" << endl;
	for (int i = 0; i < count; i++) {
		cout << endl << itemCode[i] << " : " << itemPrice[i];
	}
	cout << endl;
}

int main() {
	ITEMS order;
	order.CNT();
	int x;
	do {
		cout << endl << "You can do the folloeing:"
			<< "Enter appropriate number \n";
		cout << endl << "1 : Add an item";
		cout << endl << "2 : Display total value";
		cout << endl << "3 : Delete an item";
		cout << endl << "4 : Display all items";
		cout << endl << "5 : Quit";
		cout << endl << endl << "What is your option?";

		cin >> x;

		switch (x) {
		case 1: order.getitem(); break;
		case 2: order.displaySum(); break;
		case 3: order.remove(); break;
		case 4: order.displayItems(); break;
		case 5: break;
		default: cout << "Error in input, try again" << endl;
		}
	} while (x != 5);
	cin.get();
}

_________________________________________________________________________________________________________________


#include<iostream>
using namespace std;

class item {
	static int count;
	int number;
public:
	void getdata(int a) {
		number = a;
		count++;
	}
	void getcount(void) {
		cout << "count: ";
		cout << count << "\n";
	}
};
int item::count;
int main() {
	item a, b, c;
	a.getcount();
	b.getcount();
	c.getcount();

	a.getdata(100);
	b.getdata(200);
	c.getdata(300);

	cout << "After reading data" << endl;

	a.getcount();
	b.getcount();
	c.getcount();
	return 0;
}

___________________________________________________________________________________________________

//static member function
#include<iostream>
using namespace std;

class test {
private:
	int code;
	static int count;
public:
	void setcode(void) {
		code = ++count;
	}
	void showcode() {
		cout << "object number: " << code << endl;
	}
	static void showcount() {
		cout << "count: " << count << endl;
	}
};
int test::count;
int main() {
	test t1, t2;
	t1.setcode();
	test::showcount();
	t2.setcode();
	test::showcount();
	test t3;
	t3.setcode();
	test::showcount();

	t1.showcode();
	t2.showcode();
	t3.showcode();

	return 0;

	
	cin.get();
}

_______________________________________________________________________________________________

// Array of Objects
#include<iostream>
using namespace std;

class employee {
	char name[30];
	float age;
public:
	void getdata();
	void putdata();
};
void employee::getdata() {
	cout << "Enter name :";
	cin >> name;
	cout << "Enter age :";
	cin >> age;
}
void employee::putdata() {
	cout << "Name :: " << name << endl;
	cout << "Age :: " << age << endl;
}
int main() {
	const int size = 3;
	employee manager[size];
	for (int i = 0; i < size; i++) {
		cout << endl << "Details of manager" << i + 1 << "\n'";
		manager[i].getdata();
	}
	cout << endl;
	for (int i = 0; i < size; i++) {
		cout << "\nManager" << i + 1 << "\n";
		manager[i].putdata();
	}
	cin.get();
}

_______________________________________________________________________________________________________

// Objects as Arguments
#include<iostream>
using namespace std;

class timex {
	int hours;
	int minutes;
public:
	void gettime(int h, int m) {
		hours = h; minutes = m;
	}
	void puttime() {
		cout << hours << " hours and " << minutes << " minutes" << endl;
	}
	void sum(timex, timex); // declaration with objects as arguments
};
	void timex::sum(timex t1, timex t2) {
	minutes = t1.minutes + t2.minutes;
	hours = minutes / 60;
	minutes = minutes % 60;
	hours = hours + t1.hours + t2.hours;
}
int main() {
	timex T1, T2, T3;
	T1.gettime(2, 45);
	T2.gettime(3, 45);

	T3.sum(T1, T2);

	cout << "T1 = "; T1.puttime();
	cout << "T2 = "; T2.puttime();
	cout << "T3 = "; T3.puttime();
	return 0;
}

_______________________________________________________________________________________________

// Friend function 
#include<iostream>
using namespace std;

class Sample {
private:
	int a, b;
public:
	void setvalue() { a = 25; b = 40; }
	friend float mean(Sample s);
};
float mean(Sample s) {
	return float(s.a + s.b) / 2.0;
}

int main() {
	Sample X; // object X
	X.setvalue();
	cout << "Mean value = " << mean(X) << "\n";
	cin.get();
	return 0;

}

_______________________________________________________________________________________

// Using Friend Function to Add Data Objects of Two Different Classes

#include<iostream>
using namespace std;

class ABC; // forward declaration

class XYZ {
	int data;
public:
	void setvalue(int value) {
		data = value;
	}
	friend void add(XYZ, ABC); // friend function declaration
};

class ABC {
	int data;
public:
	void setvalue(int value) {
		data = value;
	}
	friend void add(XYZ, ABC); // friend function declaration
};
void add(XYZ obj1, ABC obj2) { // friend function
	cout << "Sum of data values of XYZ  and ABC objects using friend function = " <<
		obj1.data + obj2.data;
}

int main() {
	XYZ X;
	ABC A;
	X.setvalue(5);
	A.setvalue(50);
	add(X, A);
	cin.get();
	return 0;
}

______________________________________________________________________________________________

// Swapping Private Data of classes 
#include<iostream>
using namespace std;

class class_2;
class class_1 {
	int value1;
public:
	void intdata(int a) { value1 = a; }
	void display() { cout << value1 << "\n"; }
	friend void exchange(class_1&, class_2&);
};
class class_2 {
	int value2;
public:
	void intdata(int a) { value2 = a; }
	void display() { cout << value2 << "\n"; }
	friend void exchange(class_1&, class_2&);
};

void exchange(class_1& x, class_2& y){
	int temp = x.value1;
	x.value1 = y.value2;
	y.value2 = temp;
}

int main() {
	class_1 c1;
	class_2 c2;

	c1.intdata(100);
	c2.intdata(200);

	cout << "values before exchange" << endl;
	c1.display();
	c2.display();
	exchange(c1, c2); // swapping

	cout << "Values  after exchange " << endl;
	c1.display();
	c2.display();

	cin.get();
	return 0;

}

___________________________________________________________________________________________________

// Returning objects 
#include<iostream>
using namespace std;

class matrix {
	int m[3][3];
public:
	void read() {
		cout << "Enter the element of the 3x3 matrix: \n";
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				cout << "m[" << i << "] [" << j << "] = ";
				cin >> m[i][j];
			}
		}
	}
	void display() {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				cout << "m[" << m[i][j] << "]" << " ";
			}cout << endl;
		}
	}
	friend matrix trans(matrix);
};

matrix trans(matrix m1) {
	matrix m2; // creating an object
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			m2.m[i][j] = m1.m[j][i];
		}
	}
	return (m2);
}
int main() {
	matrix mat1, mat2;
	mat1.read();
	cout << "\nYou entered the following matrix:" << endl;
	mat1.display();
	
	mat2 = trans(mat1);
	cout << "\nTransposed matrix: " << endl;
	mat2.display();

	cin.get();
	return 0;
}

_________________________________________________________________________________________________

// Dereferencing Operator
#include<iostream>
using namespace std;

class M {
	int x;
	int y;
public:
	void set_xy(int a, int b) {
		x = a;
		y = b;
	}
	friend int sum(M m);
};
int sum(M m) {
	int M ::* px = &M::x;
	int M ::* py = &M::y;
	M* pm = &m;
	int S = m.*px + pm->*py;
	return S;
}

int main() {
	M n;
	void (M :: * pf) (int, int) = &M::set_xy;
	(n.*pf) (10, 20);
	cout << "SUM = " << sum(n) << endl;
	
	M *op = &n;
	(op->*pf) (30, 40);
	cout << "SUM = " << sum(n) << "\n";

	cin.get();
	return 0;

}

___________________________________________________________________________________________

// class representing a bank account
#include<iostream>
using namespace std;

class BankAccount {
private:
	char depositor[20];
	int account_no;
	char account[20];
	float bal_amount = 0;
	int deposit_amount;
	int withdrawl_amount;
public:
	void getdata();
	void deposit();
	void withdraw();
	void showbal();
};

void BankAccount::getdata() {
	cout << "Name of Depositor : ";
	cin >> depositor;
	cout << "Enter the account number : ";
	cin >> account_no;
	cout << "Account Type : ";
	cin >> account;
	cout << "For withdrawl Enter 0 and for Deposit Enter 1 : ";
	int op;
	cin >> op;
	if (op == 0) {
		cout << "Enter the amount to be withdrawl : ";
		cin >> withdrawl_amount;
	}
	else {
		cout << "Enter the amount to be deposited : ";
		cin >> deposit_amount;
	}
}
void BankAccount::showbal() {
	cout << "Balance amount for the Account No : " << account_no << " is Rs. " << bal_amount << endl;
}
void BankAccount::deposit() {
	getdata();
	bal_amount += deposit_amount;
}
void BankAccount::withdraw() {
	showbal();
	getdata();
	bal_amount -= withdrawl_amount;
}

int main() {
	BankAccount account1;
	account1.deposit();
	account1.showbal();
	account1.withdraw();
	account1.showbal();

	cin.get();
}

_______________________________________________________________________________________________________________________

// vector class with float values
#include<iostream>
#include<vector>
using namespace std;

class Vector {
private:
	float vec[100];
	int size = 0;
	float element;
public:
	void create();
	void modify();
	void display();
};

void Vector::create() {
	cout << "Enter the size of the vector : ";
	cin >> size;
	for (int i = 0; i < size; i++) {
		cout << "Add Elements : ";
		cin >> element;
		vec[i] = element;
	}
}

void Vector::modify() {
	int index;
	for (int i = 0; i < size; i++) {
		if (i == index) {
			cout << "Enter the index to be modified : " << endl;
			cin >> index;
			cout << "Modify element : ";
			cin >> element;
			vec[i] = element;
		}
	}display();
}

void Vector::display() {
	cout << "(";
	for (int i = 0; i < size; i++) {
		cout << vec[i] << ", ";
	}cout << ")" << endl;
}

int main() {
	Vector v1;
	v1.create();
	v1.display();
	v1.modify();
	//v1.display();
}

_______________________________________________________________________________________________________________

// class representing a bank account
#include<iostream>
using namespace std;
int counter = 0;
class BankAccount {
private:
	char depositor[20];
	int accounts[10];
	int account_no;
	char account[20];
	float bal_amount = 0;
	int deposit_amount;
	int withdrawl_amount;
public:
	void getdata();
	void deposit();
	void withdraw();
	void showbal();
};

void BankAccount::getdata() {
	cout << "Name of Depositor : ";
	cin >> depositor;
	cout << "Enter the account number : ";
	cin >> account_no;
	accounts[counter] = account_no;
	cout << "Account Type : ";
	cin >> account;
	cout << "For withdrawl Enter 0 and for Deposit Enter 1 : ";
	int op;
	cin >> op;
	if (op == 0) {
		cout << "Enter the amount to be withdrawl : ";
		cin >> withdrawl_amount;
	}
	else {
		cout << "Enter the amount to be deposited : ";
		cin >> deposit_amount;
	}
	counter++;
}
void BankAccount::showbal() {
	cout << "Balance amount for the Account No : " << account_no << " is Rs. " << bal_amount << endl;
}
void BankAccount::deposit() {
	getdata();
	bal_amount += deposit_amount;
}
void BankAccount::withdraw() {
	showbal();
	getdata();
	bal_amount -= withdrawl_amount;
}

int main() {
	BankAccount account1;
	account1.deposit();
	account1.showbal();
	account1.withdraw();
	account1.showbal();

	cin.get();
}

______________________________________________________________________________________________________________________

#include<iostream>
using namespace std;

class matrix {
	int m[3][3];
public:
	void read(void) {
		cout << "Enter the elements of the 3X3 matrix: " << endl;
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				cin >> m[i][j];
			}
		}
	}
	void display() {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				cout << m[i][j] << " ";
			}cout << endl;
		}
	}

	friend matrix matmul(matrix, matrix);
};

matrix matmul(matrix m1, matrix m2) {
	matrix m3;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			m3.m[i][j] = m1.m[i][j] * m2.m[i][j];
		}
	} return (m3);
}

int main() {
	matrix m1, m2, m3;
	m1.read();
	m1.display();
	m2.read();
	m2.display();
	m3 = matmul(m1, m2);
	cout << "Multiplying m1 * m2" << endl;
	m3.display();
}

________________________________________________________________________________________________

#include <iostream>
#include <iomanip>
using namespace std;
class DB;
class DM {
	float m;
public:
	void read(float metre) {
		m = metre;
	}
	void display() {
		cout << setprecision(3) << m << " meters and centimeters" << endl;
	}
	friend DM add(DM, DB);
	friend DB add(DB, DM);
};

class DB {
	float ft;
public:
	void read(float feet) {
		ft = feet;
	}
	void display() {
		cout << setprecision(3) << ft << " feet and inches" << endl;
	}
	friend DM add(DM, DB);
	friend DB add(DB, DM);
};

DM add(DM m, DB f ) {
	DM m1;
	double temp = f.ft * 0.3048;
	m1.m = m.m + temp;
	return (m1);
}

DB add(DB f, DM m) {
	DB f1;
	double temp = m.m * 3.281;
	f1.ft = f.ft + temp;
	return (f1);
}

int main() {
	DM m, m1;
	DB f, f1;
	m.read(3.60);
	m.display();
	f.read(3.06);
	f.display();
	m1 = add(m, f);
	f1 = add(f, m);
	m1.display();
	f1.display();
}

_______________________________________________________________________________________

// Example of parameterized Constructor 
#include<iostream>
using namespace std;

class Point {
	int x, y;
public:
	Point(int a, int b) // inline paraterized constructor definition
	{
		x = a;
		y = b;
	}
	void display() {
		cout << "(" << x << ", " << y << ")" << endl;
	}
};

int main() {
	Point p1(1, 1); // invokes  parameterized constructor
	Point p2(5, 10);
	cout << "Point p1 = ";
	p1.display();
	cout << "Point p2 = ";
	p2.display();
	return 0;
}

________________________________________________________________________________________________________________________


// Overloaded Constructors
#include<iostream>
using namespace std;

class complex {
	float x, y;
public:
	complex() { }
	complex(float a) { x = y = a; }
	complex(float real, float imag) {
		x = real; 
		y = imag;
	}

	friend complex sum(complex, complex);
	friend void show(complex);
}; 

complex sum(complex c1, complex c2) {
	complex c3;
	c3.x = c1.x + c2.x;
	c3.y = c1.y + c2.y;
	return(c3);
}

void show(complex c) {
	cout << c.x << " + j" << c.y << endl;
}
int main() {
	complex A(2.7, 3.5);
	complex B(1.6);
	complex C;

	C = sum(A, B);
	cout << "A = "; show(A);
	cout << "B = "; show(B);
	cout << "C = "; show(C);

	// Another way to give initial values (second method)
	complex P, Q, R;
	P = complex(2.5, 3.9);
	Q = complex(1.6, 2.5);
	R = sum(P, Q);

	cout << "\n";
	cout << "P = "; show(P);
	cout << "Q = "; show(Q);
	cout << "R = "; show(R);

	return 0;
}

___________________________________________________________________________________________________________________

// Dynamic Initialization of Objects

// Long-term fixed deposit system 
#include<iostream>
using namespace std;

class Fixed_deposit {
	long int P_amount;
	int Years;
	float Rate;
	float R_value;
public:
	Fixed_deposit(){ }
	Fixed_deposit(long int p, int y, float r = 0.12);
	Fixed_deposit(long int p, int y, int r);
	void display();
};

Fixed_deposit::Fixed_deposit(long int p, int y, float r) {
	P_amount = p;
	Years = y;
	Rate = r;
	R_value = P_amount;
	for (int i = 1; i <= y; i++)
		R_value = R_value * (1.0 + r);
}

Fixed_deposit::Fixed_deposit(long int p, int y, int r) {
	P_amount = p;
	Years = y;
	Rate = r;
	R_value = P_amount;
	for (int i = 1; i <= y; i++)
		R_value = R_value * (1.0 + float(r) / 100);
}

void Fixed_deposit::display(void) {
	cout << endl
		<< "Principal Amount = " << P_amount << endl
		<< "Return Value = " << R_value << endl;
}

int main() {
	Fixed_deposit FD1, FD2, FD3;
	long int p;
	int y;
	float r;
	int R;

	cout << "Enter amount, period, interest rate(in percent)" << endl;
	cin >> p >> y >> R;
	FD1 = Fixed_deposit(p, y, R);

	cout << "Enter amount, period, interest rate(in decimal form)" << endl;
	cin >> p >> y >> r;
	FD2 = Fixed_deposit(p, y, r);

	cout << "Enter amount and period" << endl;
	cin >> p >> y;
	FD3 = Fixed_deposit(p, y);
	
	cout << endl << "Deposit 1";
	FD1.display();

	cout << endl << "Deposit 2";
	FD2.display();

	cout << endl << "Deposit 3";
	FD3.display();
	cin.get();

	return 0;
}

__________________________________________________________________________________________________________________________________

// copy constructor

#include<iostream>
using namespace std;

class code {
	int id;
public:
	code(){}
	code(int a) { id = a; }
	code(code& x) {
		id = x.id;
	}
	void display() {
		cout << id;
	}
};

int main() {
	code A(100);
	code B(A);
	code C = A;

	code D;
	D = A;

	cout << endl << " id of A: "; A.display();
	cout << endl << " id of B: "; B.display();
	cout << endl << " id of C: "; C.display();
	cout << endl << " id of D: "; D.display();
}


_____________________________________________________________________________________________________________________

// consturctors with new

#include<iostream>
#include<cstring>
using namespace std;

class String {
	char* name;
	int length;
public:
	String() { // constructor - 1
		length = 0;
		name = new char[length + 1];
	}
	String(char* s) { // constructor - 2
		length = strlen(s);
		name = new char[length + 1];

		strcpy(name, s);
	}

	void display(void) {
		cout << name << endl;
	}
	void join(String &a, String &b);
};

void String::join(String& a, String& b) {
	length = a.length + b.length;
	delete name;
	name = new char[length + 1]; // dynamic allocation

	strcpy(name, a.name);
	strcat(name, b.name);
}

int main() {
	char *first = "Joseph ";
	String name1(first), name2("Louis "), name3("Lagrange"),
		s1, s2;

	s1.join(name1, name2);
	s2.join(s1, name3);
	name1.display();
	name2.display();
	name3.display();
	s1.display();
	s2.display();
	return 0;
}

______________________________________________________________________________________________________________________________

// Construction Matrix Objects

#include<iostream>
using namespace std;

class Matrix {
	int** p; // pointer to matrix 
	int d1, d2;
public:
	Matrix(int x, int y);
	void get_element(int i, int j, int value) {
		p[i][j] = value;
	}
	int& put_element(int i, int j) {
		return p[i][j];
	}
};
Matrix::Matrix(int x, int y) {
	d1 = x;
	d2 = y;
	p = new int* [d1];
	for (int i = 0; i < d1; i++)
		p[i] = new int[d2];
}

int main() {
	int m, n;

	cout << "Enter size of Matrix: ";
	cin >> m >> n;
	Matrix A(m, n); // matrix object A constructed

	cout << "Enter matrix elements row by row" << endl;
	int value;
	
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> value;
				A.get_element(i, j, value);
		}
	}
	cout << endl;
	cout << A.put_element(1, 2);

	return 0;
}

________________________________________________________________________________________________________________________________

// Implementations of Destructors

#include<iostream>
using namespace std;



class test {
	int count = 0;
public:
	test() {
		count++;
		cout << endl << endl << "Constructor Msg: Object number " << count << "Created..";
	}
	~test() {
		cout << endl << endl << "Destructor Msg: Object number " << count << "destroyed..";
		count--;
	}
};

int main() {
	cout << "Inside the main block..";
	cout << endl << endl << "Creating first object T1..";

	test T1;
	{
		//Block 1
		cout << endl << endl <<  "Inside Block 1..";
		cout << endl << endl <<  "Creating two more objects T2 and T3..";
		test T2, T3;
		cout << endl << endl << "Leaving Block 1..";
	}
	cout << endl << endl << "Back inside the main Block..";
	return 0;
}


_______________________________________________________________________________________________________________________

#include<iostream>
using namespace std;

class test {
	int* a;
public:
	test(int size) {
		a = new int(size);
		cout << "\n\nConstruction Mag: Integer array of size " << size << " create..";
	}
	~test() {
		delete a;
		cout << "\n\nDestruction Msg: Freed up the memory allocated for integer array..";
	}
};

int main() {
	int a;
	cout << "Enter the size of the array..";
	cin >> a;
	cout << "\n\nCreating an object of the class..";
	test T(a);
	cout << "\n\nPress any key to end the program..";


	cin.get();
}

___________________________________________________________________________________________________________________________

// Book Shop Inventory

#include<iostream>
#include<string>
#include<vector>
using namespace std;
/*
struct Book_Info {
	char author[20];
	char title[50];
	float price;
	char publisher[30];
	int stock;
};
*/
class Books {
	string title;
	string author;
	string publisher;
	float price;
	int stock;
public:
	void add_book() {
		cout << "Enter the details of the book: " << endl;
		cout << "Enter the Title : " << endl;
		cin >> title;
		cout << "Enter the Author : " << endl;
		cin >> author;
		cout << "Enter the Publisher : " << endl;
		cin >> publisher;
		cout << "Enter the Price : " << endl;
		cin >> price;
		cout << "Avaialble copies : " << endl;
		cin >> stock;
	}
	void show_book() {
		cout << "Title : ";
		cout << title << endl;;
		cout << "Author : ";
		cout << author << endl;
		cout << "Publisher : " ;
		cout << publisher << endl;
		cout << "Price : ";
		cout << price << endl;
		cout << "Avaialble copies : ";
		cout << stock << endl;
	}
	friend void search(Books& book) {
		cout << "Looking for a book search it here..." << endl;
		string s_title;
		string s_author;
		cout << "Enter the title : " << endl;
		cin >> s_title;
		cout << "Enter the author : " << endl;
		cin >> s_author;
		if (s_title == book.title) {
			cout << s_title << " is available !" << endl;
			cout << "How many copies of " << s_title << " you wanna buy ?" << endl;
			int s_copies;
			cin >> s_copies;
			if (s_copies <= book.stock) {
				float total = 0;
				for (int i = 1; i <= s_copies; i++) {
					total += book.price;
				}
				cout << "A total sum of " << total << " rupees is to be paid for the required copies."
					<< endl << "Thank You !";
			}
			else {
				cout << "Required copies not in stock." << endl;
			}book.stock -= s_copies;
		}
		else {
			cout << "No such Book available, sorry !" << endl;
		}
	}
};

int main() {
	Books book1;
	book1.add_book();
	book1.show_book();
	search(book1);
}

_____________________________________________________________________________________________

// Overloading Unary Minus

#include<iostream>

class space {
	int x, y, z;
public:
	void getdata(int a, int b, int c);
	void display();
	void operator-();
};

void space::getdata(int a, int b, int c) {
	x = a;
	y = b;
	z = c;
}

void space::display() {
	std::cout << "x = " << x << std::endl;
	std::cout << "y = " << y << std::endl;
	std::cout << "z = " << z << std::endl;
}

void space::operator-()
{
	x = -x;
	y = -y;
	z = -z;
}

int main() {
	space s;
	s.getdata(10, -20, 30);
	s.display();
	-s;
	std::cout << "-s :: " << std::endl;
	s.display();

	return 0;
}

_____________________________________________________________________________________________

// Overloading + operator

#include<iostream>

class Complex {
private:
	float m_x;
	float m_y;
public:
	Complex(){}
	Complex(float real, float imag) {
		m_x = real; m_y = imag;
	}
	Complex operator+(Complex);
	void display();
};

Complex Complex :: operator+(Complex c){
	Complex temp;
	temp.m_x = m_x + c.m_x;
	temp.m_y = m_y + c.m_y;
	return(temp);
}

void Complex::display(void) {
	std::cout << m_x << " + j" << m_y << "\n";
}

int main() {
	Complex C1, C2, C3;
	C1 = Complex(2.5, 3.5);
	C2 = Complex(1.6, 2.7);
	C3 = C1 + C2;

	std::cout << "C1 = "; C1.display();
	std::cout << "C2 = "; C2.display();
	std::cout << "C3 = "; C3.display();

	return 0;
}

_______________________________________________________________________________________________

// Overloading Operators using friend

#include<iostream>

const int size = 3;
class vector {
private:
	int m_v[size];
public:
	vector();	// constructs null vector 
	vector(int* x);// constructs vector from array
	friend vector operator*(int a, vector b);
	friend vector operator*(vector b, int a);
	friend std::istream& operator >>(std::istream&, vector&);
	friend std::ostream& operator <<(std::ostream&, vector&);
};

vector::vector() {
	for (int i = 0; i < size; i++)
		m_v[i] = 0;
}

vector::vector(int* x) {
	for (int i = 0; i < size; i++)
		m_v[i] = x[i];
}

vector operator*(int a, vector b) {
	vector c;

	for (int i = 0; i < size; i++)
		c.m_v[i] = a * b.m_v[i];
	return c;
}

vector operator*(vector b, int a) {
	vector c;

	for (int i = 0; i < size; i++)
		c.m_v[i] = b.m_v[i] * a;
	return c;
}

std::istream& operator >>(std::istream& din, vector& b) {
	for (int i = 0; i < size; i++)
		din >> b.m_v[i];
	return(din);
}

std::ostream& operator <<(std::ostream& dout, vector& b) {
	dout << "(" << b.m_v[0];
	for (int i = 1; i < size; i++)
		dout << ", " << b.m_v[i];
	dout << ")";
	return(dout);
}

int x[size] = { 2,4,6 };

int main() {
	vector m;
	vector n = x;

	std::cout << "Enter elements of vector m " << "\n";
	std::cin >> m;
	std::cout << "\n";
	std::cout << "m = " << m << std::endl;

	vector p, q;

	p = 2 * m;
	q = m * 2;

	std::cout << std::endl;
	std::cout << "p = " << p << "\n";
	std::cout << "q = " << q << "\n";
}

_____________________________________________________________________________________________

// Overloading of the subscript operator

#include<iostream>

class arr {
private:
	int a[5];
public:
	arr(int* s) {
		for (int i = 0; i < 5; i++)
			a[i] = s[i];
	}
	int operator [] (int k) {
		return (a[k]);
	}
};

int main() {
	int x[5] = { 1,2,3,4,5 };
	arr A(x);
	for (int i = 0; i < 5; i++)
		std::cout << A[i] << "\t"; 
	return 0;
}

______________________________________________________________________________________________

//Overloading of Pointer-to-member Operator
#include<iostream>
class test {
public:
	int num;
	test(int j) {
		num = j;
	}
	test* operator->(void) {
		return this;
	}
};

int main() {
	test T(5);
	test* ptr = &T;

	std::cout << "T.num = " << T.num;
	std::cout << "\nptr->num = " << ptr->num;

	std::cout << "\nT->num = " << T->num;
	std::cin.get();
	return 0;

}

______________________________________________________________________________________________

// Data Conversions
#include<iostream>

class invent2;		// Destination class

class invent1 {		// Source class 
private:
	int code;
	int items;
	float price;
public:
	invent1(int a, int b, float c) {
		code = a; items = b; price = c;
	}
	void putdata() {
		std::cout << "Code :: " << code << "\n";
		std::cout << "Items :: " << items << "\n";
		std::cout << "Value :: " << price << "\n";
	}
	int getcode() { return code; }
	int getitems() { return items; }
	float getprice() { return price; }
	operator float() { return (items * price); }

	/* operator invent2(){
	invent2 temp;
	temp.code = code;
	temp.value = price * items;
	return temp;
}*/
};

class invent2 {
private:
	int code;
	float value;
public:
	invent2() {
		code = 0; value = 0;
	}
	invent2(int x, float y) {
		code = x;
		value = y;
	}
	void putdata() {
		std::cout << "Code :: " << code << "\n";
		std::cout << "Value :: " << value << std::endl;
	}
	invent2(invent1 p) {
		code = p.getcode();
		value = p.getitems() * p.getprice();
	}
};

int main() {
	invent1 s1(100, 5, 140.0);
	invent2 d1;

	//invent1 to float
	float total_value = s1;

	// invent1 to invent2
	d1 = s1;

	std::cout << "Product details - invent1 type" << std::endl;
	s1.putdata();

	std::cout << "\nStock value" << "\n";
	std::cout << "Value = " << total_value << "\n\n";

	std::cout << "Product details-invent2 type" << "\n";
	d1.putdata();
}

_____________________________________________________________________________________________

#include<iostream>

class complex {
private:
	float m_real;
	float m_imag;
public:
	complex(){ }
	complex(float a, float b) {
		m_real = a; m_imag = b;
	}
	complex operator+(complex);
	complex operator-(complex);
	complex operator*(complex);
	complex operator/(complex);
	void operator-();
	void operator+();
	void operator++();
	void operator--();

	void display() {
		std::cout << "Real = " << m_real << " Imag = " << m_imag << std::endl;
	}

};

complex complex :: operator+(complex c) {
	complex temp;
	temp.m_real = m_real + c.m_real;
	temp.m_imag = m_imag + c.m_imag;
	return(temp);
}

complex complex :: operator-(complex c) {
	complex temp;
	temp.m_real = m_real - c.m_real;
	temp.m_imag = m_imag - c.m_imag;
	return(temp);
}

complex complex :: operator*(complex c) {
	complex temp;
	temp.m_real = m_real * c.m_real;
	temp.m_imag = m_imag * c.m_imag;
	return(temp);
}

complex complex :: operator/(complex c) {
	complex temp;
	temp.m_real = m_real / c.m_real;
	temp.m_imag = m_imag / c.m_imag;
	return(temp);
}

void complex:: operator-() {
	m_real = -m_real;
	m_imag = -m_imag;
}

void complex:: operator+() {
	m_real = +m_real;
	m_imag = +m_imag;
}

void complex:: operator++() {
	m_real = m_real + 1;
	m_imag = m_imag + 1;
}

void complex:: operator--() {
	m_real = m_real - 1;
	m_imag = m_imag - 1;
}

int main() {
	
	complex c1, c2, c3;
	
	c1 = complex(10.0, 20.0);
	c2 = complex(20.0, 10.0);
	
	std::cout << "c1 :: " << std::endl;
	c1.display();
	std::cout << "c2 :: " << std::endl;
	c2.display();

	c3 = c1 + c2;

	std::cout << "c3 :: " << std::endl;
	c3.display();
	std::cout << "\n\n";

	std::cout << "c1 :: " << std::endl;
	c1.display();
	std::cout << "c2 :: " << std::endl;
	c2.display();

	c3 = c1 - c2;

	std::cout << "c3 :: " << std::endl;
	c3.display();
	std::cout << "\n\n";

	std::cout << "c1 :: " << std::endl;
	c1.display();
	std::cout << "c2 :: " << std::endl;
	c2.display();

	c3 = c1 / c2;

	std::cout << "c3 :: " << std::endl;
	c3.display();
	std::cout << "\n\n";

	std::cout << "c1 :: " << std::endl;
	c1.display();
	std::cout << "c2 :: " << std::endl;
	c2.display();

	c3 = c1 * c2;

	std::cout << "c3 :: " << std::endl;
	c3.display();
	std::cout << "\n\n";

	complex c4, c5;

	c4 = complex(2.5, 3.5);
	c5 = complex(-3.5, -2.5);

	std::cout << "c4 :: " << std::endl;
	c4.display();
	
	std::cout << "c5 :: " << std::endl;
	c5.display();
	std::cout << "\n\n";

	-c4;
	+c5;

	std::cout << "c4 :: " << std::endl;
	c4.display();

	std::cout << "c5 :: " << std::endl;
	c5.display();
	std::cout << "\n\n";

	++c4;
	--c5;

	std::cout << "c4 :: " << std::endl;
	c4.display();

	std::cout << "c5 :: " << std::endl;
	c5.display();
	std::cout << "\n\n";

	std::cin.get();
	return 0;
}

_______________________________________________________________________________________________________________________________


// Single Inheritance : Public 
#include<iostream>

class base {
private:
	int a = 1;
public:
	int b = 2;
	void show_a() {
		std::cout << "a = " << a << std::endl;
	}
};

class der: public base {
private:
	int c = 3;
public:
	void show_b() {
		std::cout << "b = " << b << std::endl;
	}
	void show_c() {
		std::cout << "c = " << c << std::endl;
	}
};

int main() {
	der c1;
	c1.show_a();
	c1.show_b();
	c1.show_c();
}

_________________________________________________________________________________________________________________________________

// Single Inheritance : Private

#include<iostream>

class B {
private:			// not inheritable
	int a;		
public:				// inheritable
	int b;
	void get_ab();
	int get_a(void);
	void show_a();
};

class D:private B {	// private derivation
private:
	int c;
public:
	void mul();
	void display();
};

void B::get_ab() {
	std::cout << "Enter values for a and b: ";
	std::cin >> a >> b;
}

int B::get_a() {
	return a;
}

void B::show_a() {
	std::cout << "a = " << a << "\n";
}

void D::mul() {
	get_ab();
	c = b * get_a();
}

void D::display() {
	show_a();
	std::cout << "b = " << b << "\n"
		<< "c = " << c << "\n\n";
}

int main() {
	D d;
	// d.get_ab(); wont work
	d.mul();
	// d.show_a(); wont work 
	d.display();
	// d.b = 20; wont work; b has become.private
	d.mul();
	d.display();

	std::cin.get();
	return 0;
}

_______________________________________________________________________________________________________________

// Multilevel Inheritance 

#include<iostream>

class student {
protected:
	int roll_number;
public:
	void get_number(int);
	void put_number(void);
};

void student::get_number(int a) {
	roll_number = a;
}

void student::put_number() {
	std::cout << "Roll Number: " << roll_number << "\n";
}

class test : public student{
protected:
	float sub1, sub2;
public:
	void get_marks(float, float);
	void put_marks(void);
};

void test::get_marks(float a, float b) {
	sub1 = a;
	sub2 = b;
}

void test::put_marks() {
	std::cout << "Marks in SUB1 = " << sub1 << "\n";
	std::cout << "Marks in SUB2 = " << sub2 << "\n";
}

class result : public test {
private:
	float total;
public:
	void display();
};

void result::display() {
	total = sub1 + sub2;
	put_number();
	put_marks();
	std::cout << "Total = " << total << std::endl;
}

int main() {
	result student1;
	student1.get_number(111);
	student1.get_marks(75.0, 59.5);
	student1.display();
}

___________________________________________________________________________________________________________________________

// Multiple Inheritance

#include<iostream>

class M {
protected:
	int m;
public:
	void get_m(int);
};

class N {
protected:
	int n;
public:
	void get_n(int);
};

class P :public M, public N {
public:
	void display();
};

void M::get_m(int x) {
	m = x;
}

void N::get_n(int y) {
	n = y;
}

void P::display() {
	std::cout << "m = " << m << "\n";
	std::cout << "n = " << n << "\n";
	std::cout << "m * n = " << m * n << "\n";
}

int main() {
	P p;
	p.get_m(10);
	p.get_n(20);
	p.display();

	std::cin.get();
	return 0;
}

_______________________________________________________________________________________________________________________

// Hybrid Inheritance Or Multilevel, Multiple Inheritance

#include<iostream>

class student {
protected:
	int roll_number;
public:
	void get_number(int a) {
		roll_number = a;
	}
	void put_number() {
		std::cout << "Roll No: " << roll_number << "\n";
	}
};

class test : public student {
protected:
	float part1, part2;
public:
	void get_marks(float x, float y) {
		part1 = x; part2 = y;
	}
	void put_marks(void) {
		std::cout << "Marks obtained: " << "\n"
			<< "Part1 = " << part1 << "\n"
			<< "Part2 = " << part2 << "\n";
	}
};

class sports {
protected:
	float score;
public:
	void get_score(float s) {
		score = s;
	}
	void put_score(void) {
		std::cout << "Sports wt :: " << score << "\n\n";
	}
};

class result : public test, public sports {
private:
	float total;
public:
	void display(void);
};

void result::display(void) {
	total = part1 + part2 + score;

	put_number();
	put_marks();
	put_score();

	std::cout << "Total Score: " << total << "\n";
}

int main() {
	result student_1;
	student_1.get_number(1234);
	student_1.get_marks(27.5, 33.0);
	student_1.get_score(6.0);
	student_1.display();

	std::cin.get();
}

_____________________________________________________________________________________________

// Constructors in Derived class

#include<iostream>

class alpha {
private:
	int x;
public:
	alpha(int i) {
		x = i;
		std::cout << "alpha initialized \n";
	}
	void show_x() {
		std::cout << "x = " << x << "\n";
	}
};

class beta {
private:
	float y;
public:
	beta(float j) {
		y = j;
		std::cout << "beta initialized \n";
	}
	void show_y(void) {
		std::cout << "y = " << y << "\n";
	}
};

class gamma : public beta, public alpha {
private:
	int m, n;
public:
	gamma(int a, float b, int c, int d) :
		alpha(a), beta(b) {
		m = c;
		n = d;
		std::cout << "gamma initialized \n";
	}
	void show_mn(void) {
		std::cout << "m = " << m << "\n"
			<< "n = " << n << "\n";
	 }
};

int main() {
	gamma g(5, 10.75, 20, 30);
	std::cout << std::endl;
	g.show_x();
	g.show_y();
	g.show_mn();

	return 0;
}

___________________________________________________________________________________________

// Initialization List in Constructors

#include<iostream>

class alpha {
private:
	int x;
public:
	alpha(int i) {
		x = i;
		std::cout << "\n alpha constructed";
	}
	void show_alpha(void) {
		std::cout << " x = " << x << "\n";
	}
};

class beta {
private:
	float p, q;
public:
	beta(float a, float b) : p(a), q(b + p) {
		std::cout << "\n beta constructed";
	}
	void show_beta() {
		std::cout << " p = " << p << "\n";
		std::cout << " q = " << q << "\n";
	}
};

class gamma : public beta, public alpha {
private:
	int u, v;
public:
	gamma(int a, int b, float c) : alpha(a * 2), beta(c, c), u(a) {
		v = b;
		std::cout << "\n gamma constructed";
	}
	void show_gamma(void) {
		std::cout << " u = " << u << "\n";
		std::cout << " v = " << v << "\n";
	}
};

int main() {
	gamma g(2, 4, 2.5);

	std::cout << "\n\n Display member values " << "\n\n";

	g.show_alpha();
	g.show_beta();
	g.show_gamma();

	std::cin.get();
	return 0;
}
_______________________________________________________________________________________________

// Exercise 8.1

#include<iostream>


class account {
private:
	std::string m_name;
	int m_accnum;
	std::string m_acctype;
public:
	account() { };
	/*account(std::string a, int b, std::string c) :
		m_name(a), m_accnum(b), m_acctype(c) { };*/
	void put_data(std::string a, int b, std::string c) {
		m_name = a; m_accnum = b; m_acctype = c;
	}
	void display() {
		std::cout << "Customer Name :: " << m_name << "\n"
			<< "Customer Account No. :: " << m_accnum << "\n"
			<< "Customer Account No. :: " << m_acctype << "\n\n\n";
	}
};

class cur_acct : public account{
private:
	//account a;
	float m_bal = 0;
public:
	cur_acct() {
		std::cout << "Creating a current accout..."
			<< "with xyz facilities." << "\n";
	}
	//cur_acct(std::string a, int b, std::string c) :
	//	a(a, b, c) {

	//}
	void show_bal() {
		std::cout << "Showing balance for the account below : " << "\n";
		display();
		std::cout << "Balance :: " << m_bal << "\n";
	}
	void deposit(int d) {
		std::cout << "Depositing money..." << "\n";
		m_bal += d;
		show_bal();
	}
	void withdraw(int w) {
		std::cout << "Withdrawing money..." << "\n";
		if (w < m_bal) {
			std::cout << "Withdrawl Completed of amount :: " << w << "\n";
			m_bal -= w;
			show_bal();
		}
		else {
			std::cout << "Insufficient funds !" << "\n";
		}
		if (m_bal) {
			penalty_check();
		}
	}
	void penalty_check() {
		if (m_bal < 1000) {
			std::cout << "A penalty is to be imposed balance is below 1000." << "\n";
			m_bal -= 500;
			show_bal();
		}
		else {
			std::cout << "No penalty to be imposed." << "\n";
		}
	}
};

class sav_acct : public account {
private:
	//account a;
	float m_bal = 0;
public:
	sav_acct() {
		std::cout << "Creating a savings accout..."
			<< "with xyz facilities." << "\n";
	}
	/*sav_acct(std::string a, int b, std::string c) :
		a(a, b, c) {

	}*/
	void show_bal() {
		std::cout << "Showing balance for the account below : " << "\n";
		display();
		std::cout << "Balance :: " << m_bal << "\n";
	}
	void deposit(int d) {
		std::cout << "Depositing money..." << "\n";
		m_bal += d;
		show_bal();
		std::cout << "After Compounding Interest on balance..." << "\n";
		interest();
	}
	void withdraw(int w) {
		std::cout << "Withdrawing money..." << "\n";
		if (w < m_bal) {
			std::cout << "Withdrawl Completed of amount :: " << w << "\n";
			m_bal -= w;
			show_bal();
		}
		else {
			std::cout << "Insufficient funds !" << "\n";
		}
	}
	void interest() {
		std::cout << "Computing and depositing the Compound Interest\n on the account balance" << "\n";
		float ci = m_bal * 0.20;
		m_bal += ci;
		show_bal();
	}
};

int main() {
	/*cur_acct c1;
	c1.put_data("Sohail", 1234, "Current");
	c1.display();
	c1.deposit(10000);
	c1.withdraw(9100);*/

	sav_acct c1;
	c1.put_data("Sohail", 1234, "Current");
	c1.display();
	c1.deposit(10000);
	c1.withdraw(9100);

	std::cin.get();
	return 0;
}

_________________________________________________________________________________________________

// Exercise 8.2

#include<iostream>


class account {
private:
	std::string m_name;
	int m_accnum;
	std::string m_acctype;
public:
	account(std::string a, int b, std::string c) :
		m_name(a), m_accnum(b), m_acctype(c) { };
	/*
	void put_data(std::string a, int b, std::string c) {
		m_name = a; m_accnum = b; m_acctype = c;
	}*/
	void display() {
		std::cout << "Customer Name :: " << m_name << "\n"
			<< "Customer Account No. :: " << m_accnum << "\n"
			<< "Customer Account No. :: " << m_acctype << "\n\n\n";
	}
};

class cur_acct : public account{
private:
	//account a;
	float m_bal = 0;
public:
	/*cur_acct() {
		std::cout << "Creating a current accout..."
			<< "with xyz facilities." << "\n";
	}*/
	cur_acct(std::string a, int b, std::string c) :
		account(a, b, c) {
	}
	void show_bal() {
		std::cout << "Showing balance for the account below : " << "\n";
		display();
		std::cout << "Balance :: " << m_bal << "\n";
	}
	void deposit(int d) {
		std::cout << "Depositing money..." << "\n";
		m_bal += d;
		show_bal();
	}
	void withdraw(int w) {
		std::cout << "Withdrawing money..." << "\n";
		if (w < m_bal) {
			std::cout << "Withdrawl Completed of amount :: " << w << "\n";
			m_bal -= w;
			show_bal();
		}
		else {
			std::cout << "Insufficient funds !" << "\n";
		}
		if (m_bal) {
			penalty_check();
		}
	}
	void penalty_check() {
		if (m_bal < 1000) {
			std::cout << "A penalty is to be imposed balance is below 1000." << "\n";
			m_bal -= 500;
			show_bal();
		}
		else {
			std::cout << "No penalty to be imposed." << "\n";
		}
	}
};

class sav_acct : public account {
private:
	//account a;
	float m_bal = 0;
public:
	/*sav_acct() {
		std::cout << "Creating a savings accout..."
			<< "with xyz facilities." << "\n";
	}*/
	sav_acct(std::string a, int b, std::string c) :
		account(a, b, c) {
	}
	void show_bal() {
		std::cout << "Showing balance for the account below : " << "\n";
		display();
		std::cout << "Balance :: " << m_bal << "\n";
	}
	void deposit(int d) {
		std::cout << "Depositing money..." << "\n";
		m_bal += d;
		show_bal();
		std::cout << "After Compounding Interest on balance..." << "\n";
		interest();
	}
	void withdraw(int w) {
		std::cout << "Withdrawing money..." << "\n";
		if (w < m_bal) {
			std::cout << "Withdrawl Completed of amount :: " << w << "\n";
			m_bal -= w;
			show_bal();
		}
		else {
			std::cout << "Insufficient funds !" << "\n";
		}
	}
	void interest() {
		std::cout << "Computing and depositing the Compound Interest\n on the account balance" << "\n";
		float ci = m_bal * 0.20;
		m_bal += ci;
		show_bal();
	}
};

int main() {
	/*cur_acct c1;
	c1.put_data("Sohail", 1234, "Current");
	c1.display();
	c1.deposit(10000);
	c1.withdraw(9100);*/

	sav_acct c1("Sohail", 1234, "Current");
	c1.display();
	c1.deposit(10000);
	c1.withdraw(9100);

	std::cin.get();
	return 0;
}

______________________________________________________________________________________________

// Exercise 8.4

#include<iostream>

class person {
private:
	std::string name;
	std::string code;
public:
	person(std::string n, std::string c) {
		name = n;
		code = c;
	}
	void display_person() {
		std::cout << "name :: " << name << "\n\n";
		std::cout << "code :: " << code << "\n\n";
	}
};
class account : virtual public person {
private:
	int pay;
public:
	account(int p, std::string n, std::string c):
		person(n,c){
		pay = p;
	}
	void display_account() {
		std::cout << "pay :: " << pay << "\n\n";
	}
};
class admin: virtual public person {
private:
	int exp;
public:
	admin(int e, std::string n, std::string c):
		person(n,c){
		exp = e;
	}
	void display_admin() {
		std::cout << "Experience in " << exp << " years" << "\n\n";
	}
};

class master : public account, public admin {
public:
	master(int p, int e, std::string n, std::string c) :
		person(n, c), account(p, n, c), admin(e, n, c){
	}
	void details() {
		display_account();
		display_admin();
		display_person();
	}
};

int main() {
	master m1(2000, 3, "carlos", "rambo");
	m1.details();
}

________________________________________________________________________________________________

// Example of using pointers

#include<iostream>

int main() {
	int a, * ptr1, ** ptr2;
	ptr1 = &a;
	ptr2 = &ptr1;
	std::cout << "The address of a : " << ptr1 << "\n\n";
	std::cout << "The address of ptr1 : " << ptr2 << "\n\n";
	std::cout << "After incrementing the address values : " << "\n\n";
	ptr1 += 2;
	std::cout << "The address of a : " << ptr1 << "\n\n";
	ptr2 += 2;
	std::cout << "The address of ptr1 : " << ptr2;

	std::cin.get();
	return 0;
 }

_______________________________________________________________________________________________

// Manipulation of Pointers 

#include<iostream>

int main() {
	int a = 10;
	int* ptr;
	
	ptr = &a;
	std::cout << "The value of a is : " << *ptr << "\n\n";
	*ptr = *ptr + a;
	std::cout << "The revised value of a is : " << a;

	std::cin.get();
}

_____________________________________________________________________________________________

// Arithmetic Operations on pointers

#include<iostream>

int main() {
	int num[] = { 56,75,22,18,90 };
	int* ptr;
	int i;
	std::cout << "The array values are :: \n";
	for (int i = 0; i < 5; i++)
		std::cout << num[i] << "\n";
	/*Allocating the base address of num to ptr*/

	ptr = num;

	std::cout << "ptr = " << ptr;
	/* Printing the value in the array */
	std::cout << "\nValue of ptr :: " << *ptr;
	std::cout << "\n";

	ptr++;
	std::cout << "\nValue of ptr++ :: " << *ptr;
	std::cout << "\n";
	
	ptr--;
	std::cout << "\nValue of ptr-- :: " << *ptr;
	std::cout << "\n";
	
	ptr = ptr + 2;
	std::cout << "\nValue of ptr+2 :: " << *ptr;
	std::cout << "\n";
	
	ptr = ptr - 1;
	std::cout << "\nValue of ptr-1 :: " << *ptr;
	std::cout << "\n";
	
	ptr+=3;
	std::cout << "\nValue of ptr+3 :: " << *ptr;
	std::cout << "\n";
	
	ptr-=3;
	std::cout << "\nValue of ptr-3  :: " << *ptr;
	std::cout << "\n";
	
	std::cin.get();
}

_____________________________________________________________________________________________________________________________

// Pointers with Arrays

#include<iostream>

int main() {
	int arr[10] = { 1,99,4,37,88,3,19,45,62,87 };
	int num, * ptr;

	// Assigning the base address of array arr to ptr

	ptr = arr;

	std::cout << "Enter the element to be searched :: ";
	std::cin >> num;

	for (int i = 0; i < 10; i++) {
		if (*ptr == num) {
			std::cout << "\n" << num << " is present in the array";
			break;
		}

		else if (i == 9)
			std::cout << "\n" << num << " is not present in the array";
		ptr++;
	}
	std::cin.get();
	return 0;
}

_________________________________________________________________________________________________________________________

// Arrays of Pointers

#include<iostream>
#include<cstring>
#include "Source.h"


int main() {
	int i = 0;
	const char *ptr[20] = {
		"books",
		"television",
		"computer",
		"sports"
		};
	char str[25];
	std::cout << "\n\n\n\nEnter your favourite leisure pursuit:: ";
	std::cin >> str;
	for (int i = 0; i < 4; i++) {
		if (!strcmp(str, *ptr[i])) {
			std::cout << "\n\nYour favourite pursuit " << " is available her" << std::endl;
			break;
		}
	}
	if (i == 4)
		std::cout << "\n\nYour favourite " << "not available here" << std::endl;
	std::cin.get();
	return 0;
}

________________________________________________________________________________________________________________________

// Searching a substring within a main string

#include<iostream>
#include<cstring>

int main() {
	
	char str[] = "\nC++ is better than C";
	int len = strlen(str);
	char* substr = new char[len];
	std::cout << "The main string is :: " << str;
	std::cout << "\n\nEnter the substring to be searched: ";
	std::cin >> substr;

	int len2 = strlen(substr);

	for (int i = 0; i < len; i++) {
		for (int j = 0; j < len2-1 ; j++) {
			if (str[i] == substr[j]) {
				std::cout << "True\n" << std::endl;
			}
			else
				std::cout << "false" << std::endl;
		}
	}

	/*
	for (i = 0; i < len; i++) {
		int k = i;
		for (int j = 0; j < len2; j++) {
			if (str[k] == substr[j]) {
				if (j == len2 - 1){
					std::cout << "\nThe substring is present in " 
						<< "the main string\n\n";
					exit(0);
				}
				k++;
			}
			else
				break;
		}
	
	if (i == len)
		std::cout << "\nThe substring is not present in the main string";
		*/
	return 0;
}

___________________________________________________________________________________________________________________________

// Pointers to Function

#include<iostream>

typedef void(*FunPtr)(int, int);

void Add(int i, int j) {
	std::cout << i << " + " << j << " = " << i + j;
}

void Sub(int i, int j) {
	std::cout << i << " - " << j << " = " << i - j;
}

int main() {
	FunPtr ptr;
	ptr = &Add;
	ptr(1, 2);
	std::cout << std::endl;
	ptr = &Sub;
	ptr(9, 6);

	return 0;
}

_________________________________________________________________________________________________________________________________

// Pointers to Objects

#include<iostream>

class item {
private:
	int code;
	float price;
public:
	void getdata(int a, float b) {
		code = a;
		price = b;
	}

	void show() {
		std::cout << "Code :: " << code << "\n";
		std::cout << "Price :: " << price << "\n";
	}
};

const int size = 2;

int main() {
	item* p = new item[size];
	item* d = p;
	int x, i;
	float y;
	for (i = 0; i < size; i++) {
		std::cout << "Input code and price for item " << i + 1;
		std::cin >> x >> y;
		p->getdata(x, y);
		p++;
	}

	for (i = 0; i < size; i++) {
		std::cout << "Item :: " << i + 1 << "\n";
		d->show();
		d++;
	}
	return 0;
}

_____________________________________________________________________________________________________________________________

// Array of Pointers to objects

#include<iostream>
#include<cstring>
#include<string.h>
#define __STDC_WANT_LIB_EXT1__ 1
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

class city {
protected:
	char* name;
	int len;
public:
	city() {
		len = 0;
		name = new char[len + 1];
	}
	void getname() {
		char* s;
		s = new char[30];
		std::cout << "Enter city name :: ";
		std::cin >> s;
		len = strlen(s);
		name = new char[len - 1];
		strcpy(name, s);
	}
	void printname() {
		std::cout << name << "\n";
	}
};

int main() {
	city* cptr[10]; // array of 10 pointers to cities

	int n = 1;
	int option;

	do {
		cptr[n] = new city; // create new city 
		cptr[n]->getname();
		n++;
		std::cout << "Do you want to enter one more name?\n";
		std::cout << "(Enter 1 for yes 0 for no) :: ";
		std::cin >> option;
	} while (option);
	
	std::cout << "\n\n";
	for (int i = 1; i <= n; i++) {
		cptr[i]->printname();
	}

	return 0;
}

______________________________________________________________________________________________

// this Pointer
#pragma warning(suppress : 4996)
#include<iostream>
#include<cstring>
#include<string.h>
#include<string>

class person {
private:
	char name[20];
	float age;
public:
	person(const char* s, float a) {
		strcpy(name, s);
		age = a;
	}
	person& greater(person& x) {
		if (x.age >= age)
			return x;
		else
			return *this;
	}
	void display() {
		std::cout << "Name: " << name << "\n"
			<< "Age: " << age << "\n";
	}
};

int main() {
	person p1("John", 37.50),
		p2("Ahmed", 29.0),
		p3("Hebber", 40.25);

	person p = p1.greater(p3);
	std::cout << "Elder person is: \n";
	p.display();

	p = p1.greater(p2);
	std::cout << "Elder person is: \n";
	p.display();

	return 0;
}

_____________________________________________________________________________________________

// Pointers to Derived Objects

#include<iostream>

class BC {
public:
	int b;
	void show() {
		std::cout << "b = " << b << "\n";
	}
};

class DC : public BC {
public:
	int d;
	void show() {
		std::cout << "b = " << b << "\n"
			<< "d = " << d << "\n";
	}
};

int main() {
	BC* bptr;	// base pointer
	BC base;
	bptr = &base; // base address

	bptr->b = 100;		// access BC via base pointer
	std::cout << "bptr points to base object \n";
	bptr->show();

	// derived class
	DC derived;
	bptr = &derived;		// address of derived object
	bptr->b = 200;			// access DC via base pointer

	/* bptr -> d = 300;*/ // wont work
	std::cout << "bptr now points to derived object \n";
	bptr->show();			// bptr now points to derived object

	/* accessing d using a pointer of type derived class DC */

	DC* dptr;
	dptr = &derived;
	dptr->d = 300;

	std::cout << "dptr is derived type pointer\n";
	dptr->show();

	std::cout << "using ((DC *)bptr)\n";
	((DC*)bptr)->d = 400;
	((DC*)bptr)->show();

	std::cin.get();
	return 0;
}

_________________________________________________________________________________________________

// Pure Virtual Function 

#include<iostream>

class Balagurusamy {	// base class
public:
	virtual void example() = 0;		// Denotes pure virtual function definition
};

class C : public Balagurusamy {		// derived class 1
public:
	void example() {
		std::cout << "C text Book written by Balagurusamy\n";
	}
};

class oops :public Balagurusamy {		// derived class 2
public:
	void example() {
		std::cout << "C++ text Book written by Balagurusamy\n";
	}
};

int main() {
	Balagurusamy* arra[2];

	C e1;
	oops e2;
	arra[0] = &e1;
	arra[1] = &e2;

	arra[0]->example();
	arra[1]->example();

	return 0;
}

________________________________________________________________________________________________

// Exercise 9.1

#include<iostream>

class shape {
protected:
	double i, j;
public:
	void get_data(double a, double b) {
		i = a;
		j = b;
	}
	virtual void display_area() { }
};

class triangle : public shape {
private:
	double area;
public:
	void display_area() {
		area = (i * j) * 1/2;
		std::cout << "Area of Triangle :: " << area << std::endl;
	}
};

class rectangle : public shape {
private:
	double area;
public:
	void display_area() {
		area = i * j;
		std::cout << "Area of Rectangle :: " << area << std::endl;
	}
};

int main() {

	triangle t1;
	t1.get_data(5.6, 2.4);

	rectangle r1;
	r1.get_data(5, 4);

	shape* list[2];
	list[0] = &t1;
	list[1] = &r1;

	std::cout << "Areas" << "\n\n";

	list[0]->display_area();
	list[1]->display_area();

	std::cin.get();
	return 0;
}

__________________________________________________________________________________________________

// Exercise 9.1

#include<iostream>

class shape {
protected:
	double i, j;
public:
	void get_data(double a, double b = 0) {
		i = a;
		j = b;
	}
	virtual void display_area() { }
};

class triangle : public shape {
private:
	double area;
public:
	void display_area() {
		area = (i * j) * 1/2;
		std::cout << "Area of Triangle :: " << area << std::endl;
	}
};

class rectangle : public shape {
private:
	double area;
public:
	void display_area() {
		area = i * j;
		std::cout << "Area of Rectangle :: " << area << std::endl;
	}
};

class circle : public shape {
private:
	double area;
public:
	void display_area() {
		area = 3.142 * (i * i);
		std::cout << "Area of Rectangle :: " << area << std::endl;
	}
};

int main() {

	triangle t1;
	t1.get_data(5.6, 2.4);

	rectangle r1;
	r1.get_data(5, 4);

	circle c1;
	c1.get_data(2);

	shape* list[3];
	list[0] = &t1;
	list[1] = &r1;
	list[2] = &c1;

	std::cout << "Areas" << "\n\n";

	list[0]->display_area();
	list[1]->display_area();
	list[2]->display_area();

	std::cin.get();
	return 0;
}

________________________________________________________________________________________________

// Exercise 9.1

#include<iostream>

class shape {
protected:
	double i, j;
public:
	void get_data(double a, double b = 0) {
		i = a;
		j = b;
	}
	virtual void display_area() {
		std::cout << "display_area() in base class !" << std::endl;
	}
};

class triangle : public shape {
private:
	double area;
public:
	void display_area() {
		area = (i * j) * 1/2;
		std::cout << "Area of Triangle :: " << area << std::endl;
	}
};

class rectangle : public shape {
private:
	double area;
public:
	void display_area() {
		area = i * j;
		std::cout << "Area of Rectangle :: " << area << std::endl;
	}
};

class circle : public shape {
private:
	double area;
public:
	/*void display_area() {
		area = 3.142 * (i * i);
		std::cout << "Area of Rectangle :: " << area << std::endl;
	}*/
};

int main() {

	triangle t1;
	t1.get_data(5.6, 2.4);

	rectangle r1;
	r1.get_data(5, 4);

	circle c1;
	c1.get_data(2);

	shape* list[3];
	list[0] = &t1;
	list[1] = &r1;
	list[2] = &c1;

	std::cout << "Areas" << "\n\n";

	list[0]->display_area();
	list[1]->display_area();
	list[2]->display_area();

	std::cin.get();
	return 0;
}

________________________________________________________________________________________________

#include<iostream>

int facrt(int n) {
		if ((n == 0) || (n == 1))
			return 1;
		else
			return n * facrt(n - 1);

}

int main() {
	int num = 5;
	int fact = 1;
	for (int i = 1; i <= num; i++)
		fact  *=  i;
	std::cout << fact << std::endl << facrt(num);

}

________________________________________________________________________________________________

// Pointers to Functions

#include<iostream>

typedef int (*FunPtr) (int);

int fact(int n) {
	if (n == 0 || n == 1) {
		return 1;
	}
	else
		return n * fact(n - 1);
}

int main() {
	FunPtr ptr;
	ptr =  &fact;
	//ptr(5);
	std::cout << ptr(5) << "\n";
}

_________________________________________________________________________________________________

// Displaying Strings with write()

#include<iostream>
#include<string>
#include<cstring>
#include<string.h>

int main() {

	const char* string1 = "C++ ";
	const char* string2 = "Programming";
	int m = strlen(string1);
	int n = strlen(string2);

	for (int i = 1; i < n; i++) {
		std::cout.write(string2, i);
		std::cout << "\n";
	}
	for (int i = n; i > 0; i--) {
		std::cout.write(string2, i);
		std::cout << "\n";
	}
	// concatenating strings
	std::cout.write(string1, m).write(string2, n);

	std::cout << "\n";

	// crossing the boundary
	std::cout.write(string1, 10);

	return 0;
}

_______________________________________________________________________________________________

// Specifying Field Size with width()

#include<iostream>

int main() {
	int items[4] = { 10, 8, 12, 15 };
	int cost[4] = { 75,100,60,99 };

	std::cout.width(5);
	std::cout << "Items";
	std::cout.width(8);
	std::cout << "COST";

	std::cout.width(15);
	std::cout << "TOTAL VALUE" << "\n";

	int sum = 0;

	for (int i = 0; i < 4; i++) {
		std::cout.width(5);
		std::cout << items[i];

		std::cout.width(8);
		std::cout << cost[i];

		int value = items[i] * cost[i];
		std::cout.width(15);
		std::cout << value << "\n";
		sum = sum + value;
	}
	std::cout << "\n Grand Total = ";

	std::cout.width(2);
	std::cout << sum << "\n";

	return 0;
}

______________________________________________________________________________________________

// Precision Setting with precision()

#include<iostream>
#include<cmath>

int main() {
	std::cout << "Precision set to 3 digits \n\n";
	std::cout.precision(3);

	std::cout.width(10);
	std::cout << "VALUE";
	std::cout.width(15);
	std::cout << "SQRT_OF_VALUE" << "\n";

	for (int n = 1; n <= 5; n++) {
		std::cout.width(8);
		std::cout << n;
		std::cout.width(13);
		std::cout << sqrt(n) << "\n";
	}
	std::cout << "\n Precision set to 5 digits \n\n";
	std::cout.precision(5);
	std::cout << " sqrt(10) = " << sqrt(10) << "\n\n";

	std::cout.precision(0);
	std::cout << " sqrt(10) = " << float(sqrt(10)) << " (default setting)\n";

	return 0;
}

_______________________________________________________________________________________________

// Width and Precision Manipulators

#include<iostream>

int main() {
	float pi = 22.0 / 7.0;
	int i;
	std::cout << "Value of PI: \n";
	for (i = 1; i <= 10; i++) {
		//std::cout.width(i + 1);
		std::cout.precision(i);
		std::cout << pi << "\n";
	}
	return 0;
}

_______________________________________________________________________________________________

// Padding with fill()

#include<iostream>

int main() {
	std::cout.fill('<');

	std::cout.precision(3);
	for (int n = 1; n <= 6; n++) {
		std::cout.width(5);
		std::cout << n;
		std::cout.width(10);
		std::cout << 1.0 / float(n) << "\n";
		if (n == 3)
			std::cout.fill('>');
	}
	std::cout << "\nPadding changed \n\n";
	std::cout.fill('#');	// fill() reset
	std::cout.width(15);
	std::cout << 12.345678 << "\n";
	return 0;
}

______________________________________________________________________________________________

// Manipulation of Flag and Bit Fields

#include<iostream>

int main() {
	int num;
	std::cout << "Enter an integer value: ";
	std::cin >> num;
	
	std::cout << "The Hexadecimal, Octal and Decimal representation of " << num << " is: ";
	
	std::cout.setf(std::ios::hex, std::ios::basefield);
	std::cout << num << ", ";

	std::cout.setf(std::ios::oct, std::ios::basefield);
	std::cout << num << " and ";

	std::cout.setf(std::ios::dec, std::ios::basefield);
	std::cout << num << " respectively\n\n";
	return 0;
}

______________________________________________________________________________________________

// Formatting with flags in setf()

#include<iostream>
#include<cmath>

int main() {
	std::cout.fill('*');
	std::cout.setf(std::ios::left, std::ios::adjustfield);
	std::cout.width(10);
	std::cout << "VALUE";
	std::cout.setf(std::ios::right, std::ios::adjustfield);
	std::cout.width(15);
	std::cout << "SQRT OF VALUE" << "\n";

	std::cout.fill('.');
	std::cout.precision(4);
	std::cout.setf(std::ios::showpoint);
	std::cout.setf(std::ios::showpos);
	std::cout.setf(std::ios::fixed, std::ios::floatfield);

	for (int n = 1; n <= 10; n++) {
		std::cout.setf(std::ios::internal, std::ios::adjustfield);
		std::cout.width(5);
		std::cout << n;

		std::cout.setf(std::ios::right, std::ios::adjustfield);
		std::cout.width(20);
		std::cout << sqrt(n) << "\n";
	}

	// floatfield changed
	std::cout.setf(std::ios::scientific, std::ios::floatfield);
	std::cout << "\nSQRT(100) = " << sqrt(100) << "\n";

	return 0;
}

________________________________________________________________________________________________

// Formatting with flags in setf()

#include<iostream>
#include<cmath>

int main() {
	std::cout.fill('*');
	std::cout.setf(std::ios::left, std::ios::adjustfield);
	std::cout.width(10);
	std::cout << "VALUE";
	std::cout.setf(std::ios::right, std::ios::adjustfield);
	std::cout.width(15);
	std::cout << "SQRT OF VALUE" << "\n";

	std::cout.fill('.');
	std::cout.precision(4);
	std::cout.setf(std::ios::showpoint);
	std::cout.setf(std::ios::showpos);
	std::cout.setf(std::ios::fixed, std::ios::floatfield);

	for (int n = 1; n <= 10; n++) {
		std::cout.setf(std::ios::internal, std::ios::adjustfield);
		std::cout.width(5);
		std::cout << n;

		std::cout.setf(std::ios::right, std::ios::adjustfield);
		std::cout.width(20);
		std::cout << sqrt(n) << "\n";
	}

	// floatfield changed
	std::cout.setf(std::ios::scientific, std::ios::floatfield);
	std::cout << "\nSQRT(100) = " << sqrt(100) << "\n";

	return 0;
}
______________________________________________________________________________________________

// Formatting with Manipulators

#include<iostream>
#include<iomanip>

int main() {
	std::cout.setf(std::ios::showpoint);

	std::cout << std::setw(5) << "n"
		<< std::setw(15) << "Inverse_of_n"
		<< std::setw(15) << "Sum_of_terms\n\n";

	double term, sum = 0;

	for (int n = 1; n <= 10; n++) {
		term = 1.0 / float(n);
		sum += term;

		std::cout << std::setw(5) << n
			<< std::setw(14) << std::setprecision(4)
			<< std::setiosflags(std::ios::scientific) << term
			<< std::setw(13) << std::resetiosflags(std::ios::scientific)
			<< sum << std::endl;
	}
	return 0;
}

___________________________________________________________________________________________________


// User-Defined Manipulators

#include<iostream>
#include<iomanip>

std::ostream& currency(std::ostream& output) {
	output << "$";
	return output;
}

std::ostream& form(std::ostream& output) {
	output.setf(std::ios::showpos);
	output.setf(std::ios::showpoint);
	output.fill('*');
	output.precision(2);
	output << std::setiosflags(std::ios::fixed)
		<< std::setw(9);
	return output;
}

int main() {
	std::cout << currency << form << 7864.5;

	return 0;
}

_________________________________________________________________________________________________

// Exercise 10.1

#include<iostream>
#include<iomanip>
#include<string>


int main() {
	std::string name[2] = { "Turbo C++", "C Primer" };
	std::string code[2] = { "1001", "905" };
	std::string cost[2] = { "250.95", "95.70" };

	std::cout << std::setw(14) << "NAME" 
		<< std::setw(24) << "CODE" 
		<< std::setw(24) << "COST" << "\n\n";

	std::cout << std::setprecision(2);

	for (int i = 0; i < 2; i++) {
		std::cout << std::setw(24) << std::setiosflags(std::ios::left)
			<< name[i] << std::setw(24) << std::setiosflags(std::ios::left)
			<< code[i];
		std::cout << std::setw(24) << std::resetiosflags(std::ios::left) << cost[i] << "\n\n";
	}

	std::system("pause>0");
	return 0;
}

________________________________________________________________________________________________

// Exercise 10.1

#include<iostream>
#include<iomanip>
#include<string>


int main() {
	std::string name[5] = { "Turbo C++", "C Primer", ".....", ".....", "....."};
	std::string code[5] = { "1001", "905", ".....", ".....", "....." };
	std::string cost[5] = { "250.95", "95.70", ".....", ".....", "....." };

	std::cout << std::setw(14) << "NAME" 
		<< std::setw(24) << "CODE" 
		<< std::setw(24) << "COST" << "\n\n";

	std::cout << std::setfill('-');
	std::cout << std::setprecision(2);

	for (int i = 0; i < 5; i++) {
		std::cout << std::setw(24) << std::setiosflags(std::ios::left)
			<< name[i] << std::setw(24) << std::setiosflags(std::ios::left)
			<< code[i];
		std::cout << std::setw(24) << std::resetiosflags(std::ios::left) << cost[i] << "\n\n";
	}

	std::system("pause>0");
	return 0;
}

______________________________________________________________________________________________

// Exercise 10.5

#include<iostream>
#include<iomanip>

int main() {
	float r = 22.0 / 7.0;

	std::cout << std::setprecision(20);
	std::cout << r;
}

_________________________________________________________________________________________________

// Working with files Single File

// Creating files with constructor function

#include<iostream>
#include<fstream>

int main() {
	std::ofstream outf("ITEM.txt"); // connect ITEM file to outf

	std::cout << "Enter item name : ";
	char name[30];
	std::cin >> name;		// get name from key board and

	outf << name << "\n";		// write to file ITEM

	std::cout << "Enter item cost: ";
	float cost;
	std::cin >> cost;		// get cost from key board and 

	outf << cost << "\n";		//write to file ITEM

	outf.close();		// connect ITEM file from outf

	std::ifstream inf("ITEM.txt");		// connect ITEM file from inf

	inf >> name;			// read name from file ITEM
	inf >> cost;			// read cost from file ITEM

	std::cout << "\n";
	std::cout << "Item name: " << name << "\n";
	std::cout << "Item cost: " << cost << "\n";

	inf.close();		// Disconnect ITEM from inf

	return 0;
}

_____________________________________________________________________________________________________________________

// Creating files with open() function

#include<iostream>
#include<fstream>

int main() {
	std::ofstream fout;		// Create Output stream
	fout.open("country");	// Connect "country" to it

	fout << "United States of American";
	fout << "\nUnited Kingdom";
	fout << "\nSouth Korea";
	fout.close();			// disconnect "country" and

	fout.open("capital");	// connect "capital"

	fout << "Washington";
	fout << "\nLondon";
	fout << "\nSeoul";

	fout.close();			// disconnect "capital"

	// Reading the files 
	const int N = 80;		// size of line
	char line[N];

	std::ifstream fin;		// create input stream
	fin.open("country");
	std::cout << "Contents of country file\n";

	while (fin) {
		fin.getline(line, N);	// read a line
		std::cout << line << std::endl;		// display it
	}

	fin.close();				// disconnect "country" and 
	fin.open("capital");		// connect "capital"

	std::cout << "\nContents of capital file\n";
	
	while (fin) {
		fin.getline(line, N);
		std::cout << line << std::endl;
	}

	fin.close();

	return 0;
}

__________________________________________________________________________________________________________________________

// Reading from Two Files Simultaneously 

// Reads the files created in Program 11.2

#include<iostream>
#include<fstream>
#include<cstdlib>

int main() {
	const int size = 80;
	char line[size];

	std::ifstream fin1, fin2;		//create two input streams
	fin1.open("country");
	fin2.open("capital");

	for (int i = 1; i <= 10; i++) {
		if (fin1.eof() != 0) {
			std::cout << "Exit from country \n";
			exit(1);
		}

		fin1.getline(line, size);
		std::cout << "Capital of " << line << "\n";
		
		if (fin2.eof() != 0) {
			std::cout << "Exit from capital\n";
			exit(1);
		}

		fin2.getline(line, size);
		std::cout << line << "\n";
	}
	system("cls");
	return 0;
}

_____________________________________________________________________________________________________________________

#include<iostream>
#include<fstream>
#include<cstring>

int main() {

	char string[80];

	std::cout << "Enter a string: ";
	std::cin >> string;

	int len = strlen(string);

	std::fstream file;
	std::cout << "\nOpening text file and storing data.\n\n";

	file.open("text", std::ios::in | std::ios::out);

	for (int i = 0; i < len; i++)
		file.put(string[i]);

	file.seekg(0);

	char ch;
	std::cout << "Reading the file contents: ";
	while (file) {
		file.get(ch);
		std::cout << ch;
	}

	return 0;
}

_________________________________________________________________________________________


#include<iostream>
#include<fstream>
#include<iomanip>

const char* filename = "BINARY";

int main() {
	float height[4] = { 175.5,153.0,167.25,160.70 };

	std::ofstream outfile;
	outfile.open(filename);

	outfile.write((char*)&height, sizeof(height));
	outfile.close();		//close the file for reading

	for (int i = 0; i < 4; i++) {
		height[i] = 0;
		std::cout << height[i] << "\n";
	}

	std::ifstream infile;
	infile.open(filename);

	float h[4];
	infile.read((char*)&h, sizeof(height));

	for (int i = 0; i < 4; i++) {
		//std::cout.setf(std::ios::showpoint);
		std::cout << std::setw(10) << std::setprecision(5) << h[i];
	}

	infile.close();

	return 0;


}

________________________________________________________________________________________________

// Reading and Writing Class Objects

#include<iostream>
#include<fstream>
#include<iomanip>

class Inventory {
private:
	char name[10];		// item name
	int code;			// item code
	float cost;			// cost of each item
public:
	void readdata();
	void writedata();
};

void Inventory::readdata() {		// read from keyboard
	std::cout << "Enter name: "; std::cin >> name;
	std::cout << "Enter code: "; std::cin >> code;
	std::cout << "Enter cost: "; std::cin >> cost;
}

void Inventory::writedata() {		// formatted display on screen
	std::cout.setf(std::ios::left, std::ios::adjustfield);
	std::cout << std::setw(10) << name
			  << std::setiosflags(std::ios::right)
			  << std::setw(10) << code
			  << std::setprecision(2)
			  << std::setw(10) << cost
			  << std::endl;
}

int main() {
	Inventory item[3]{};			// Declare array of 3 objects

	std::fstream file;			// Input and Output file
	
	file.open("STOCK.DAT", std::ios::in | std::ios::out);

	std::cout << "ENTER DETAILS FOR THREE ITEMS \n";
	for (int i = 0; i < 3; i++) {
		item[i].readdata();
		file.write((char*)&item[i], sizeof(item[i]));
	}
	file.seekg(0);			// reset to start
	
	std::cout << "\nOUTPUT\n\n";
	for (int i = 0; i < 3; i++) {
		file.read((char*)&item[i], sizeof(item[i]));
		item[i].writedata();
	}
	file.close();
	return 0;
}

______________________________________________________________________________________________

// File Updating :: Random Access

#include<iostream>
#include<fstream>
#include<iomanip>

class Inventory {
private:
	char name[10];
	int code;
	float cost;
public:
	void getdata() {
		std::cout << "Enter name: "; std::cin >> name;
		std::cout << "Enter code: "; std::cin >> code;
		std::cout << "Enter cost: "; std::cin >> cost;
	}
	void putdata(void) {
		std::cout.setf(std::ios::left, std::ios::adjustfield);
		std::cout << std::setw(10) << name
			<< std::setw(10) << code
			<< std::setprecision(5) << std::setw(10) << cost
			<< std::endl;
	}
};		// End of class definition

int main() {
	Inventory item;
	std::fstream inoutfile;		// input/output stream

	inoutfile.open("STOCK.DAT", std::ios::in);
	//inoutfile.open("STOCK.DAT", std::ios::out | std::ios::ate | std::ios::in | std::ios::binary);
	inoutfile.seekg(0, std::ios::beg);			//go to start
	std::cout << "CURRENT CONTENTS OF STOCK" << "\n";

	while (inoutfile.read((char*)&item, sizeof(item))) {
		item.putdata();
	}
	inoutfile.clear();		//turn of EOF flag
	inoutfile.close();
	/*>>>>>>>>>>>>>>>>>>>>>>> Add one more item <<<<<<<<<<<<<<<<<<*/

	std::cout << "\nADD AN ITEM\n";
	inoutfile.open("STOCK.DAT", std::ios::out | std::ios::ate | std::ios::binary);
	item.getdata();
	char ch;
	std::cin.get(ch);
	inoutfile.write((char*)&item, sizeof(item));
	inoutfile.close();

	// Display the appended file
	inoutfile.open("STOCK.DAT", std::ios::in);
	inoutfile.seekg(0);			// go to the start
	
	std::cout << "CONTENTS OF APPENDED FILE\n";

	while (inoutfile.read((char*)&item, sizeof(item))) {
		item.putdata();
	}

	// Find number of objects in the file
	int last = inoutfile.tellg();
	int n = last / sizeof(item);

	std::cout << "Number of objects in the file" << n << "\n";
	std::cout << "Total bytes in the file = " << last << "\n";
	inoutfile.close();
	/*>>>>>>>>>>>>>>>>> MODIFY THE DETAILS OF AN ITEM <<<<<<<<<<<<<<<<<*/

	inoutfile.open("STOCK.DAT", std::ios::out | std::ios::ate | std::ios::in | std::ios::binary);
	std::cout << "Enter object number to be updated \n";
	int object;
	std::cin >> object;

	std::cin.get(ch);
	int location = (object - 1) * sizeof(item);

	if (inoutfile.eof()) {
		inoutfile.clear();
	}

	inoutfile.seekp(location);
	std::cout << "Enter new values of the object \n";
	item.getdata();
	std::cin.get(ch);

	inoutfile.write((char*)&item, sizeof(item)) << std::flush;
	inoutfile.close();
	/*>>>>>>>>>>>>>>>>> SHOW UPDATED FILE <<<<<<<<<<<<<<<<<*/
	inoutfile.open("STOCK.DAT", std::ios::in);
	inoutfile.seekg(0);		//go to the start
	std::cout << "CONTENTS OF UPDATED FILE \n";

	while (inoutfile.read((char*)&item, sizeof(item))) {
		item.putdata();
	}
	inoutfile.close();

	return 0;
}		// End of main

_______________________________________________________________________________________________

// File Updating :: Random Access

#include<iostream>
#include<fstream>
#include<iomanip>

class Inventory {
private:
	char name[10];
	int code;
	float cost;
public:
	void getdata() {
		std::cout << "Enter name: "; std::cin >> name;
		std::cout << "Enter code: "; std::cin >> code;
		std::cout << "Enter cost: "; std::cin >> cost;
	}
	void putdata(void) {
		std::cout.setf(std::ios::left, std::ios::adjustfield);
		std::cout << std::setw(10) << name
			<< std::setw(10) << code
			<< std::setprecision(5) << std::setw(10) << cost
			<< std::endl;
	}
};		// End of class definition

int main() {
	Inventory item;
	std::fstream inoutfile;		// input/output stream

	inoutfile.open("STOCK.DAT", std::ios::in);
	//inoutfile.open("STOCK.DAT", std::ios::out | std::ios::ate | std::ios::in | std::ios::binary);
	inoutfile.seekg(0, std::ios::beg);			//go to start
	std::cout << "CURRENT CONTENTS OF STOCK" << "\n";

	while (inoutfile.read((char*)&item, sizeof(item))) {
		item.putdata();
	}
	inoutfile.clear();		//turn of EOF flag
	inoutfile.close();
	/*>>>>>>>>>>>>>>>>>>>>>>> Add one more item <<<<<<<<<<<<<<<<<<*/

	std::cout << "\nADD AN ITEM\n";
	inoutfile.open("STOCK.DAT", std::ios::out | std::ios::ate | std::ios::binary);
	item.getdata();
	char ch;
	std::cin.get(ch);
	inoutfile.write((char*)&item, sizeof(item));
	inoutfile.close();

	// Display the appended file
	inoutfile.open("STOCK.DAT", std::ios::in);
	inoutfile.seekg(0);			// go to the start
	
	std::cout << "CONTENTS OF APPENDED FILE\n";

	while (inoutfile.read((char*)&item, sizeof(item))) {
		item.putdata();
	}

	// Find number of objects in the file
	int last = inoutfile.tellg();
	int n = last / sizeof(item);

	std::cout << "Number of objects in the file" << n << "\n";
	std::cout << "Total bytes in the file = " << last << "\n";
	inoutfile.close();
	/*>>>>>>>>>>>>>>>>> MODIFY THE DETAILS OF AN ITEM <<<<<<<<<<<<<<<<<*/

	inoutfile.open("STOCK.DAT", std::ios::out | std::ios::ate | std::ios::in | std::ios::binary);
	std::cout << "Enter object number to be updated \n";
	int object;
	std::cin >> object;

	std::cin.get(ch);
	int location = (object - 1) * sizeof(item);

	if (inoutfile.eof()) {
		inoutfile.clear();
	}

	inoutfile.seekp(location);
	std::cout << "Enter new values of the object \n";
	item.getdata();
	std::cin.get(ch);

	inoutfile.write((char*)&item, sizeof(item)) << std::flush;
	inoutfile.close();
	/*>>>>>>>>>>>>>>>>> SHOW UPDATED FILE <<<<<<<<<<<<<<<<<*/
	inoutfile.open("STOCK.DAT", std::ios::in);
	inoutfile.seekg(0);		//go to the start
	std::cout << "CONTENTS OF UPDATED FILE \n";

	while (inoutfile.read((char*)&item, sizeof(item))) {
		item.putdata();
	}
	inoutfile.close();

	return 0;
}		// End of main

___________________________________________________________________________________________

//Command - Line Arguments

#include<iostream>
#include<fstream>
#include<cstdlib>

int main(int argc, char* argv[]) {
	int number[9] = { 11,22,33,44,55,66,77,88,99 };

	if (argc != 3) {
		std::cout << "argc = " << argc << "\n";
		std::cout << "Error in arguments \n";
		exit(1);
	}

	std::ofstream fout1, fout2;

	fout1.open(argv[1]);

	if (fout1.fail()) {
		std::cout << "Could not open the file"
			<< argv[1] << "\n";
		exit(1);
	}

	fout2.open(argv[2]);
	if (fout2.fail()) {
		std::cout << "Could not open the file "
			<< argv[2] << "\n";
		exit(1);
	}

	for (int i = 0; i < 9; i++) {
		if (number[i] % 2 == 0) {
			fout2 << number[i] << " ";	// write to EVEN file
		}
		else {
			fout1 << number[i] << " ";	// write to ODD file
		}
	}
	fout1.close();
	fout2.close();

	std::ifstream fin;
	char ch;
	for (int i = 1; i < argc; i++) {
		fin.open(argv[i]);
		std::cout << "Contents of " << argv[i] << "\n";
		do {
			fin.get(ch);	// read a value
			std::cout << ch;	// display it
		} while (fin);
		std::cout << "\n\n";
		fin.close();
	}
	return 0;
}

___________________________________________________________________________________________

// Exercise 11.2

#include<iostream>
#include<fstream>
#include<string>
#include<cstring>
#include<iomanip>

int main() {

	std::ifstream fin;
	fin.open("Phonebook.txt", std::ios::in);

	std::string name; int val;

	while (fin >> name >> val) {
		std::cout << std::left << std::setw(30) << name <<
			std::right << std::setw(12) << val << std::endl;
	}
}

_______________________________________________________________________________________________


// Exercise 11.5

#include<iostream>
#include<fstream>

int main() {
	char ch;
	int nlist1[5] = { 0, 1, 2, 3, 4 };
	int nlist2[5] = { 5, 6, 7, 8, 9 };

	std::ofstream sout1;
	sout1.open("Source1", std::ios::out);

	for (int i = 0; i < 5; i++) {
		sout1 << nlist1[i] << "\n";
	}
	sout1.close();

	std::ofstream sout2;
	sout2.open("Source2", std::ios::out);

	for (int i = 0; i < 5; i++) {
		sout2 << nlist2[i] << "\n";
	}
	sout2.close();
	std::ifstream sin1, sin2;
	sin1.open("Source1", std::ios::in);
	sin2.open("Source2", std::ios::in);

	std::ofstream tout;
	tout.open("Target", std::ios::out);

	while (sin1) {
		sin1.get(ch);
		tout << ch;
	}

	while (sin2) {
		sin2.get(ch);
		tout << ch;
	}
	tout.close();

	std::ifstream tin;
	tin.open("Target", std::ios::in);

	while (tin) {
		tin.get(ch);
		std::cout << ch;
	}
}