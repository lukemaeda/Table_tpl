//
//  DetailViewController.h
//  Table_tpl
//
//  Created by MAEDA HAJIME on 2014/04/07.
//  Copyright (c) 2014年 MAEDA HAJIME. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
