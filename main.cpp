#include <iostream>
using namespace std;

class Item
{
protected:
  int id;
  string title;
  string author;

public:
  Item(int i, string t, string a) : id(i), title(t), author(a) {}
};

class BooK : public Item
{
private:
  string genre;
  int pageCount;

public:
  BooK(int i, string t, string a, string g, int pC) : Item(i, t, a), genre(g), pageCount(pC) {}
  void dis()
  {
    cout << "ID: " << id << endl
         << "Title: " << title << endl
         << "Author: " << author << endl
         << "Genre: " << genre << endl
         << "Page count: " << pageCount << endl;
  }
};

class Magazine : public Item
{
private:
  int issueNumber;
  string month;

public:
  Magazine(int i, string t, string a, int iN, string m) : Item(i, t, a), issueNumber(iN), month(m) {}
  void dis()
  {
    cout << "ID: " << id << endl
         << "Title: " << title << endl
         << "Author: " << author << endl
         << "Issue: " << issueNumber << endl
         << "Month: " << month << endl;
  }
};

int main()
{
  BooK b(1, "C++ Basics", "Bjarne", "Programming", 320);
  b.dis();
  Magazine m(2, "AI Weekly", "Jane Doe", 42, "May");
  m.dis();
  return 0;
}