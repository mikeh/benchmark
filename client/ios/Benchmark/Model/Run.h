//
//  Run.h
//  Benchmark
//
//  Created by Gavin Cornwell on 14/09/2013.
//  Copyright (c) 2013 Alfresco. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BenchmarkObject.h"
#import "Test.h"

@interface Run : BenchmarkObject

@property (nonatomic, assign, readwrite) BOOL hasStarted;
@property (nonatomic, assign, readwrite) BOOL hasCompleted;
@property (nonatomic, assign, readonly) Test *test;

- (id)initWithName:(NSString *)name
             summary:(NSString *)summary
        identifier:(NSString *)identifier
        hasStarted:(BOOL)hasStarted
      hasCompleted:(BOOL)hasCompleted
              test:(Test *)test;

@end
