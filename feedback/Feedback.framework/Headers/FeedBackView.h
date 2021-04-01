//
//  FeedBackView.h
//  feedback
//
//  Created by 李焱 on 2021/3/18.
//

#import <UIKit/UIKit.h>
#import "FeedbackProductBean.h"
#import "FeedBackTopicBean.h"

NS_ASSUME_NONNULL_BEGIN

@protocol FeedBackViewDelegate <NSObject>

- (void)backBtnClick;
- (void)attachmentClick;
- (void)attachmentDeleteClick;
- (void)submitClick:(NSString *)content :(NSString *)email;
- (void)appClick;
- (void)topicClick;

@end

@interface FeedBackView : UIView

- (instancetype)initWithFrame:(CGRect)frame withFromH5:(BOOL)fromH5;
@property(nonatomic, assign) BOOL fromH5;
@property(nonatomic, weak) id<FeedBackViewDelegate> delegate;

- (void)initView;
- (void)setupAttachment:(UIImage *)image;
- (void)setChooseProduct:(FeedbackProductBean *)bean;
- (void)setChooseTopic:(FeedBackTopicBean *)bean;

@end

NS_ASSUME_NONNULL_END
