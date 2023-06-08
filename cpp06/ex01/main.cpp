#include "Serializer.hpp"

int main()
{
    Data data(1337);

    uintptr_t ser = Serializer::serialize(&data);

    Data * desr = Serializer::deserialize(ser);

    std::cout << "desr =  " << desr << std::endl;
    std::cout << "&data = " << &data << std::endl;
    (desr == &data) && std::cout << "they are equal\n";

    std::cout << "data.value= " << data.value << std::endl;
    std::cout << "desr->value = " << desr->value << std::endl;
}