#include "Register.h"


Register::Register(size_t numCompanies) : companiesArray(new Company[numCompanies]), numAdded(0) {}
	

void Register::add(const Company& c) {
	companiesArray[numAdded] = c;
	numAdded++;
}

Company Register::get(int id) const {
	for (size_t i = 0; i < numAdded; i++)
	{
		if (companiesArray[i].getId() == id)
		{
			return companiesArray[i];
		}
	}
	return Company();
}

Register::~Register() { delete[] companiesArray; }