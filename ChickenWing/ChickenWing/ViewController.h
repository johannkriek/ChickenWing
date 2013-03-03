//
//  ViewController.h
//  ChickenWing
//
//  Created by Johann Kriek on 13-03-03.
//  Copyright (c) 2013 Johann Kriek. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UILabel *ParseStatus;
- (IBAction)ParseConnect:(id)sender;

@end
