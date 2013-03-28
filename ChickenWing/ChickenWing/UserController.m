//
//  UserController.m
//  ChickenWing
//
//  Created by Thomas Chadwick on 2013-03-27.
//  Copyright (c) 2013 Johann Kriek. All rights reserved.
//

#import "UserController.h"

@implementation UserController

- (void)addUser:(User *)userToAdd{
    
}
- (void)deleteUserByID:(NSString *)objectID{
    
}
- (void)deleteUserByUsername:(NSString *)username{
    
}
- (void)deleteUserByEmail:(NSString *)email{
    
}
- (void)confirmEmail:(User *)userToConfirm{
    
}
- (void)confirmEmailByID:(NSString *)objectID{
    
}
- (void)confirmEmailByUsername:(NSString *)username{
    
}
- (void)confirmEMailByEmail:(NSString *)email{
    
}
- (User *)retrieveUserByID:(NSString *)objectID{
    User *user = [[User alloc]init];
    
    return user;
}
- (User *)retrieveUserByUsername:(NSString *)username{
    User *user = [[User alloc]init];
    
    return user;
    
}
- (User *)retrieveUserByEmail:(NSString *)email{
    User *user = [[User alloc]init];
    
    return user;
    
}
- (void)changePassword:(User *)user{
    
}

@end
