#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <string>

class Replace {
private:
	std::string	_filename;
	std::string	_s1;
	std::string	_s2;

	std::string	_replaceLine(const std::string& line) const;
public:
	Replace(const std::string& filename, const std::string& s1, const std::string& s2);

	bool	process() const;
};

#endif //REPLACE_HPP
