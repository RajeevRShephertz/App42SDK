//
//  App42API.cpp
//  App42CPPSDK
//
//  Created by Rajeev Ranjan on 07/10/13.
//
//

#include "App42API.h"

static string apiKey="";
static string secretKey="";
static string loggedInUser = "";
bool isTraceEnabled = false;

static string installId = "";
static string userSessionId = "";
static string fbAccesToken = "";
static string dbName = "";
static vector<App42ACL> defaultApp42ACL;

vector<App42ACL> App42API::getDefaultApp42ACL()
{
    return defaultApp42ACL;
}

void App42API::setDefaultApp42ACL(vector<App42ACL> _defaultApp42ACL)
{
    defaultApp42ACL = _defaultApp42ACL;
}

string App42API::getInstallId()
{
    return installId;
}

void App42API::setInstallId(string _installId)
{
    installId=_installId;
}

string App42API::getDbName()
{
    return dbName;
}
void App42API::setDbName(string _dbName)
{
    dbName=_dbName;
}

string App42API::getUserSessionId()
{
    return userSessionId;
}
void App42API::setUserSessionId(string _userSessionId)
{
    userSessionId=_userSessionId;
}

void App42API::removeSession()
{
    userSessionId = nullptr;
    loggedInUser = nullptr;
}

string App42API::getFbAccesToken()
{
    return fbAccesToken;
}
void App42API::setFbAccesToken(string _fbAccesToken)
{
    fbAccesToken=_fbAccesToken;
}


string App42API::getLoggedInUser()
{
    return loggedInUser;
}
void App42API::setLoggedInUser(string _loggedInUser)
{
    loggedInUser=_loggedInUser;
}

void App42API::setIsTraceEnabled(bool _isTraceEnabled)
{
    isTraceEnabled = _isTraceEnabled;
}

void App42API::Initialize(string _apiKey, string _secretKey)
{
    apiKey = _apiKey;
    secretKey = _secretKey;
    isTraceEnabled = false;
}


SocialService * App42API::BuildSocialService()
{
    SocialService *socialService = SocialService::Initialize(apiKey, secretKey);
    return socialService;
}


TimerService* App42API::BuildTimerService()
{
    TimerService *timerService = TimerService::Initialize(apiKey, secretKey);
    return timerService;
}
