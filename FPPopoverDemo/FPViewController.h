//
//  FPViewController.h
//  FPPopoverDemo
//
//  Created by Alvise Susmel on 4/13/12.
//  Copyright (c) 2012 Fifty Pixels Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FPPopoverController.h"

@interface FPViewController : UIViewController <FPPopoverControllerDelegate>
{
    
}

@property (nonatomic, retain) FPPopoverController *popover;

@property (weak, nonatomic) IBOutlet UIButton *noArrow;
@property (weak, nonatomic) IBOutlet UIButton *transparentPopover;
@property (weak, nonatomic) IBOutlet UIButton *noTitle;

-(IBAction)topLeft:(id)sender;
-(IBAction)topCenter:(id)sender;
-(IBAction)topRight:(id)sender;

-(IBAction)lt:(id)sender;
-(IBAction)rt:(id)sender;


-(IBAction)midLeft:(id)sender;
-(IBAction)midCenter:(id)sender;
-(IBAction)midRight:(id)sender;

-(IBAction)bottomLeft:(id)sender;
-(IBAction)bottomCenter:(id)sender;
-(IBAction)bottomRight:(id)sender;

-(IBAction)goToTableView:(id)sender;

-(void)selectedTableRow:(NSUInteger)rowNum;

-(IBAction)noArrow:(id)sender;
-(IBAction)popover:(id)sender;
-(IBAction)noTitle:(id)sender;

@end
