//
//  YLMenuCell.h
//  iOSExperience
//
//  Created by Ben Lv on 2018/6/27.
//  Copyright © 2018年 avatar. All rights reserved.
//

#import <UIKit/UIKit.h>
@class YLMenuCellModel;
@interface YLMenuCell : UITableViewCell

@property(nonatomic,strong)YLMenuCellModel *model;
@property(nonatomic,strong)UIImageView *icon;
@property(nonatomic,strong)UILabel *nickNameLab;
@property(nonatomic,strong)UILabel *markLab;
@end
