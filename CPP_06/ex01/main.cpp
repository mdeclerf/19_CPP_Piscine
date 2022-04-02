#include <string>
#include <iostream>

// You must create a valid data structure.
// Take a Data address use serialize on it.
// Send the return value in deserialize.
// Check if the return value is equal to the first pointer. Do not forget to include the Data structure you used.

// uintptr_t : "an unsigned integer type with the property that any valid pointer to 
//void can be converted to this type, then converted back to pointer to 
//void, and the result will compare equal to the original pointer"

//reinterpret_cast : It is used to convert a pointer of some data type into a pointer of another data type, 
//even if the the data types before and after conversion are different.
//It does not check if the pointer type and data pointed by the pointer is same or not.

struct Data
{
	char a;
	int b;
};

uintptr_t serialize(Data* ptr) // This function will return the parameter in an integer type.
{
	uintptr_t ret;
	ret = reinterpret_cast<long>(ptr);
	return (ret);
}

Data* deserialize(uintptr_t raw) // This function will return the raw data you created using "serialize" to a Data structure.
{
	Data* ret;
	ret = reinterpret_cast<Data *>(raw);
	return (ret);
}

int main(void)
{
	Data data;
	data.a = 'a';
	data.b = 666;
	
	Data *d = &data;
	uintptr_t ret;
	std::cout << "Adress of d before serialize: " << &d << std::endl;
	std::cout << "Content of d before serialize: " << d->a << " " << d->b << std::endl;
	ret = serialize(d);
	d = deserialize(ret);
	std::cout << "Adress of d after deserialize: " << &d << std::endl;
	std::cout << "Content of d before serialize: " << d->a << " " << d->b << std::endl;
}
