/*
 *
 *    Copyright (c) 2013-2017 Nest Labs, Inc.
 *    All rights reserved.
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

/**
 *    @file
 *      Objective-C representation of NetworkInfo payload communicated via network-provisioning profile.
 *
 */

#import <Foundation/Foundation.h>

#import "NLNetworkInfo.h"
#include "WeaveDeviceManager.h"

using nl::Weave::DeviceManager::NetworkInfo;

@interface NLNetworkInfo()

+ (NLNetworkInfo *)createUsing:(NetworkInfo *)pNetworkInfo;

- (NetworkInfo)toNetworkInfo;
@end
