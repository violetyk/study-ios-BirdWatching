//
//  BirdsMasterViewController.h
//  BirdWatching
//
//  Created by 加賀谷 祐平 on 2014/01/16.
//  Copyright (c) 2014年 加賀谷 祐平. All rights reserved.
//

#import <UIKit/UIKit.h>
//デフォルトの代わりにテーブルビューのデータをハンドリングするクラス
@class BirdSightingDataController;

@interface BirdsMasterViewController : UITableViewController
@property (strong, nonatomic) BirdSightingDataController *dataController;

- (IBAction)done:(UIStoryboardSegue *)segue;
- (IBAction)cancel:(UIStoryboardSegue *)segue;

@end
