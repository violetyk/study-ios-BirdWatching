//
//  AddSightingViewController.h
//  BirdWatching
//
//  Created by 加賀谷 祐平 on 2014/01/20.
//  Copyright (c) 2014年 加賀谷 祐平. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BirdSighting;

//@interface AddSightingViewController : UITableViewController
@interface AddSightingViewController : UITableViewController <UITextFieldDelegate>
@property (weak, nonatomic) IBOutlet UITextField *birdNameInput;
@property (weak, nonatomic) IBOutlet UITextField *locationInput;

//@property (weak, nonatomic) IBOutlet UITextField *birdNameInput;
////@property (weak, nonatomic) IBOutlet UITextField *birdNameInput;
//@property (weak, nonatomic) IBOutlet UITextField *locationInput;


@property (strong, nonatomic) BirdSighting *birdSighting;

@end
