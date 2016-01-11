//
//  WeatherObject.h
//  Parse Object
//
//  Created by Benjas on 10/01/16.
//  Copyright © 2016 Smartplace. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WeatherObject : NSObject

@property (nonatomic,strong) NSString *Id;
@property (nonatomic,strong) NSString *main;
@property (nonatomic,strong) NSString *weather_description;
@property (nonatomic,strong) NSString *icon;

@property (nonatomic,strong) NSMutableArray *weater;

@end
