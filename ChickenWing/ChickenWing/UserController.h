//
//  UserController.h
//  ChickenWing
//
//  Created by Thomas Chadwick on 2013-03-27.
//  Copyright (c) 2013 Johann Kriek. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "User.h"

@interface UserController : NSObject

// void addUser(user)
// void deleteUserByID(string id)
// void deleteUserByUsername(string username)
// void deleteUserByEmail(string email)
// void confirmEmail(user)
// void confirmEmail(string id)
// void confirmEmail(string username)
// void confirmEmail(string email)
// user retrieveUser(string id)
// user retrieveUser(string username)
// user retrieveUser(string email)
// void changePassword(user)
// maybes:
// void changeUsername(string id)
// void changeUsername(string email)
// void changeEmail(string id)
// void changeEmail(string username)

- (void)addUser:(User *)userToAdd;
- (void)deleteUserByID:(NSString *)objectID;
- (void)deleteUserByUsername:(NSString *)username;
- (void)deleteUserByEmail:(NSString *)email;
- (void)confirmEmail:(User *)userToConfirm;
- (void)confirmEmailByID:(NSString *)objectID;
- (void)confirmEmailByUsername:(NSString *)username;
- (void)confirmEMailByEmail:(NSString *)email;
- (User *)retrieveUserByID:(NSString *)objectID;
- (User *)retrieveUserByUsername:(NSString *)username;
- (User *)retrieveUserByEmail:(NSString *)email;
- (void)changePassword:(User *)user;



@end
