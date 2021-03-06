/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UIActivityGroupViewControllerDelegate>, NSArray, NSDictionary, NSIndexPath, NSString, UILongPressGestureRecognizer, _UIActivityUserDefaults, _UIUserDefaultsActivity;

@interface UIActivityGroupViewController : UICollectionViewController <_UIActivityGroupViewDelegateFlowLayout, UIGestureRecognizerDelegate> {
    struct CGPoint { 
        float x; 
        float y; 
    NSArray *_activities;
    int _activityCategory;
    BOOL _activityIndexDidChangeWhileDragging;
    BOOL _allowsUserCustomization;
    NSDictionary *_customActivityTitles;
    BOOL _darkStyleOnLegacyApp;
    <UIActivityGroupViewControllerDelegate> *_delegate;
    UILongPressGestureRecognizer *_editingGestureRecognizer;
    BOOL _embedded;
    BOOL _hasActivities;
    NSIndexPath *_indexPathForMenuActivity;
    } _initialDraggingLocation;
    BOOL _picker;
    _UIActivityUserDefaults *_userDefaults;
    _UIUserDefaultsActivity *_userDefaultsActivity;
    NSArray *_visibleActivities;
}

@property(copy) NSArray * activities;
@property int activityCategory;
@property BOOL activityIndexDidChangeWhileDragging;
@property BOOL allowsUserCustomization;
@property(copy) NSDictionary * customActivityTitles;
@property BOOL darkStyleOnLegacyApp;
@property(copy,readonly) NSString * debugDescription;
@property <UIActivityGroupViewControllerDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(retain) UILongPressGestureRecognizer * editingGestureRecognizer;
@property(getter=isEmbedded) BOOL embedded;
@property BOOL hasActivities;
@property(readonly) unsigned int hash;
@property(copy) NSIndexPath * indexPathForMenuActivity;
@property struct CGPoint { float x1; float x2; } initialDraggingLocation;
@property(getter=isPicker) BOOL picker;
@property(readonly) Class superclass;
@property(retain) _UIActivityUserDefaults * userDefaults;
@property(retain) _UIUserDefaultsActivity * userDefaultsActivity;
@property(copy) NSArray * visibleActivities;

- (struct CGSize { float x1; float x2; })_preferredCellSize;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_preferredSectionInset;
- (void)_setActivities:(id)arg1 animated:(BOOL)arg2;
- (void)_setVisibleActivities:(id)arg1 animated:(BOOL)arg2;
- (void)_updateVisibleActivitiesAnimated:(BOOL)arg1;
- (id)activities;
- (int)activityCategory;
- (id)activityForItemAtIndexPath:(id)arg1;
- (id)activityGroupViewLayout;
- (BOOL)activityIndexDidChangeWhileDragging;
- (void)activityUserDefaultsDidChange:(id)arg1;
- (BOOL)allowsUserCustomization;
- (BOOL)canBecomeFirstResponder;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3;
- (id)collectionView:(id)arg1 layout:(id)arg2 moveItemAtIndexPath:(id)arg3 toIndexPath:(id)arg4;
- (id)collectionView:(id)arg1 layout:(id)arg2 needsContainerViewForDraggingItemAtIndexPath:(id)arg3;
- (struct CGSize { float x1; float x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(int)arg3;
- (struct CGSize { float x1; float x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(int)arg3;
- (struct CGSize { float x1; float x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)customActivityTitles;
- (BOOL)darkStyleOnLegacyApp;
- (void)dealloc;
- (id)delegate;
- (id)editingGestureRecognizer;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleEditingGesture:(id)arg1;
- (BOOL)hasActivities;
- (void)hideActivity:(id)arg1;
- (void)hideItemAtIndexPath:(id)arg1;
- (void)ignoreUserDefaultsChangesWhileUsingBlock:(id)arg1;
- (id)indexPathForMenuActivity;
- (id)initWithActivityCategory:(int)arg1 userDefaults:(id)arg2 userDefaultsIdentifier:(id)arg3;
- (id)initWithActivityCategory:(int)arg1 userDefaults:(id)arg2;
- (struct CGPoint { float x1; float x2; })initialDraggingLocation;
- (BOOL)isEmbedded;
- (BOOL)isPicker;
- (void)registerForActivityUserDefaultsChanges;
- (void)reloadItemForActivityOfTypeIfNeeded:(id)arg1;
- (void)renameActivity:(id)arg1;
- (void)setActivities:(id)arg1 animated:(BOOL)arg2;
- (void)setActivities:(id)arg1;
- (void)setActivityCategory:(int)arg1;
- (void)setActivityIndexDidChangeWhileDragging:(BOOL)arg1;
- (void)setAllowsUserCustomization:(BOOL)arg1;
- (void)setCustomActivityTitles:(id)arg1;
- (void)setDarkStyleOnLegacyApp:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setEditingGestureRecognizer:(id)arg1;
- (void)setEmbedded:(BOOL)arg1;
- (void)setHasActivities:(BOOL)arg1;
- (void)setIndexPathForMenuActivity:(id)arg1;
- (void)setInitialDraggingLocation:(struct CGPoint { float x1; float x2; })arg1;
- (void)setPicker:(BOOL)arg1;
- (void)setUserDefaults:(id)arg1;
- (void)setUserDefaultsActivity:(id)arg1;
- (void)setVisibleActivities:(id)arg1;
- (id)targetIndexPathForMoveFromRowAtIndexPath:(id)arg1 toProposedIndexPath:(id)arg2;
- (void)unregisterForActivityUserDefaultsChanges;
- (id)userDefaults;
- (id)userDefaultsActivity;
- (void)viewDidLoad;
- (id)visibleActivities;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end
