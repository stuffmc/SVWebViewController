//
//  SVModalWebViewController.h
//
//  Created by Oliver Letterer on 13.08.11.
//  Copyright 2011 Home. All rights reserved.
//
//  https://github.com/samvermette/SVWebViewController

#import <UIKit/UIKit.h>

enum {
    SVWebViewControllerAvailableActionsNone             = 0,
    SVWebViewControllerAvailableActionsOpenInSafari     = 1 << 0,
    SVWebViewControllerAvailableActionsMailLink         = 1 << 1,
    SVWebViewControllerAvailableActionsCopyLink         = 1 << 2,
    SVWebViewControllerAvailableActionsOpenInChrome     = 1 << 3
};

typedef NSUInteger SVWebViewControllerAvailableActions;

enum {
    SVWebViewControllerLeftBarButtonItem,
    SVWebViewControllerRightBarButtonItem
};

typedef NSUInteger SVWebViewControllerBarButtonItemPosition;

@class SVWebViewController;

@interface SVModalWebViewController : UINavigationController

- (id)initWithAddress:(NSString*)urlString;
- (id)initWithURL:(NSURL *)URL;
- (id)initWithAddress:(NSString*)urlString hidingToolbar:(BOOL)toobarHidden;
- (id)initWithURL:(NSURL *)URL hidingToolbar:(BOOL)toobarHidden;

@property (nonatomic, strong) UIColor *barsTintColor;
@property (nonatomic, readwrite) SVWebViewControllerAvailableActions availableActions;
@property (nonatomic, readwrite) SVWebViewControllerBarButtonItemPosition barButtonItemPosition;
@property (nonatomic, strong) UIBarButtonItem *barButtonItem;

@end
