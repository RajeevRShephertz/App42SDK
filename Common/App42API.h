//
//  App42API.h
//  App42CPPSDK
//
//  Created by Rajeev Ranjan on 07/10/13.
//
//

#ifndef __App42CPPSDK__App42API__
#define __App42CPPSDK__App42API__

#include <iostream>
#include "SocialService.h"

#include "TimerService.h"

#include "App42SocialResponse.h"

#include "App42TimerResponse.h"

#include "Common.h"
#include "Query.h"
#include "QueryBuilder.h"
#include "App42Exception.h"
#include "App42Object.h"
#include "App42GeoPoint.h"
#include "App42CallBack.h"
#include "ACL.h"

extern bool isTraceEnabled;

class App42API
{
public:
    
    static vector<App42ACL> getDefaultApp42ACL();
    static void setDefaultApp42ACL(vector<App42ACL> _defaultApp42ACL);
    
    static string getLoggedInUser();
    static void setLoggedInUser(string _loggedInUser);
    static string getInstallId();
    static void setInstallId(string _installId);
    static string getFbAccesToken();
    static void setFbAccesToken(string _fbAccesToken);
    static string getUserSessionId();
    static void setUserSessionId(string _userSessionId);
    static string getDbName();
    static void setDbName(string _dbName);
    static void removeSession();
    
    static void setIsTraceEnabled(bool _isTraceEnabled);
    
    static void Initialize(string _apiKey, string _secretKey);
    
    
    
    static SocialService* BuildSocialService();
    
   

    static TimerService* BuildTimerService();


};
#endif /* defined(__App42CPPSDK__App42API__) */
