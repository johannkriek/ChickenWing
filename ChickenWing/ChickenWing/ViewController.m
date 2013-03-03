//
//  ViewController.m
//  ChickenWing
//
//  Created by Johann Kriek on 13-03-03.
//  Copyright (c) 2013 Johann Kriek. All rights reserved.
//

#import "ViewController.h"
#import <Parse/Parse.h>

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    
    PFObject *testObject = [PFObject objectWithClassName:@"TestObject"];
    [testObject setObject:@"bar" forKey:@"foo"];
    [testObject save];
    
    //_ParseStatus.text = @"HELLO!";
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)ParseConnect:(id)sender {
}
@end
