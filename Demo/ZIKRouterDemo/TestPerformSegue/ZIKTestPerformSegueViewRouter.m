//
//  ZIKTestPerformSegueViewRouter.m
//  ZIKRouterDemo
//
//  Created by zuik on 2017/7/5.
//  Copyright © 2017 zuik. All rights reserved.
//

#import "ZIKTestPerformSegueViewRouter.h"
#import "ZIKTestPerformSegueViewController.h"

@interface ZIKTestPerformSegueViewController (ZIKTestPerformSegueViewRouter) <ZIKRoutableView>
@end
@implementation ZIKTestPerformSegueViewController (ZIKTestPerformSegueViewRouter)
@end

@implementation ZIKTestPerformSegueViewRouter

+ (void)registerRoutableDestination {
    [self registerView:[ZIKTestPerformSegueViewController class]];
}

- (id<ZIKRoutableView>)destinationWithConfiguration:(ZIKViewRouteConfiguration *)configuration {
    UIStoryboard *sb = [UIStoryboard storyboardWithName:@"Main" bundle:nil];
    ZIKTestPerformSegueViewController *destination = [sb instantiateViewControllerWithIdentifier:@"testPerformSegue"];;
    destination.title = @"Test PerformSegue";
    return destination;
}

@end
