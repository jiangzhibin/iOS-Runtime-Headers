/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@class <ADDimmerViewDelegate>, ADTapGestureRecognizer;

@interface ADDimmerView : UIView {
    <ADDimmerViewDelegate> *_delegate;
    BOOL _dimmed;
    ADTapGestureRecognizer *_gestureRecognizer;
}

@property <ADDimmerViewDelegate> * delegate;
@property BOOL dimmed;
@property(readonly) BOOL enabled;
@property(retain) ADTapGestureRecognizer * gestureRecognizer;

- (void)_tapRecognized:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (BOOL)dimmed;
- (BOOL)enabled;
- (id)gestureRecognizer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setDimmed:(BOOL)arg1;
- (void)setGestureRecognizer:(id)arg1;

@end
