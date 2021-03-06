/*************************************************************************
	> File Name: ConnectorThreadTest.cc
	> Author: uuchen
	> Mail: 1319081676@qq.com
	> Created Time: 2017年04月14日 星期五 10时08分32秒
 ************************************************************************/

#include"../ConnectorThread.h"

using namespace unet;
using namespace unet::net;
using namespace unet::thread;

int main(int argc,char** argv)
{
    InetAddress serveraddr(7777);
    ConnectorThread connector(&serveraddr);
    
    std::cout << "I'm here!" << std::endl;
    
    connector.start();
    return 0;
}

