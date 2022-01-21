#include <iostream>
using namespace std;

#include "Gribs_collection.h"


int main()
{
	setlocale(LC_ALL, "rus");
	
	
	Gribs_collection new_collection;
	int ch;
		do
		{
			cout << " Меню : \n"
				<< " 1 - Добавить гриб в список \n"
				<< " 2 - Удалить гриб из списка \n"
				<< " 3 - Печать всего списка \n"
				<< " 0 - Выход \n"
				<< " Ваш выбор : ";
				cin >> ch;
				switch (ch)
				{
				case 1:
				{
					int f;
					cout << " В какой отдел добавить гриб? \n 1 - Грибоподобные \n 2 - Настоящие грибы \n Ваш выбор: ";
					cin >> f;
					if (f == 1)
					{
						string name;
						cout << " Введите название ";
						cin >> name;
						float diametr; bool plazmodiy; int zhgut;
						cout << " Введите диаметр ";
						cin >> diametr;
						cout << " Наличие плазмодия ?\n 1 - есть, 0 - нет \n Введите:";
						cin >> plazmodiy;
						cout << " Кол - во жгутов:";
						cin >> zhgut;
						Grib* exampl1 = new Oomycetes(name,diametr, plazmodiy, zhgut);
						new_collection.addToList(exampl1);
					}
					else
					{
						int c;
						cout << " Выберите класс: \n "
							<< " 1 - Аскомицеты \n "
							<< " 2 - Дейтеромицеты \n "
							<< " 3 - Базидиомицеты \n "
							<< " 4 - Зигомицеты \n "
							<< "Ваш выбор : ";
						cin >> c;
						float H; float D; int Chr; int eat;
						string name;
						cout << " Введите название ";
						cin >> name;
						cout << " Введите высоту ножки : ";
						cin >> H;
						cout << " Введите диаметр ";
						cin >> D;
						cout << " Введите количество хромосом: ";
						cin >> Chr;
						cout << " Сьедобный или нет ?\n 1 - да, 0 - нет \n Введите: ";
						cin >> eat;
						cin.ignore();
						if (c == 1)
						{
							int grani;
							cout << " Введите количество граней: ";
							cin >> grani;

							Grib* exampl = new Ascomycetes(name,H, D, Chr, eat, grani);
							new_collection.addToList(exampl);
						}
						else if (c == 2)
						{
							int sumka;
							cout << " Есть способность образования плодотворной сумки ?\n 1 - да, 0 - нет \n Введите: ";
							cin >> sumka;
							Grib* exampl2 = new Deuteromycetes(name,D, Chr, eat, sumka);
							new_collection.addToList(exampl2);
						}
						else if (c == 3)
						{
							int yadro;
							cout << " Введите количество гаплоидных ядер: ";
							cin >> yadro;
							Grib* exampl3 = new Basidiomycota(name,H, D, Chr, eat, yadro);
							new_collection.addToList(exampl3);

						}
						else
						{
							int miceliy;
							cout << " Введите толщину мицелия: ";
							cin >> miceliy;
							Grib* exampl4 = new Zygomycota(name,H, D, Chr, eat, miceliy);
							new_collection.addToList(exampl4);

						}
					}
					break;
				}
				case 2:
				{
					string name;
					cout << " Введите название для удаления: ";
					cin >> name;
				    new_collection.removeFromList(name);
					cout << " Удалено !";
					break;
				}
				case 3:
				{
					new_collection.showList();
					break;
				}
				}
		} while (ch != 0);



	
}

