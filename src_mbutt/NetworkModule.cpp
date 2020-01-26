/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NetworkModule.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 15:18:49 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/25 22:27:00 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NetworkModule.hpp"

NetworkModule::NetworkModule(void)
{
	std::cout << "NetworkModule constructor" << std::endl;
	return;
}

NetworkModule::~NetworkModule(void)
{
	std::cout << "NetworkModule destructor" << std::endl;
}

std::string NetworkModule::getNetworkPacketIn(std::string getTopInfo)
{

//	std::string networkIn  = getTopInfo().substr(414, 13);
//	std::string networkIn  = getTopInfo.substr(414, 13);
//	return(networkIn);
	return(getTopInfo.substr(19, 13));

}

std::string NetworkModule::getNetworkPacketOut(std::string getTopInfo)
//std::string NetworkModule::getNetworkPacketOut(void)
{
//	std::string networkOut =  getTopInfo.substr(432, 13);
//	std::string networkOut =  getTopInfo().substr(432, 13);	
//	return(networkOut);
	return(getTopInfo.substr(37, 13));
}


std::vector<std::string> NetworkModule::updateNetworkModule(std::string Info[])
{
//	std::cout << "Comes here succefully" << std::endl;
//	std::cout << getTopInfo[8] << std::endl;
//	std::cout << getNetworkPacketIn(getTopInfo[8]) << std::endl;
//	std::cout << "Does it come here1" << std::endl;
	std::vector<std::string> trimmedVector;
	trimmedVector.push_back(getNetworkPacketIn(Info[8]));
	trimmedVector.push_back(getNetworkPacketOut(Info[8]));
	return(trimmedVector);

}

void NetworkModule::update(void)
{

}

/*
int main(void)
{
//	NetworkModule nm;
//	std::cout << nm.getTopInfo << std::endl << std::endl;
//	std::cout << nm.getNetworkPacketIn()  << "|" << std::endl;
//	std::cout << nm.getNetworkPacketOut() << "|" << std::endl;
}
*/
