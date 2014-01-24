//
//  BirdsDetailViewController.h
//  BirdWatching
//
//  Created by 加賀谷 祐平 on 2014/01/16.
//  Copyright (c) 2014年 加賀谷 祐平. All rights reserved.
//

#import <UIKit/UIKit.h>

//　前方宣言
@class BirdSighting;

//@interface BirdsDetailViewController : UIViewController
@interface BirdsDetailViewController : UITableViewController

//@property (strong, nonatomic) id detailItem;
//@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@property (strong, nonatomic) BirdSighting *sighting;
@property (weak, nonatomic) IBOutlet UILabel *birdNameLabel;
@property (weak, nonatomic) IBOutlet UILabel *locationLabel;
@property (weak, nonatomic) IBOutlet UILabel *dateLabel;

@end
