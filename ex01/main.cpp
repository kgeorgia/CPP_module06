#include <iostream>

typedef struct s_Data
{
	int			age;
	std::string name;
}	Data;

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main( void )
{
	Data data = {23, "Kirill"};
	uintptr_t uin;
	Data *after_cast;

	std::cout << "Before: " << data.age << " " << data.name << std::endl;
	uin = serialize(&data);
	std::cout << "uinptr: " << uin << std::endl;
	after_cast = deserialize(uin);
	std::cout << "After: " << after_cast->age << " " << after_cast->name << std::endl;

	return (0);
}