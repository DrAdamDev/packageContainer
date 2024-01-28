#include <string>
#include <iostream>

class Package {

private:
	static int globalAdditions;
	static constexpr size_t mb = 1024 * 1024;
	char payload[mb] = {};
	const std::string ID;
	// Incremented as necessary when data is added/removed
	const long long int size;

public:
	Package(std::string ID, long long int size) : ID(ID), size(size) {

		++globalAdditions;		
	}
};
