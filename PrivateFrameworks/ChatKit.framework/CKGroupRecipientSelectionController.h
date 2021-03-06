/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSString, UIBarButtonItem;

@interface CKGroupRecipientSelectionController : CKRecipientSelectionController <CKRecipientSelectionControllerDelegate> {
    UIBarButtonItem *_doneButton;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain) UIBarButtonItem * doneButton;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void)_frecencySearch;
- (void)_updateNavigationButton;
- (BOOL)alwaysShowSearchResultsTable;
- (void)dealloc;
- (id)doneButton;
- (BOOL)homogenizePreferredServiceForiMessage;
- (id)initWithConversation:(id)arg1;
- (void)loadView;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })navigationBarInsetsForRecipientSelectionController:(id)arg1;
- (BOOL)peoplePickerShouldUsePopovers;
- (void)recipientAvailibilitiesDidUpdate;
- (void)recipientSelectionController:(id)arg1 didFinishAvailaiblityLookupForRecipient:(id)arg2;
- (void)recipientSelectionController:(id)arg1 textDidChange:(id)arg2;
- (void)recipientSelectionControllerDidChange;
- (void)recipientSelectionControllerDidChangeSize:(id)arg1;
- (void)recipientSelectionControllerDidPushABViewController:(id)arg1;
- (void)recipientSelectionControllerRequestDismissKeyboard:(id)arg1;
- (void)recipientSelectionControllerReturnPressed:(id)arg1;
- (void)recipientSelectionControllerSearchListDidShowOrHide:(id)arg1;
- (BOOL)searchListShouldUsePopvoers;
- (void)setDoneButton:(id)arg1;
- (BOOL)shouldAutorotate;
- (BOOL)shouldSuppressSearchResultsTable;
- (void)viewDidAppearDeferredSetup;
- (void)viewWillAppear:(BOOL)arg1;

@end
