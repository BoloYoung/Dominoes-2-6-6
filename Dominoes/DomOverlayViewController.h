/*==============================================================================
 Copyright (c) 2010-2013 QUALCOMM Austria Research Center GmbH.
 All Rights Reserved.
 Qualcomm Confidential and Proprietary
 ==============================================================================*/

#import <Foundation/Foundation.h>
#import "OverlayViewController.h"

//  DomOverlayViewController overrides populateActionSheet method to add
//  single-shot autofocus functionality

@interface DomOverlayViewController : OverlayViewController <UIActionSheetDelegate>
{
}

@end
