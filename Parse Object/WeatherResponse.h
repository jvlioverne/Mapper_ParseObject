//
//  WeatherResponse.h
//  Parse Object
//
//  Created by Benjas on 10/01/16.
//  Copyright © 2016 Smartplace. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WeatherResponse : NSObject
@property (nonatomic,strong) NSString *base;
@property (nonatomic,strong) NSString *dt;
@property (nonatomic,strong) NSString *ID;

@property (nonatomic,strong) NSMutableArray *weather;

@end
