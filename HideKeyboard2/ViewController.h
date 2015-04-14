//
//  ViewController.h
//  HideKeyboard2
//
//  Created by Frank Desimini on 2015-04-13.
//  Copyright (c) 2015 Eff Dee Productions. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (strong, nonatomic) IBOutlet UITextField *textField;

- (IBAction)textFieldReturn:(id)sender;

@end

