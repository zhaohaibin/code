//
//  StatusIndicator.h
//  ActivityIndicator
//
//  Created by ks on 16/5/23.
//  Copyright (c) 2016年 ks. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface PopupActivityIndicator : NSView
- (void)popupCircularIndicatorFromView:(NSView*)view;
- (void)stop;
@end
