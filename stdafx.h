// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// ���Ǿ���ʹ�õ��������ĵ�
// �ض�����Ŀ�İ����ļ�
//

#pragma once

#define WIN32_LEAN_AND_MEAN             //  �� Windows ͷ�ļ����ų�����ʹ�õ���Ϣ



// TODO: �ڴ˴����ó�����Ҫ������ͷ�ļ�
#include <list>
#include <vector>

#include <iostream>
#include <string>

#include <boost/asio.hpp>
#include <boost/bind.hpp>
#include <boost/smart_ptr.hpp>
#include <boost/unordered_map.hpp>
#include <boost/unordered_set.hpp>
#include <boost/thread.hpp>
#include <boost/function.hpp>
#include <boost/thread/mutex.hpp>
#include <boost/thread/condition.hpp>
#include <boost/timer.hpp>

#include <MySqlDB/DBCommon.h>
#include <MySqlDB/MySqlZDB.h>
#include <MySqlDB/AdoHelper.h>
#include <CommonBase/ThreadTool.h>
#include <CommonBase/ThreadingMsgQueue.h>
#include <CommonBase/IConnection.h>
#include <CommonBase/BaseBuffer.h>
#include <CommonBase/TransmitData.h>
#include <CommonBase/netmsg.h>
#include <ServerBase/ServerSocket.h>
#include <CommonBase/AsyncQueue.h>
#include <CommonBase/TimerTask.h>
#include <CommonBase/String.h>
#include <CommonBase/SttEncoding.h>
#include <textlog/textlog.h>

#include <netmsg/netmsg_gate.h>
#include <netmsg/netmsg_login.h>

#if defined _MSC_VER
#ifdef _DEBUG
#pragma   comment(lib, "hiredis_d.lib")
#else
#pragma   comment(lib, "hiredis_r.lib")
#endif
#pragma   comment(lib, "RedisDB.lib")
#endif

using namespace std;
