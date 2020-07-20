#include <iostream>
#include <chrono>
#include <thread>
#include <string>

/*
Question: How to debug a program using gdbserver?
Answer:
    1. gdbserver sj-yuxiangw:2000 main
        run main prog with gdbserver on remote machine (such as hsv-sc47) with port 2000, the prog hangs at "Listening on port 2000". 
        The ‘sj-yuxiangw:2000’ argument means that gdbserver is to expect a TCP connection from machine sj-yuxiangw to gdbserver machine TCP port 2000.
    2. gdb main
        run main prog with gdb on local machine (such as sj-yuxiangw)
    3. target remote hsv-sc47:2000
        connect to remote machine in local gdb console. The remote machine will show log to indicate remote debugging from ...
    4. b main.cpp:32
        set breakpoint in gdb console
    5. c
        continue the prog in gdb console
Note:
    Please make sure to update launch.json file (default launch.json cannot work) if you cannot connect with remote machine.
*/

int main(int argc ,char **argv)
{
    std::cout << "Test GDB" << std::endl;

    int i = 1;

    while(i <= 2)
    {
        std::cout << "i = " << i << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
        i++;
    }

    std::string s("abc");
    std::cout << "empty string:" << s.c_str() << std::endl;

    return 0;
}
