//
//  CalculatorBrain.h
//  Calculator
//
//  Created by xin zhang on 12-8-10.
//  Copyright (c) 2012年 xidian university. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CalculatorBrain : NSObject

- (void)pushOperand:(double)operand;
- (double)performOperation:(NSString *)operation;

@property (readonly) id program;

+ (double)runProgram:(id)program;
+ (NSString *)descriptionOfProgram:(id)program;
@end
