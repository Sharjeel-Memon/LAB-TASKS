
#include <iostream>
#include <string>

using namespace std;

class LibraryBook {
	private :
		int availableCopies;
	public  :
		string title;
		string author;
		string ISBN;
		
	void setCopies(int copies){
		 availableCopies = copies;
}
int getCopies() {
	return availableCopies;
}
void displayDetails() {
	cout<<"    Book's Title: "<< title << endl;
	cout<<"   Book's Author: "<< author << endl;
	cout<<"            ISBN: "<< ISBN << endl;
	cout<<"available Copies: "<< availableCopies <<endl;
	
	}	
};

int main() {
	LibraryBook book;
	cout<<"\nEnter Books' Title:" << endl;
	getline(cin, book.title);
	
	cout<<"\nEnter Books' Author:" << endl;
	getline(cin, book.author);
	
	cout<<"\nEnter Books' ISBN:" << endl;
	getline(cin, book.ISBN);
	
	int copies;
	cout<<"\nEnter Books' Available Copies:" << endl;
	cin >> copies;
	book.setCopies(copies);
	
	cout<<"\nDetail's Ended!"<< endl;
	cout<<"\nPrinting Details:"<< endl;
	book.displayDetails();
	return 0;
}

