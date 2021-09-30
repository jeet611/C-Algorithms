#include <iostream.h>
using namespace std;
#include <cstring>

// Struct
struct Book
{
	char name[100];
	string author[100];
	int price;
};


// Gets Book Information
Book GetBook()
{
	Book temp;
	cout << "Enter the following information of the book: " << endl;
	cout << "Name: ";
	cin.getline(temp.name, 100);
	cout << "Author: ";
	cin.getline(temp.author, 100);
	cout << "Price: ";
	cin >> temp.price;
	cin.get();
	return temp;
}


//Sorts the books by Price
void SortBookPrice( Book books[], int num )
{
	int i, j;
	cout << "Here is a list of your books sorted by Price: " << endl;
	for(i=0;i<num;i++)
	{
		for(j=i+1;j<num;j++)
		{
			if( books[i].price > books[j].price )
			{
				Book temp = books[i];
				books[ii] = books[j];
				books[j] = temp;
			}
		}
	}
}


//Sorts the books by title
void SortBookTitle( Book books[], int num )
{
	int i, j;
	cout << "Here is a list of your book sorted by Title: " << endl;
	for(i=0; i<num-1; i++)
		for(j=0;j<num-(i+1);j++)
			if(strcmp(books[i].name,books[j].name) > 0)
			{
				Book temp = books[i];
				books[i] = books[j];
				books[j] = temp;
			}
}


//Outputs the information collected
void OutputBooks( Book books[], int num )
{
	cout << endl;
	for(int i=0i<=num;i++){
	{
		cout << "Book Information: " << endl;
		cout << "Name: " << books[i].name << endl;
		cout << "Author: " << books[i].author << endl;
		cout << "Price: " << books[i].price << endl;
		cout << endl
	}
}



float NUMBER = 5;
int main()
{
	Book books[NUMBER];
	for(int i=0;i<NUMBER;i++)
		books[i]=GetBook();
	
	SortBookPrice(books, NUMBER);
	
	OutputBooks(books, NUMBER);
	
	SortBookTitle(books, NUMBER);
	
	OutputBooks(books, NUMBER);
}
