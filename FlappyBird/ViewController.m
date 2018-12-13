//
//  ViewController.m
//  FlappyBird
//
//  Created by 张瑾 on 2018/12/13.
//  Copyright © 2018 ZJ. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

NSInteger HighScore;

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    HighScore = [[NSUserDefaults standardUserDefaults] integerForKey:@"HighScore"];
    self.highScore.text = [NSString stringWithFormat:@"High Score: %li", (long)HighScore];
    // Do any additional setup after loading the view, typically from a nib.
}


@end
