#include<iostream>
using namespace std;

class Item {
public: 
	Item(int value, Item *ItemToLinkTo = NULL); 
	int  value() { return m_value; } 
	void next(Item *link) { m_next = link; } 
	Item* next() { return m_next; }
private:
	int m_value;   
	Item  *m_next;
};

class IntList {
public:
	IntList() : m_front(NULL), m_end(NULL), m_size(0) {}
	~IntList() { remove_all(); }
	Item* front() { return m_front; }
	void reverse();
	void insert_front(int value);  
	void insert_end(int value); 
	void insert_order(int value); 
	void remove_front(); 
	void remove_all();    
	int numb_of_divisible(int z); 
	void display();
	void display_divisible(int x);
private:
	void bump_up() { ++m_size; } 
	void bump_down() { --m_size; } 
	Item *m_front;
	Item *m_end; 
	int m_size; 
};


Item::Item(int value, Item *item) : m_value(value)
{
	if (!item)
		m_next = NULL; 
	else
	{
		m_next = item->m_next;
		item->m_next = this;
	}
}

void IntList::insert_end(int value)
{
	if (!m_end)    
		m_end = m_front = new Item(value); 
	else
		m_end = new Item(value, m_end); 
	bump_up();
}

void IntList::insert_front(int value)
{
	Item *ptr = new Item(value); 
	if (!m_front)       
		m_front = m_end = ptr; 
	else             
	{
		ptr->next(m_front);  
		m_front = ptr;
	}
	bump_up();
}

void IntList::insert_order(int value)
{
	Item *ptr = new Item(value); 
	if (!m_front)      
		m_front = m_end = ptr; 
	else              
	{
		Item *pred = NULL, *po = m_front;
		enum { HLADAJ, UKONCI } stav = HLADAJ; 
		while ((stav == HLADAJ) && (po != 0))
			if (po->value() >= value)
				stav = UKONCI;    
			else  
			{
				pred = po;  
				po = po->next();    
			}
		if (pred == NULL) 
		{
			m_front = ptr;
			ptr->next(po);
		}
		else if (po == NULL)    
		{
			m_end->next(ptr);
			ptr->next(NULL);
			m_end = ptr;
		}
		else       
		{                  
			pred->next(ptr);
			ptr->next(po);
		}
	}
	bump_up();
}


void IntList::remove_front()
{
	if (m_front)
	{
		Item *ptr = m_front; 
		m_front = m_front->next();
		bump_down();
		delete ptr; 
	}
}

void IntList::remove_all()
{
	while (m_front)
		remove_front();
	m_size = 0;
	m_front = m_end = NULL;
}

int IntList::numb_of_divisible(int z)
{
	int numb_divis = 0;
	Item *ptr = m_front;
	while (ptr)
	{
		if (ptr->value()%z == 0)
			numb_divis++;
		ptr = ptr->next();
	}
	return numb_divis;
}
// definicia clenskej funkcie, ktora zobrazi datove hodnoty prvkov zoznamu na konzolu
void IntList::display()
{
	cout << "  (velkost " << m_size << ") ( ";
	Item *ptr = m_front;
	while (ptr)
	{
		cout << ptr->value() << " ";
		ptr = ptr->next();
	}
	cout << ")\n";
}

void IntList::display_divisible(int x)
{
	cout << "  (pocet " << numb_of_divisible(x) << ") ( ";
	Item *ptr = m_front;
	while (ptr)
	{
		if (ptr->value()%x == 0)
		cout << ptr->value() << " ";
		ptr = ptr->next();
	}
	cout << ")\n";
}

void IntList::reverse()
{
	int i = 0;
	Item *ptr = m_front, *posledny = m_end, *predposledny;
	while (m_size>i)
	{
		ptr = m_front;
		while (ptr != posledny)
		{
			if (ptr->next() == posledny)predposledny = ptr;
			ptr = ptr->next();
		}

		posledny->next(predposledny);
		posledny = predposledny;
		i++;
	}
	posledny->next(NULL);
	m_front = m_end;
	m_end = posledny;

}



int main()
{
	int n, a, delitel;
	IntList l1;
	cout << "Vlozte velkost zoznamu Z1, ktory chcete vytvarat: ";
	cin >> n;
	cout << "\nvlozte " << n << " prvkov, ktore budu usporiadane vlozene do zoznamu Z1: ";
	for (int i = 0; i < n; i++)
	{
		cin >> a; 
		l1.insert_order(a);
	}
	cout << "\nZoznam Z1 = ";
	l1.display();

	cout << "\n\nAkym cislom delitelne prvky zoznamu Z1 chcete najst a zobrazit?\n(pre ukoncenie vlozte 0): ";
	cin >> delitel;
	while (delitel != 0)
	{
		cout << "\nprvky zoznamu delitelne "<<delitel<<": ";
		l1.display_divisible(delitel);
		cout << "\nAkym cislom delitelne prvky zoznamu Z1 chcete najst a zobrazit?\n(pre ukoncenie vlozte 0): ";
		cin >> delitel;
	}
	
	cout << "\n\nReverzovany(otoceny) zoznam Z1 : " << endl;
	l1.reverse();
	l1.display();
	return 0;
}
