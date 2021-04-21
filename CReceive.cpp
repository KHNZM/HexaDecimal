#include <iostream>
#include <String>
#include <string.h>

#include "CReceive.h"

void CReceive::SetString()
{
	std::cout << "16i”‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B" << std::endl;
	std::getline(std::cin, m_str);
}
std::string CReceive::GetString()
{
	return m_str;
}