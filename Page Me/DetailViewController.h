//
//  DetailViewController.h
//  Page Me
//
//  Created by cloud on 7/22/15.
//  Copyright (c) 2015 cloud. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

