//
//  WBBladesScanManager+CrashSymbol.h
//  WBBlades
//
//  Created by 邓竹立 on 2019/12/30.
//  Copyright © 2019 邓竹立. All rights reserved.
//

#import "WBBladesScanManager.h"

NS_ASSUME_NONNULL_BEGIN

@interface WBBladesScanManager (CrashSymbol)

+ (void)scanAllClassMethodList:(NSData *)fileData crashPlistPath:(NSString *)crashAddressPath;

@end

NS_ASSUME_NONNULL_END