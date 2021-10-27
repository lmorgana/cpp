
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	//assignation operator

	Dog* dog = new Dog();
	Dog* dog2 = new Dog();

	dog->add_to_my_brain("one");
	dog->add_to_my_brain("two");
	dog->add_to_my_brain("three");

	//assignation operator
	*dog2 = *dog;

	//print all dog's ideas
	dog->printf_ideas();

	dog->add_to_my_brain("four");

	dog->printf_ideas();
	dog2->printf_ideas();

	delete	dog;
	delete	dog2;

	//copy constructor
//	Dog* dog = new Dog();
//
//	dog->add_to_my_brain("one");
//	dog->add_to_my_brain("two");
//	dog->add_to_my_brain("three");
//
//	//assignation operator
//	Dog* dog2 = new Dog(*dog);
//
//	//print all dog's ideas
//	dog->printf_ideas();
//
//	dog->add_to_my_brain("four");
//
//	dog->printf_ideas();
//	dog2->printf_ideas();
//
//	delete	dog;
//	delete	dog2;

//	WrongCat* wCat = new WrongCat();
//	WrongCat* wCat1 = new WrongCat();
//
//	wCat->add_to_my_brain("one");
//	wCat->add_to_my_brain("two");
//	wCat->add_to_my_brain("three");
//
//	wCat1 = wCat;
//
//	wCat->add_to_my_brain("four");
//
//	wCat->printf_ideas();
//	wCat1->printf_ideas();

	return (0);
}
