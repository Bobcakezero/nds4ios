//
//  NDSMasterViewController.h
//  nds4ios
//
//  Created by InfiniDev on 6/9/13.
//  Copyright (c) 2013 InfiniDev. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RSTFileBrowserViewController.h"
#import "NDSEmulatorViewController.h"

@interface NDSROMTableViewController : RSTFileBrowserViewController
{
    NDSEmulatorViewController *currentEmulatorViewController;
}

@end
