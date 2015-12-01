//
//  Apparel.h
//  iOS Training
//
//  Created by Debbie Ramos on 11/30/15.
//  Copyright © 2015 URBN. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Apparel : NSObject

@property (nonatomic, strong) NSString *type;
@property (nonatomic, strong) NSString *style;
@property (nonatomic, strong) NSString *brand;
@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *color;

@property (nonatomic, assign) NSInteger price;
@property (nonatomic, assign) NSInteger size;
@property (nonatomic, assign) BOOL unisex;

-(void)setupApparelValues;

@end
