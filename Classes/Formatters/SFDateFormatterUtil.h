//
//  SFDateFormatterUtil.h
//  Congress
//
//  Created by Daniel Cloud on 4/17/13.
//  Copyright (c) 2013 Sunlight Foundation. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SFDateFormatterUtil : NSObject

+ (NSDateFormatter *)mediumDateShortTimeFormatter;
+ (NSDateFormatter *)mediumDateNoTimeFormatter;
+ (NSDateFormatter *)longDateNoTimeFormatter;
+ (NSDateFormatter *)shortDateMediumTimeFormatter;
+ (NSDateFormatter *)shortDateNoTimeFormatter;
+ (NSDateFormatter *)shortHumanDateFormatter;

@end
