//
//  vehicle.h
//  iOS Training
//
//  Created by Debbie Ramos on 11/24/15.
//  Copyright © 2015 URBN. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface vehicle : NSObject

@property (nonatomic, strong) NSString *make;
@property (nonatomic, strong) NSString *model;
@property (nonatomic, strong) NSString *name;

@property (nonatomic assign) NSInteger numberOfWheels;
@property (nonatomic, assign) NSInteger numberOfDoors;
@property (nonatomic, assign) BOOL runsOnGas

- (void)setupVehicleValues;

@end
