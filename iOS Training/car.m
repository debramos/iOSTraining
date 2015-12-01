//
//  car.m
//  iOS Training
//
//  Created by Debbie Ramos on 11/24/15.
//  Copyright © 2015 URBN. All rights reserved.
//

#import "car.h"

@implementation car

- (void)setupVehicleValues {
    self.make = @"Audi";
    self.model = @"A4";
    self.name = nil;
    
    self.numberOfWheels = 4;
    self.numberOfDoors = 4;
    
    self.runsOnGas = YES;
}
@end
