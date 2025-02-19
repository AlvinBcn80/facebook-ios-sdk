/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 * All rights reserved.
 *
 * This source code is licensed under the license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import "FBSDKErrorCreating.h"
#import "FBSDKErrorReporting.h"

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(ErrorFactory)
@interface FBSDKErrorFactory : NSObject <FBSDKErrorCreating>

@property (nonatomic, strong) id<FBSDKErrorReporting> reporter;

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

- (instancetype)initWithReporter:(id<FBSDKErrorReporting>)reporter;

@end

NS_ASSUME_NONNULL_END
