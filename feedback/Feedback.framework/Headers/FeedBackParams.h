//
//  FeedBackParams.h
//  feedback
//
//  Created by 李焱 on 2021/3/25.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface FeedBackParams : NSObject

@property(nonatomic, strong) NSString *appId;   // 必填
@property(nonatomic, strong) NSString *uuId;    // 必填
@property(nonatomic, assign) NSInteger productId;   // 必填
@property(nonatomic, assign) NSInteger buyChannel;  // 选填

@property(nonatomic, strong) UIColor *viewBackGroundColor;
@property(nonatomic, strong) UIColor *navigationTitleColor;
@property(nonatomic, strong) UIColor *titleColor;
@property(nonatomic, strong) UIColor *textViewBackGroundColor;
@property(nonatomic, strong) UIColor *placeHolderColor;
@property(nonatomic, strong) UIColor *textViewTextColor;
@property(nonatomic, strong) UIColor *textViewTintColor;
@property(nonatomic, strong) UIColor *submitBackGroundColor;
@property(nonatomic, strong) UIImage *attachmentBtnImage;


@end

NS_ASSUME_NONNULL_END
