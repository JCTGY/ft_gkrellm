/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NetworkModule.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 15:16:41 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/26 11:45:15 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NETWORKMODULE_HPP
# define NETWORKMODULE_HPP

//#include "ParentModule.hpp"
//#include <sys/sysctl.h>
//#include "ManagerModule.hpp"
#include <iostream>
#include <vector>
#include "IMonitorModule.hpp" // Added IMonitorDisplay for Jeff

class NetworkModule : public IMonitorModule //: public ParentModule
{
	public:
		NetworkModule(void);
		~NetworkModule(void);
//		std::string					getNetworkPacketIn(void);
//		std::string					getNetworkPacketOut(void);
		std::string					getNetworkPacketIn(std::string getTopInfo);
		std::string					getNetworkPacketOut(std::string getTopInfo);
		//std::vector<std::string> 	getInfo(std::string Info[]);
		std::vector<std::string> 	getInfo(void);
		void						update(void); // Add update for Jeff
		void						setInfo(std::vector<std::string> Info);
//		void			updateNetworkModule(std::string getTopInfo[]);
	private:
		std::vector<std::string> 	_topInfo;
//		std::string		_networkIn;
//		std::string		_networkOut;

};

# endif
