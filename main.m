//
//  main.m
//  Student
//
//  Created by xyh on 2022/8/1.
//  Copyright © 2022 xyh. All rights reserved.
//

#import <Foundation/Foundation.h>
#import"Student.h"
int main(int argc, const char * argv[]) {
    @autoreleasepool{
        Student *s=[[Student alloc] init];
        [s study:20.5];
    }
    return 0;
}
