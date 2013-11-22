//
//  SFEditFollowedViewController.h
//  Congress
//
//  Created by Daniel Cloud on 3/12/13.
//  Copyright (c) 2013 Sunlight Foundation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GAITrackedViewController.h"

@class SFCongressButton;

@interface SFEditFollowedViewController : GAITrackedViewController <UIViewControllerRestoration>

@property (nonatomic, strong) SFCongressButton *saveButton;

@end
