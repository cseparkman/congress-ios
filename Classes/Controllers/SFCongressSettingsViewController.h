//
//  SFCongressSettingsViewController.h
//  Congress
//
//  Created by Daniel Cloud on 3/11/13.
//  Copyright (c) 2013 Sunlight Foundation. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SFCongressButton;

@interface SFCongressSettingsViewController : UIViewController

@property (nonatomic, retain) SFCongressButton *editFavoritesButton;
@property (nonatomic, retain) SSLabel *headerLabel;
@property (nonatomic, retain) SSLabel *descriptionLabel;

@end