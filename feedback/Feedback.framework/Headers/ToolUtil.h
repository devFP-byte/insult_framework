//
//  ToolUtil.h
//  feedback
//
//  Created by 李焱 on 2021/3/26.
//

#import <Foundation/Foundation.h>
#import <AFNetworking/AFNetworkReachabilityManager.h>
#import <CoreTelephony/CTCarrier.h>
#import <CoreTelephony/CTTelephonyNetworkInfo.h>
#import <UIKit/UIKit.h>


NS_ASSUME_NONNULL_BEGIN

@interface ToolUtil : NSObject


+ (NSString *)getNetType;
+ (NSData *)compressImage:(UIImage *)image withMaxLength:(NSInteger)maxLength;
+ (Boolean)isAvailableEmail:(NSString *)email;

@end

NS_ASSUME_NONNULL_END
