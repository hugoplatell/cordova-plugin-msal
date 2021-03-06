//------------------------------------------------------------------------------
//
// Copyright (c) Microsoft Corporation.
// All rights reserved.
//
// This code is licensed under the MIT License.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files(the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and / or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions :
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
//------------------------------------------------------------------------------

#import <Foundation/Foundation.h>
#import "MSALParameters.h"

NS_ASSUME_NONNULL_BEGIN

@class MSALWebviewParameters;

@interface MSALSignoutParameters : MSALParameters

/**
 A copy of the configuration which was provided in the initializer.
 */
@property (nonatomic, readonly, copy) MSALWebviewParameters *webviewParameters;

/**
  Specifies whether signout should also open the browser and send a network request to the end_session_endpoint.
  YES by default.
 */
@property (nonatomic) BOOL signoutFromBrowser;

/**
 Initialize MSALSignoutParameters with web parameters.
 
 @param webviewParameters   User Interface configuration that MSAL uses when getting a token interactively or authorizing an end user.
 */
- (instancetype)initWithWebviewParameters:(MSALWebviewParameters *)webviewParameters NS_DESIGNATED_INITIALIZER;

#pragma mark - Unavailable initializers

/**
    Use `[MSALSignoutParameters initWithWebviewParameters:]` instead
 */
+ (instancetype)new NS_UNAVAILABLE;

/**
   Use `[MSALSignoutParameters initWithWebviewParameters:]` instead
*/
- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
