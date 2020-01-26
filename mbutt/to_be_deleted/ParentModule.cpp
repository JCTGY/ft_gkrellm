/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ParentModule.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 14:40:25 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/25 16:41:35 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ParentModule.hpp"

ParentModule::ParentModule(void)
{
	std::cout << "ParentModule constructor" << std::endl;
	_setUpdateTopInfo();
	return;
}

ParentModule::~ParentModule(void)
{
	std::cout << "ParentModule desctructor" << std::endl;
	return;
}

void ParentModule::_setUpdateTopInfo(void)
{
	int i = 0;
	system("top -l1 | head -10 > /tmp/topGrepFile.txt");
	std::ifstream file("/tmp/topGrepFile.txt");
	std::stringstream topInfoBuffer;
	topInfoBuffer << file.rdbuf();

	_topInfo = topInfoBuffer.str();
	return;
}

std::string ParentModule::getTopInfo(void)
{
//	_setTopInfo();
	return(_topInfo);
}


int main(void)
{
	ParentModule pr;
	std::cout << pr.getTopInfo() << std::endl;
	std::cout << pr.getTopInfo() << std::endl;
}
