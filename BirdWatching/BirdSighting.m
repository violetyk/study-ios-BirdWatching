//
//  BirdSighting.m
//  BirdWatching
//
//  Created by 加賀谷 祐平 on 2014/01/16.
//  Copyright (c) 2014年 加賀谷 祐平. All rights reserved.
//

#import "BirdSighting.h"

@implementation BirdSighting
-(id)initWithName:(NSString *)name location:(NSString *)location date:(NSDate *)date {
    self = [super init];
    if (self) {
        _name = name;
        _location = location;
        _date = date;
        return self;
    }
    return nil;
}
@end
