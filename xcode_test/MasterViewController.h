//
//  MasterViewController.h
//  xcode_test
//
//  Created by デルピエロ on 13/01/18.
//  Copyright (c) 2013年 デルピエロ. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
