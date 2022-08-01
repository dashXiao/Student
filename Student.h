//
//  Student.h
//  Student
//
//  Created by xyh on 2022/8/1.
//  Copyright © 2022 xyh. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Student : NSObject
@property(nonatomic,copy)NSString *name;
@property(nonatomic,copy)NSString *major;
@property(nonatomic,assign)NSUInteger age;


- (void)study:(CGFloat)time;
@end

NS_ASSUME_NONNULL_END
