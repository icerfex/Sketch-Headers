//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MSCoreImageQueue : NSObject
{
}

+ (id)imageWithWhiteBackground:(id)arg1;
+ (id)clampImage:(id)arg1 forBlur:(id)arg2;
+ (id)applyEffect:(unsigned long long)arg1 fromSource:(id)arg2 toImage:(struct CGImage *)arg3;
+ (id)cachedImage:(struct CGImage *)arg1 withEffect:(unsigned long long)arg2 fromObject:(id)arg3 colorSpace:(id)arg4;
+ (void)drawImage:(struct CGImage *)arg1 withEffect:(unsigned long long)arg2 fromObject:(id)arg3 inContext:(id)arg4;
+ (void)initialize;

@end

