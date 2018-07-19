#include<iostream>

using namespace std;

class Book{
	string title, author, genre;
	int pages, year;
	
	public:
		Book(){ title = "undefined"; year = 1900; pages = 0; genre = "undefined";};
		Book(string t, string a, string g, int p, int y){ title = t; author = a; genre = g; pages = p; year = y;} ;
		
		string getTitle(){ return title; }
		string getAuthor(){ return author; }
		string getGenre(){ return genre; }
		int getPages(){ return pages; }
		int getYear(){ return year; }
		
		void setTitle(string a) { title = a; }
		void setAuthor(string a){ author = a; }
		void setGenre(string a) { genre = a; }
		void setPages(int a){ pages = a; }
		void setYear(int a) { year = a; }
};

void printDeets(Book a);

int main(){
	Book b1("Lightning Thief", "Riordan", "Fantasy", 1200, 2009),
		b2("Alice in Wonderland", "Carrol" , "Fantasy", 2000, 1800),
		b3("Through the Looking Glass", "Carrol", "Fantasy", 2800, 1806);
		
		cout << "b1: "; printDeets(b1);
		cout << "\nb2: "; printDeets(b2);
		cout << "\nb3: "; printDeets(b3);
		
	
	
}

void printDeets(Book a){
	cout << "\n Title: " << a.getTitle();
	cout << "\n Author: " << a.getAuthor();
	cout << "\n Genre: " << a.getGenre();
	cout << "\n Pages: " << a.getPages();
	cout << "\n Year: " << a.getYear();
}