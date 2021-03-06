/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class <PUActivityViewControllerDelegate>, NSArray, NSString, PLProgressView, PUActivityItemSourceController, PUProgressIndicatorView;

@interface PUActivityViewController : UIActivityViewController <PLDismissableViewController> {
    struct __CFString { } *_aggregateKey;
    float _currentAssetPreparationProgress;
    <PUActivityViewControllerDelegate> *_delegate;
    PUActivityItemSourceController *_itemSourceController;
    int _numberOfAssetPreparationsCompleted;
    int _numberOfAssetsToPrepare;
    NSArray *_photosActivities;
    PUProgressIndicatorView *_preparationProgressView;
    PLProgressView *_remakerProgressView;
}

@property(copy,readonly) NSString * debugDescription;
@property <PUActivityViewControllerDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) NSArray * photosActivities;
@property(readonly) Class superclass;

+ (id)_defaultActivityTypeOrder;
+ (BOOL)_isOutboundShareActivity:(id)arg1;
+ (id)photosApplicationActivities;
+ (void)trackUserActivity:(id)arg1 forAssets:(id)arg2;

- (void).cxx_destruct;
- (void)_cancel;
- (void)_handleUserCancelWithCompletion:(id)arg1;
- (void)_performActivity:(id)arg1;
- (void)_prepareActivity:(id)arg1;
- (void)_prepareAssetProgressForActivity:(id)arg1;
- (void)_puActivity:(id)arg1 didComplete:(BOOL)arg2;
- (void)_removePreparationProgressView;
- (void)_removeRemakerProgressView;
- (void)_sharingManagerDidBeginPublishing:(id)arg1;
- (BOOL)_shouldShowSystemActivity:(id)arg1;
- (void)_showPreparationProgressView:(id)arg1 withCancelationHandler:(id)arg2;
- (void)_showRemakerProgressView:(id)arg1 forMail:(BOOL)arg2 withCancelationHandler:(id)arg3;
- (void)_showSharingWasInterruptedWithCompletion:(id)arg1;
- (void)addAsset:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithAssets:(id)arg1 photosApplicationActivities:(id)arg2;
- (void)mailActivity:(id)arg1 displayVideoRemakerProgressView:(id)arg2;
- (id)photosActivities;
- (BOOL)prepareForDismissingForced:(BOOL)arg1;
- (void)removeAsset:(id)arg1;
- (void)setAggregateKey:(struct __CFString { }*)arg1;
- (void)setAssets:(id)arg1;
- (void)setCompletionWithItemsHandler:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)updateVisibleShareActions;

@end
