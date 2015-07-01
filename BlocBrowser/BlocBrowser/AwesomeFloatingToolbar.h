//
//  AwesomeFloatingToolbar.h
//  BlocBrowser
//
//  Created by Thanhduy Tran on 6/16/15.
//  Copyright (c) 2015 Bloc. All rights reserved.
//

#import <UIKit/UIKit.h>

@class AwesomeFloatingToolbar;

@protocol AwesomeFloatingToolbarDelegate <NSObject>

@optional

- (void) floatingToolbar:(AwesomeFloatingToolbar *)toolbar didSelectButtonWithTitle:(NSString *)title;
- (void) floatingToolbar:(AwesomeFloatingToolbar *)toolbar didTryToPanWithOffset:(CGPoint)offset;
- (void) floatingToolbar:(AwesomeFloatingToolbar *)toolbar didTryToPinchWithRecognizer:(UIPinchGestureRecognizer *)recognizer;

@end

@interface AwesomeFloatingToolbar : UIView

@property (nonatomic, strong) NSArray *buttons;
- (instancetype) initWithFourTitles:(NSArray *)titles;

- (void) setEnabled:(BOOL)enabled forButtonWithTitle:(NSString *)title;
- (UIColor *) backgroundColorAtIndex:(NSInteger)index;

@property (nonatomic, weak) id <AwesomeFloatingToolbarDelegate> delegate;

@end
