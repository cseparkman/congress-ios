//
//  SFLegislatorDetailView.h
//  Congress
//
//  Created by Daniel Cloud on 12/13/12.
//  Copyright (c) 2012 Sunlight Foundation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SFContentView.h"
#import "SFFavoriteButton.h"
#import "SFCongressButton.h"
#import "SFImageButton.h"
#import "SFLabel.h"
#import "SFMapView.h"

@interface SFLegislatorDetailView : SFContentView

@property (nonatomic, strong) SFLabel *nameLabel;
@property (nonatomic, strong) UILabel *infoText;
@property (nonatomic, strong) UILabel *contactLabel;
@property (nonatomic, strong) SFLabel *addressLabel;
@property (nonatomic, strong) UIImageView *photo;
@property (nonatomic, strong) NSArray *socialButtons;
@property (nonatomic, strong) SFCongressButton *callButton;
@property (nonatomic, strong) SFCongressButton *officeMapButton;
@property (nonatomic, strong) SFCongressButton *districtMapButton;
@property (nonatomic, strong) SFImageButton *websiteButton;
@property (nonatomic, strong) SFFavoriteButton *favoriteButton;
@property (nonatomic, strong) SFMapView *mapView;

@end
