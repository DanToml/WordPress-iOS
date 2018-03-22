#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "Automattic-Tracks-iOS.h"
#import "TracksConstants.h"
#import "TracksContextManager.h"
#import "TracksDeviceInformation.h"
#import "TracksEvent.h"
#import "TracksEventCoreData.h"
#import "TracksEventPersistenceService.h"
#import "TracksEventService.h"
#import "TracksLogging.h"
#import "TracksService.h"
#import "TracksServiceRemote.h"

FOUNDATION_EXPORT double AutomatticTracksVersionNumber;
FOUNDATION_EXPORT const unsigned char AutomatticTracksVersionString[];
