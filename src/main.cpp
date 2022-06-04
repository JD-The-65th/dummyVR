#include <iostream>
#include <thread>
#include <filesystem>
#include <string>
#include "dummyvr.hpp"

#if defined(WIN32) || defined(_WIN32) || defined(__WIN32) && !defined (__CYGWIN__)

std::cout << "You're using windows, so results may vary. Don't come crying to us when the program goes belly up."
std::string steamLocation = "C:\\Program Files\\Steam\\steamapps"
#else
std::string steamLocation = "~/.steam/steam/steamapps";
#endif

std::string steamVrDriverLoc = steamLocation + "/common/SteamVR/drivers";



int main() {

    std::cout << steamVrDriverLoc;
    return 0;

};
