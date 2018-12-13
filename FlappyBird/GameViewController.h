//
//  GameViewController.h
//  FlappyBird
//
//  Created by 张瑾 on 2018/12/13.
//  Copyright © 2018 ZJ. All rights reserved.
//

#import "ViewController.h"

@interface GameViewController : UIViewController
@property (weak, nonatomic) IBOutlet UILabel *scoreLabel;
@property (weak, nonatomic) IBOutlet UIButton *startButton;
@property (weak, nonatomic) IBOutlet UIButton *exitButton;
@property (weak, nonatomic) IBOutlet UIImageView *bird;
@property (weak, nonatomic) IBOutlet UIImageView *top;
@property (weak, nonatomic) IBOutlet UIImageView *bottom;
@property (weak, nonatomic) IBOutlet UIImageView *topTunnel;
@property (weak, nonatomic) IBOutlet UIImageView *bottomTunnel;
@property (weak, nonatomic) NSTimer *birdMovement;
@property (weak, nonatomic) NSTimer *tunnelMovement;

@end

