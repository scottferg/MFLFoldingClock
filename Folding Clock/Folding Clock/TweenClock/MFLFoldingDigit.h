//
//  MFLFoldingDigit.h
//  NumberTweening
//
//  Created by teejay on 10/15/13.
//  Copyright (c) 2013 MFL. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MFLFoldingDigit : UIView

@property (nonatomic) CGColorRef strokeColor;
@property (nonatomic) CGFloat lineThickness;

@property CGFloat transformDuration;

- (id)initWithFrame:(CGRect)frame andDigit:(NSInteger)initialDigit;

- (void)animateToDigit:(NSInteger)digit;
- (void)decrement;
- (void)increment;

@end
