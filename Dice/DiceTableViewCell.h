//
//  DiceTableViewCell.h
//  Dice
//
//  Created by Damien Laughton on 30/10/2014.
//  Copyright (c) 2014 Damien Laughton. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum DiceTableViewCellScrollDirection : NSInteger {
    ScrollDirectionNone = 0,
    ScrollDirectionRight,
    ScrollDirectionLeft,
    ScrollDirectionUp,
    ScrollDirectionDown,
    ScrollDirectionCrazy,
} DiceTableViewCellScrollDirection;

#define DiceTableViewCellDirectionNotification @"DiceTableViewCellDirectionNotification"
#define DiceTableViewMaximumOffset 40.0f
#define DiceTableViewOffsetFactor 0.25f

@interface DiceTableViewCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UIImageView *imageViewBackground;

@end
