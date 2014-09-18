/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSObject, NSString, UIKBRenderConfig, UIKBTree, UITextInputTraits;

@interface UIKBBackgroundView : UIKBSplitImageView <UIKBCacheableView> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    NSObject *_geometryCacheKey;
    UITextInputTraits *_inputTraits;
    UIKBTree *_keyplane;
    UIKBRenderConfig *_renderConfig;
    } _splitLeftCacheRect;
    } _splitLeftRect;
    } _splitRightCacheRect;
    } _splitRightRect;
    int _topCorners;
    int _visualStyle;
    bool_centerFilled;
    bool_hasCandidateKeys;
    bool_isSplit;
}

@property(readonly) bool cacheDeferable;
@property(readonly) NSString * cacheKey;
@property(readonly) double cachedWidth;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain) NSObject * geometryCacheKey;
@property(readonly) unsigned long long hash;
@property(readonly) bool keepNonPersistent;
@property(retain) UIKBRenderConfig * renderConfig;
@property(readonly) Class superclass;

- (bool)cacheDeferable;
- (id)cacheKey;
- (id)cacheKeysForRenderFlags:(id)arg1;
- (double)cachedWidth;
- (void)dealloc;
- (void)displayLayer:(id)arg1;
- (void)drawContentsOfRenderers:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)geometryCacheKey;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)keepNonPersistent;
- (void)layoutSubviews;
- (void)refreshStyleForKeyplane:(id)arg1 inputTraits:(id)arg2;
- (id)renderConfig;
- (void)setGeometryCacheKey:(id)arg1;
- (void)setRenderConfig:(id)arg1;

@end