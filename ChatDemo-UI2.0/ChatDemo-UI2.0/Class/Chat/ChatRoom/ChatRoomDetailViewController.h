//
//  ChatRoomDetailViewController.h
//  ChatDemo-UI2.0
//
//  Created by dhcdht on 14-5-31.
//  Copyright (c) 2014年 dhcdht. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ChatRoomContactView : UIView
{
    UIButton *_deleteButton;
    UILabel *_nameLabel;
}

@property (nonatomic) NSInteger index;
@property (nonatomic) BOOL editing;
@property (strong, nonatomic) NSString *title;
@property (strong, nonatomic) UIImageView *imageView;
@property (copy) void (^deleteContact)(NSInteger index);

@end

@interface ChatRoomDetailViewController : UITableViewController

- (instancetype)initWithAdmin:(BOOL)isAdmin;

@end