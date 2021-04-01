//
//  WkWebViewController.h
//  feedback
//
//  Created by 李焱 on 2021/3/18.
//

#import <UIKit/UIKit.h>
#import <WebKit/WKWebView.h>
#import <WebKit/WKWebViewConfiguration.h>
#import <WebKit/WKUserContentController.h>
#import <WebKit/WKPreferences.h>
#import <WebKit/WKScriptMessage.h>
#import <WebKit/WKScriptMessageHandler.h>
#import <Masonry/Masonry.h>

NS_ASSUME_NONNULL_BEGIN

@interface WkWebViewController : UIViewController

@property(nonatomic, strong) WKWebView *wkWebView;

- (void)initSubView;

@end

NS_ASSUME_NONNULL_END
