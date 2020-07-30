#ifndef DATE_H
#define DATE_H

#include <string>
#include <ostream>
#include <istream>
#include <iostream>
#include <fstream>
#include <unordered_map>
#include <map>
#include <algorithm>
#include <ctime>
#include <vector>


class date {
private:
	//режим дебага, нужно ли выводить об ошибках
	bool _debug = false;
	bool _existDate = false; //есть ли информация о дате
	int _day, //день
	_mes, //месяц
	_god; //год

public:

	date (); //стандартный конструктор
	date (int, int, int); //если задается дата и время
	date (std::string*); //если на вход подается указатель на строку
	date (std::string); //если на вход подается строка
	date (const date&); //если на вход подается date
	date (std::vector<int>); //если на вход подается вектор из 3 чисел
	date (const char[11]); //если на вход подается строка вида "ДД.ММ.ГГГГ"

	void getDate (std::string&); //возвращает дату ввиде строки по ссылке
	std::string getDate (); //возвращает дату в виде строки

	void setDateLocal (); //устанавливает нынешнюю дату
	void setDate (std::string*); //устанавливает дату, если на вход подается дата в виде указателя на строку
	void setDate (std::string); //устанавливаю дату, если на вход подается дата в виде строки
	void setDate (int, int, int); //устанавливаю дату, если дата поступает в виде 3 чисел

	date& operator++ (); //переопределяю инкремент (если ++ стоит слева)
	date& operator-- (); //переопределяю декремент (если -- стоит слева)

	date operator++ (int); //переопределяю инкремент (если ++ стоит справа)
	date operator-- (int); //переопределяю декремент (если -- стоит справа)


	//переопределяю оператор присваивания
	date operator= (date); 

	//геттеры
	bool getDebugUse ();
	bool getExist ();
	int getDay ();
	int getMonth ();
	int getYear ();


	//нужно ли выводить информацию об ошибках
	void useDebug (bool);

	//чищу объект
	void clear ();


	//даю доступ к private
	friend bool operator== (const date&, const date&);
	friend bool operator!= (const date&, const date&);
	friend bool operator> (const date&, const date&);
	friend bool operator< (const date&, const date&);
	friend bool operator>= (const date&, const date&);
	friend bool operator<= (const date&, const date&);
};

//переопределяю операторы сравнения
bool operator== (const date&, const date&);
bool operator!= (const date&, const date&);
bool operator> (const date&, const date&);
bool operator< (const date&, const date&);
bool operator>= (const date&, const date&);
bool operator<= (const date&, const date&);

//сеттер для переменной _all_debug

void _date_set_all_debug (bool);

#endif //DATE_H