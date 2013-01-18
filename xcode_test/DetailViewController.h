//
//  DetailViewController.h
//  xcode_test
//
//  Created by デルピエロ on 13/01/18.
//  Copyright (c) 2013年 デルピエロ. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
