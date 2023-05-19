#ifndef HASH_H
#define HASH_H
#include <string>
class Hash
{
private:
public:
    Hash();

    std::string verificarHashMaq1(std::string senha);
    std::string verificarHashMaq2(std::string senha);
    std::string verificarHashMaq3(std::string senha);
    std::string verificarHashMaq4(std::string senha);
};


#endif // HASH_H
