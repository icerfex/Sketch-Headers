//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSSharedObject.h"

@interface MSSharedObject : _MSSharedObject
{
}

- (id)parentGroup;
- (void)prepareToBecomeSharedObjectValue:(struct MSModelObject *)arg1;
- (unsigned long long)type;
- (BOOL)isOutOfSyncWithInstance:(struct MSModelObject *)arg1;
- (id)container;
- (struct MSModelObject *)newUnregisteredInstance;
- (struct MSModelObject *)newInstance;
- (BOOL)isSharedObjectForInstance:(struct MSModelObject *)arg1;
- (void)unregisterInstance:(struct MSModelObject *)arg1;
- (void)registerInstance:(struct MSModelObject *)arg1;
- (id)defaultName;
- (void)objectDidInit;
- (id)initWithName:(id)arg1 sharedObjectID:(id)arg2 value:(struct MSModelObject *)arg3;
- (id)initWithName:(id)arg1 firstInstance:(struct MSModelObject *)arg2;

@end

