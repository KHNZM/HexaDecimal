#include <iostream>
#include <String>
#include <string.h>

#include "CReceive.h"

void CReceive::SetString()
{
	std::cout << "16�i������͂��Ă��������B" << std::endl;
	std::getline(std::cin, m_str);
}
std::string CReceive::GetString()
{
	return m_str;
}