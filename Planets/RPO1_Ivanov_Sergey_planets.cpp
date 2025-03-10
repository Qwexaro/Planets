#include <iostream>
#include <vector>
#include <ctime>

class Planet 
{
	std::string name;
	double size, height, weight;

public:
	
	Planet()
	{
		name = "unknow"; size = -1; height = -1; weight = -1;
	}
	Planet(std::string _name, double _size, double _height, double _weight)
	{
		this->name = _name;
		this->size = _size;
		this->height = _height;
		this->weight = _weight;
	}
	void printInfo()
	{
		std::cout << "»м€ планеты: " << getName() << ", размер планеты: " << getSize()
			<< ", высота планеты: " << getHeight() << ", ширина планеты: " << getWeight() << std::endl;
	}


	std::string getName() const 
	{
		return name;
	}

	double getSize() const
	{
		return size;
	}

	double getHeight() const
	{
		return height;
	}

	double getWeight() const
	{
		return weight;
	}

	Planet& setName(std::string _name)
	{
		name = _name; return *this;
	}

	Planet& setSize(double _size)
	{
		if (_size > 0 && _size < 1000) { size = _size; }return *this;
	}

	Planet& setHeight(double _height)
	{
		if (_height > 0 && _height < 1000) { height = _height; }return *this;
	}

	Planet& setWeight(double _weight)
	{
		if (_weight > 0 && _weight < 1000) { weight = _weight; } return *this;
	}

};


void planetSort(std::vector<Planet>& planets)
{
	for (int i = 0; i < planets.size() - 1; i++)
	{
		for (int j = 0; j < planets.size() - i - 1; j++)
		{
			if (planets.at(j).getWeight() > planets.at(j + 1).getWeight())
			{
				std::swap(planets.at(j), planets.at(j + 1));
			}
		}
	}
}

int main()
{
	srand(time(0));
	system("chcp 1251");
	std::vector<Planet> planet;


	std::cout << std::endl;


	for (int i = 0; i < 9; i++)
	{
		planet.push_back(Planet("Kolobojskaya",  rand() % 10, rand() % 10, rand() % 10));
	}

	std::cout << "ƒо сортировки по ширине:" << std::endl;

	for (int i = 0; i < planet.size(); i++)
	{
		planet.at(i).printInfo();
	}

	planetSort(planet);


	for (int i = 0; i < 100; i++) std::cout << "-"; //распечатка границы

	std::cout << std::endl;

	std::cout << "ѕосле сортировки по ширине:" << std::endl;

	for (int i = 0; i < planet.size(); i++)
	{
		planet.at(i).printInfo();
	}
	return 0;
}