//
//  TestViewController.h
//  Test
//
//  Created by Jose Luis Campaña on 08/01/13.
//  Copyright (c) 2013 Jose Luis Campaña. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SpeechToTextModule.h"

@interface TestViewController : UIViewController <SpeechToTextModuleDelegate,UIGestureRecognizerDelegate>
@property (nonatomic, strong) SpeechToTextModule *speech;

@property (strong, nonatomic) IBOutlet UIButton *btnRec;
@property (strong, nonatomic) IBOutlet UITextView *texto;
@property (strong, nonatomic) IBOutlet UIActivityIndicatorView *activityIndicator;

- (IBAction)push:(id)sender;
- (IBAction)pop:(id)sender;

@end
