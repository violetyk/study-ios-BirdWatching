//
//  BirdSightingDataController.h
//  BirdWatching
//
//  Created by 加賀谷 祐平 on 2014/01/16.
//  Copyright (c) 2014年 加賀谷 祐平. All rights reserved.
//

#import <Foundation/Foundation.h>

// 前方宣言。コンパイラにクラスがある旨、約束している
@class BirdSighting;

@interface BirdSightingDataController : NSObject
- (void)initializeDefaultDataList;
@property (nonatomic, copy) NSMutableArray *masterBirdSightingList;
- (NSUInteger)countOfList;
- (BirdSighting *)objectInListAtIndex:(NSUInteger)theIndex;
- (void)addBirdSightingWithSighting:(BirdSighting *)sighting;
@end
