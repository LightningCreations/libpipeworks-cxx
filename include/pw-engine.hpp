#ifndef PIPEWORKS_PW_ENGINE_HPP_2019_12_15_07_37
#define PIPEWORKS_PW_ENGINE_HPP_2019_12_15_07_37
namespace pipeworks {
    class Pipeworks {
        Pipeworks();
        ~Pipeworks();
        Pipeworks(const Pipeworks&)=delete;
        Pipeworks(Pipeworks&&)=delete;
        Pipeworks& operator=(const Pipeworks&)=delete;
        Pipeworks& operator=(Pipeworks&&)=delete;
    };
}
#endif
