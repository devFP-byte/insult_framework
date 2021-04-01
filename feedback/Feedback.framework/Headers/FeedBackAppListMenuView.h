//
//  FeedBackAppListMenuView.h
//  feedback
//
//  Created by 李焱 on 2021/3/25.
//

#import <UIKit/UIKit.h>
#import "FeedbackProductBean.h"
#import "UIColor+Hex.h"
#import <Masonry/Masonry.h>
#import "FeedBackCollectionViewCell.h"

NS_ASSUME_NONNULL_BEGIN

@protocol FeedBackAppListMenuViewDelegate <NSObject>

- (void)chooseProductResult:(FeedbackProductBean*)bean;

@end

@interface FeedBackAppListMenuView : UIView

@property(nonatomic, strong) UICollectionView *collectionView;
@property(nonatomic, weak) id<FeedBackAppListMenuViewDelegate> delegate;

- (void)showWithList:(NSArray *)list;
- (void)hide;

- (BOOL)isShow;

@end

NS_ASSUME_NONNULL_END
