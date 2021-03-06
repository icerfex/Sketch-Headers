//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSImageView, SCKAvatar;

@interface MSCloudAvatarView : NSView
{
    SCKAvatar *_avatar;
    NSImageView *_imageView;
}

@property(retain, nonatomic) NSImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) SCKAvatar *avatar; // @synthesize avatar=_avatar;
- (void).cxx_destruct;
- (void)loadAvatar;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (void)loadView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

