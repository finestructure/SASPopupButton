//
//  SASPopupButton.h
//
//  Created by Sven A. Schmidt on 28.02.12.
//  Copyright (c) 2012 abstracture GmbH & Co. KG. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SASPopupButton;


@protocol SASPopupButtonDelegate <NSObject>

- (void)dropdownButton:(SASPopupButton *)dropdownButton didSelectRow:(NSInteger)row inComponent:(NSInteger)component;

@end


@interface SASPopupButton : UIButton<UIPickerViewDelegate, UIPickerViewDataSource, UIPopoverControllerDelegate>

@property (nonatomic, weak) id<SASPopupButtonDelegate> delegate;
@property (nonatomic, retain) UIPopoverController *popover;
@property (nonatomic, retain) NSArray *values;
@property (assign) CGFloat pickerContentWidth;
@property (assign) NSInteger selectedRow;

@end
