//
//  Constants.h
//  PaxApp
//
//  Created by Junyuan Lau on 30/05/2012.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Constants : NSObject


////URLs used to access web services ////

//Host URL
FOUNDATION_EXPORT NSString *const kHostSite;

//kHerokuHost URL
FOUNDATION_EXPORT NSString *const kHerokuHostSite;

//URL Time Out in secs
FOUNDATION_EXPORT NSTimeInterval const kURLConnTimeOut;

//Count Down Time for submitjob in secs
FOUNDATION_EXPORT NSTimeInterval const kCountDownTime;

//Time interval for Status Receiver
FOUNDATION_EXPORT NSTimeInterval const kStatusReceiverInterval;

//Existing Job Age Limit
FOUNDATION_EXPORT NSTimeInterval const kActiveJobAgeLimit;

//Time interval for driver position downloads
FOUNDATION_EXPORT NSTimeInterval const kDownloadPositionsInterval;

//Download Driver Details URL Extension
FOUNDATION_EXPORT NSString *const kGetDriverPosition;

//Download Selected Driver Details URL Extension
FOUNDATION_EXPORT NSString *const kGetSpecifiedDriverPosition;

//Submit Job URL Extension
FOUNDATION_EXPORT NSString *const kSubmitJob;

//Retreive Job Details URL Extension
FOUNDATION_EXPORT NSString *const kCheckJob;

//Pax updates status to onboard
FOUNDATION_EXPORT NSString *const kOnboardJobCalledByPassenger;

//Pax cancels job
FOUNDATION_EXPORT NSString *const kCancelJobCalledByPassenger;

//Job expired
FOUNDATION_EXPORT NSString *const kJobExpired;

//Job completed as indicated by pax
FOUNDATION_EXPORT NSString *const kCompleteJob;

//Get ETA of nearest driver
FOUNDATION_EXPORT NSString *const kGetNearestTime;

//Get ETA of specific driver
FOUNDATION_EXPORT NSString *const kGetETA;

//Calculate fare of trip
FOUNDATION_EXPORT NSString *const kGetFare;

//Google PLaces API Key URL
FOUNDATION_EXPORT NSString *const kGoogleAPIKey;

@end
