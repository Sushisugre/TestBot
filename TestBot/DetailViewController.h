//
//  DetailViewController.h
//  TestBot
//
//  Created by su, shi(AWF) on 10/24/13.
//  Copyright (c) 2013 su, shi(AWF). All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
