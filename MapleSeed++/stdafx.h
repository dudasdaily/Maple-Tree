// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#define _WIN32_WINNT 0x0501

#include <unordered_map>
#include <stdio.h>
#include <tchar.h>
#include <iostream>
#include <fstream>
#include <thread>
#include <cstdint>
#include <filesystem>
#include <conio.h>
#include <vector>
#include <map>
#include <future>
#include <string>
#include <stdarg.h>
#include <bitset>
#include <iomanip>
#include <algorithm>
#include <limits>
using namespace std;

typedef std::unordered_map<std::string, std::thread> ThreadMap;

//Third Party libraries
#include <boost/program_options.hpp>
#include <boost/filesystem.hpp>
#include <boost/beast/core.hpp>
#include <boost/progress.hpp>
#include <boost/asio.hpp>
#include <boost/property_tree/xml_parser.hpp>
#include <boost/property_tree/ptree.hpp>
#include <boost/signals2/signal.hpp>
using namespace boost::filesystem;
namespace po = boost::program_options;

#include <nana/gui.hpp>
#include <nana/gui/place.hpp>
#include <nana/threads/pool.hpp>
#include <nana/gui/filebox.hpp>
#include <nana/gui/widgets/menu.hpp>
#include <nana/gui/widgets/label.hpp>
#include <nana/gui/widgets/button.hpp>
#include <nana/gui/widgets/picture.hpp>
#include <nana/gui/widgets/progress.hpp>
#include <nana/gui/widgets/listbox.hpp>
//#pragma comment (lib, "libjpeg.MT.x64.lib")
#pragma comment (lib, "nana_v141_Debug_x64.lib")
using namespace nana;

#include "ThirdParty\cdecrypt.cpp"
#include "ThirdParty\frozen.h"

#include <windows.h>
#include <Wininet.h>
#pragma comment (lib, "Wininet.lib")

namespace MapleSeed{
	enum ContentType { Game = 0, Patch = 1, DLC = 2 };
}

//Project includes
#include "Properties/gen-versioninfo.h"
#include "Common/Tools.h"
#include "Database/Info/TitleInfo.h"
#include "Database/Library.h"
#include "Threads/ThreadManager.h"
#include "Network/DownloadClient.h"
#include "WiiU/MapleTicket.h"
#include "MapleSeed/MapleMini.h"
#include "GUI/UIMain.h"

using namespace MapleSeed;
using namespace CommonTools;