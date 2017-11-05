//
//  ZIKServiceModuleRoutable.h
//  ZIKRouter
//
//  Created by zuik on 2017/8/21.
//  Copyright © 2017 zuik. All rights reserved.
//
//  This source code is licensed under the MIT-style license found in the
//  LICENSE file in the root directory of this source tree.
//

#import <Foundation/Foundation.h>

/**
 Protocol inheriting from ZIKServiceModuleRoutable can be used to fetch service router with ZIKServiceRouter.forModule().
 @discussion
 ZIKServiceModuleRoutable is for:
 1. Let module declare routable protocol in header as the module's provided interface
 1. Checking declared protocol is correctly supported in it's service router
 
 It's safe to use objc protocols inheriting from ZIKServiceModuleRoutable with ZIKServiceRouter.forModule() and won't get nil. ZIKServiceRouter will validate all ZIKServiceModuleRoutable protocols and registered protocols when app launchs and ZIKSERVICEROUTER_CHECK is enbled. When ZIKSERVICEROUTER_CHECK is disabled, the protocol doesn't need to inheriting from ZIKServiceModuleRoutable.
 */
@protocol ZIKServiceModuleRoutable

@end
