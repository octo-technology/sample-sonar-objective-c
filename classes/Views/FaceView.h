//
//  FaceView.h
//  Happiness
//
//  Created by François HELG on 1/17/12.
//  Copyright (c) 2012 François Helg. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FaceView; // forward reference to allow us to use FaceView type in protocol

@protocol FaceViewDataSource 
- (float)smileForFaceView:(FaceView *)sender;
@end

@interface FaceView : UIView

@property (nonatomic) CGFloat scale;
@property (nonatomic, weak) IBOutlet id <FaceViewDataSource> dataSource;

- (void)pinch:(UIPinchGestureRecognizer *)gesture;

@end
