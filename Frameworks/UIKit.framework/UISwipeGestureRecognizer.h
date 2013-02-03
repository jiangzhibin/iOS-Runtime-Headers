/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISwipeGestureRecognizer : UIGestureRecognizer {
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    unsigned int _trackingTouch : 1;
    unsigned int _tableViewGesture : 1;
    double _maximumDuration;
    float _maximumHorizontalMovement;
    float _maximumVerticalMovement;
    float _minimumHorizontalMovement;
    float _minimumVerticalMovement;
    float _rateOfMaximumMovementDecay;
    float _rateOfMinimumMovementDecay;
    } _startContentOffset;
    } _startLocation;
    double _startTime;
}

@property double maximumDuration;
@property float maximumHorizontalMovement;
@property float maximumVerticalMovement;
@property float minimumHorizontalMovement;
@property float minimumVerticalMovement;
@property float rateOfMaximumMovementDecay;
@property float rateOfMinimumMovementDecay;
@property(readonly) CGPoint startPoint;

- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (BOOL)isTableViewGesture;
- (double)maximumDuration;
- (float)maximumHorizontalMovement;
- (float)maximumVerticalMovement;
- (float)minimumHorizontalMovement;
- (float)minimumVerticalMovement;
- (float)rateOfMaximumMovementDecay;
- (float)rateOfMinimumMovementDecay;
- (void)reset;
- (void)setMaximumDuration:(double)arg1;
- (void)setMaximumHorizontalMovement:(float)arg1;
- (void)setMaximumVerticalMovement:(float)arg1;
- (void)setMinimumHorizontalMovement:(float)arg1;
- (void)setMinimumVerticalMovement:(float)arg1;
- (void)setRateOfMaximumMovementDecay:(float)arg1;
- (void)setRateOfMinimumMovementDecay:(float)arg1;
- (void)setTableViewGesture:(BOOL)arg1;
- (struct CGPoint { float x1; float x2; })startPoint;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end