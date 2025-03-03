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
	void printInfo(int i)
	{
		std::cout << "Имя планеты: " << name  << " " << i << ", размер планеты: " << size
			<< ", высота планеты: " << height << ", ширина планеты: " << weight << std::endl;
	}
};


int main()
{
	srand(time(0));
	system("chcp 1251");
	std::vector<Planet> planet;
	for (int i = 0; i < 10; i++)
	{
		planet.push_back(Planet("Kolobojskaya", rand() % 10, rand() % 10, rand() % 10));
	}

	for (int i = 0; i < planet.size(); i++)
	{
		planet.at(i).printInfo(rand()% 100);
	}
	return 0;
}