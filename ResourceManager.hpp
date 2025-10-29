#pragma once

#include "Resource.hpp"

class ResourceManager
{
public:
    ResourceManager() // konstruktor domyslny
    {
        cos = new Resource();
    }

    double get() // metoda double get
    {
        return cos->get();
    }

    ResourceManager(const ResourceManager& i) // konstruktor kopiujacy
    {
        cos  = new Resource();
        *cos = *(i.cos); // kopiuje wartosc
    }

    ResourceManager& operator=(const ResourceManager& i) // kopiujacy operator przypisania
    {
        *cos = *i.cos;
        return *this; // gdy korzystamy z operatora przypisania korzystamy z return
    }

    ~ResourceManager() { delete cos; }

private:
    Resource* cos;
};
