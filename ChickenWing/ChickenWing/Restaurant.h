//
//  Restaurant.h
//  ChickenWing
//
//  Created by Thomas Chadwick on 2013-03-27.
//  Copyright (c) 2013 Johann Kriek. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Restaurant : NSObject

@property NSString *objectID;
@property NSString *city;
@property NSString *location;
@property NSString *name;
@property NSString *province;
@property NSString *locationLat;
@property NSString *locationLon;

@property NSString *createdAt;
@property NSString *updatedAt;

@end
