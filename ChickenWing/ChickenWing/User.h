//
//  User.h
//  ChickenWing
//
//  Created by Thomas Chadwick on 2013-03-27.
//  Copyright (c) 2013 Johann Kriek. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface User : NSObject

@property NSString *objectID;
@property NSString *username;
@property NSString *password;
@property NSString *salt;
@property NSString *email;
@property (assign) BOOL emailVerified;
@property NSString *createdAt;
@property NSString *updatedAt;

@end
