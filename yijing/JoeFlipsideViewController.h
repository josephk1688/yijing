//
//  JoeFlipsideViewController.h
//  yijing
//
//  Created by Joseph Kung on 12-11-21.
//  Copyright (c) 2012年 Joseph Kung. All rights reserved.
//

#import <UIKit/UIKit.h>

@class JoeFlipsideViewController;

@protocol JoeFlipsideViewControllerDelegate
- (void)flipsideViewControllerDidFinish:(JoeFlipsideViewController *)controller;
@end

@interface JoeFlipsideViewController : UIViewController

@property (weak, nonatomic) id <JoeFlipsideViewControllerDelegate> delegate;

- (IBAction)done:(id)sender;

@end
