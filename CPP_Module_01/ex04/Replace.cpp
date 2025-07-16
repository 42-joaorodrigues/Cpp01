#include "Replace.hpp"
#include <fstream>
#include <iostream>

Replace::Replace(const std::string& filename, const std::string& s1, const std::string& s2) :
	_filename(filename), _s1(s1), _s2(s2){
}

bool Replace::process() const {
	std::ifstream infile(this->_filename.c_str());
	if (!infile.is_open()) {
		std::cerr << "Could not open input file" << std::endl;
		return false;
	}

	std::ofstream outfile((this->_filename + ".replace").c_str());
	if (!outfile.is_open()) {
		std::cerr << "Could not create output file" << std::endl;
		return (false);
	}

	std::string	line;
	while (std::getline(infile, line))
		outfile << _replaceLine(line) << std::endl;

	infile.close();
	outfile.close();
	return true;
}

std::string Replace::_replaceLine(const std::string& line) const {
	std::string	result;
	size_t		i = 0;
	size_t		pos;

	// keeps copying sections until s1 + s2 till there's no more s1 in line
	while ((pos = line.find(this->_s1, i)) != std::string::npos) {
		result += line.substr(i, pos - i);
		result += this->_s2;
		i = pos + this->_s1.length();
	}

	// copies the rest of line
	result += line.substr(i);

	return result;
}

