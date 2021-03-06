//
//  EditPropertyViewController.h
//  Benchmark
//
//  Created by Gavin Cornwell on 25/09/2013.
//  Copyright (c) 2013 Alfresco. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BenchmarkService.h"

@interface EditPropertyViewController : UIViewController

- (id)initWithProperty:(Property *)property ofBenchmarkObject:(BenchmarkObject *)object benchmarkService:(id<BenchmarkService>)service;

@end
