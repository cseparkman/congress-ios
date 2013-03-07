//
//  SFCongressAppStyle.m
//  Congress
//
//  Created by Daniel Cloud on 3/6/13.
//  Copyright (c) 2013 Sunlight Foundation. All rights reserved.
//

#import "SFCongressAppStyle.h"

@implementation UIColor (SFCongressAppStyle)

static NSString * const SFCongressPrimaryBackgroundColor = @"FAFBEB";
static NSString * const SFCongressPrimaryTextColor = @"4b4b3f";

static NSString * const SFCongressNavigationBarColor = @"70b6b6";
//static NSString * const SFCongressBarButtonTintColor = @"184969";

static NSString * const SFCongressMenuBackgroundColor = @"e6d53d";
static NSString * const SFCongressMenuTextColor = @"bcaa18";
static NSString * const SFCongressMenuDividerColor = @"ede14f";

static NSString * const SFCongressTableSeparatorColor = @"eeeed2";

+ (UIColor *)primaryBackgroundColor
{
    return [UIColor colorWithHex:SFCongressPrimaryBackgroundColor];
}

+ (UIColor *)menuBackgroundColor
{
    return [UIColor colorWithHex:SFCongressMenuBackgroundColor];
}

+ (UIColor *)menuTextColor
{
    return [UIColor colorWithHex:SFCongressMenuTextColor];
}

+ (UIColor *)primaryTextColor
{
    return [UIColor colorWithHex:SFCongressPrimaryTextColor];
}

+ (UIColor *)menuDividerColor
{
    return [UIColor colorWithHex:SFCongressMenuDividerColor];
}

+ (UIColor *)navigationBarBackgroundColor
{
    return [UIColor colorWithHex:SFCongressNavigationBarColor];
}

+ (UIColor *)tableSeparatorColor
{
    return [UIColor colorWithHex:SFCongressTableSeparatorColor];
}

@end

@implementation UIImage (SFCongressAppStyle)

static NSString * const SFCongressNavigationBarBackgroundImage = @"NavigationBarBg.png";

+ (UIImage *)barButtonDefaultBackgroundImage
{
    return [UIImage imageNamed:SFCongressNavigationBarBackgroundImage];
}

@end

@implementation SFCongressAppStyle

+ (void)setUpGlobalStyles
{
    [[UIApplication sharedApplication] setStatusBarStyle:UIStatusBarStyleBlackOpaque];
    [self _setUpNavigationBarAppearance];
    [[UISegmentedControl appearance] setTintColor:[UIColor navigationBarBackgroundColor]];
//    [[UISegmentedControl appearance] setBackgroundImage:[UIImage imageNamed:SFCongressMenuBackgroundImage] forState:UIControlStateNormal barMetrics:UIBarMetricsDefault];
    
    [[UISearchBar appearance] setBackgroundImage:[UIImage barButtonDefaultBackgroundImage]];
}

+ (void)_setUpNavigationBarAppearance
{
    [[UINavigationBar appearance] setBackgroundImage:[UIImage barButtonDefaultBackgroundImage] forBarMetrics:UIBarMetricsDefault];
    [[UIBarButtonItem appearance] setBackgroundImage:[UIImage barButtonDefaultBackgroundImage] forState:UIControlStateNormal barMetrics:UIBarMetricsDefault];
}

@end
