//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BCNetworkService.h"

@class NSArray, NSString;

@interface BCDirectIPService : BCNetworkService
{
    int _port;
    NSString *_ipAddress;
    NSArray *_addresses;
}

@property(retain, nonatomic) NSArray *addresses; // @synthesize addresses=_addresses;
@property(nonatomic) int port; // @synthesize port=_port;
@property(retain, nonatomic) NSString *ipAddress; // @synthesize ipAddress=_ipAddress;
- (void).cxx_destruct;
- (void)createAddresses;
- (void)startService;
- (void)stopService;
- (id)name;
- (id)initWithIP:(id)arg1 port:(int)arg2;

@end

