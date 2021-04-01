//
//  FeedBackSdk.h
//  feedback
//
//  Created by 李焱 on 2021/3/23.
//

#import <Foundation/Foundation.h>
#import "WkWebViewController.h"
#import "FeedBackViewController.h"
#import "FeedBackParams.h"

NS_ASSUME_NONNULL_BEGIN

typedef void(^ParamsCallBack)(FeedBackParams*);

@interface FeedBackSdk : NSObject

@property(nonatomic, strong) FeedBackParams *params;

+(instancetype)shareInstance;
- (void)updateParams:(ParamsCallBack)callBack;
- (void)showInController:(UIViewController *)vc needH5:(BOOL)needH5;

@end

NS_ASSUME_NONNULL_END
