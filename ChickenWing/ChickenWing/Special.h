//
//  Special.h
//  ChickenWing
//
//  Created by Thomas Chadwick on 2013-03-27.
//  Copyright (c) 2013 Johann Kriek. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "User.h"
#import "Restaurant.h"

@interface Special : NSObject

@property NSString *objectID;
@property User *addedBy;
@property NSString *description;
@property int downvotes;
@property int upvotes;
@property NSDate *endDate;
@property int flag;
@property NSString *name;
@property Restaurant *restaurant;
@property NSDate *startDate;
@property NSDecimal *priceFrom;
@property NSDecimal *priceTo;

@property NSString *createdAt;
@property NSString *updatedAt;

@end
