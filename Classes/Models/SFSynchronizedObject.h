//
//  SFSynchronizedObject.h
//  Congress
//
//  Created by Daniel Cloud on 1/8/13.
//  Copyright (c) 2013 Sunlight Foundation. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol SFSynchronizedObject <NSObject>

@required
+ (NSString *)remoteResourceName;
+ (NSString *)remoteIdentifierKey;
+ (NSMutableArray *)collection;

@end


@interface SFSynchronizedObject : MTLModel <MTLJSONSerializing, SFSynchronizedObject>
@property (weak, nonatomic, readonly) NSString *remoteID;
@property (nonatomic, strong) NSDate *createdAt;
@property (nonatomic, strong) NSDate *updatedAt;
@property BOOL persist;

+ (NSString *)remoteResourceName;
+ (NSString *)remoteIdentifierKey;
+ (instancetype)objectWithJSONDictionary:(NSDictionary *)externalRepresentation;
+ (instancetype)existingObjectWithRemoteID:(NSString *)remoteID;
+ (NSMutableArray *)collection;
+ (NSArray *)allObjectsToPersist;
- (void)updateObjectUsingJSONDictionary:(NSDictionary *)externalRepresentation;
- (void)addObjectToCollection;

@end
