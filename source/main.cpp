#include <iostream>
#include "csound.hpp"
#include <memory>

int main()
{
    auto c = csoundCreate(nullptr);
    auto csound = std::make_unique<Csound>(c);
    std::cout << csound->GetVersion() << "\n";
    return 0;
}
