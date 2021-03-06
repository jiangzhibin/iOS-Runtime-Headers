/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class ISStoreURLOperation, NSArray, NSString, SUClientInterface, SUScriptTextFieldDelegate, SUSearchDisplayController, SUSearchFieldConfiguration, UIControl, UISearchBar;

@interface SUSearchFieldController : NSObject <ISStoreURLOperationDelegate, SUScriptTextFieldDelegate, UISearchDisplayDelegate, UITableViewDataSource, UITableViewDelegate> {
    SUClientInterface *_clientInterface;
    NSArray *_completions;
    ISStoreURLOperation *_completionsOperation;
    SUSearchFieldConfiguration *_configuration;
    UIControl *_dimmerView;
    UISearchBar *_searchBar;
    SUSearchDisplayController *_searchController;
    int _searchFieldStyle;
    SUScriptTextFieldDelegate *_textFieldDelegate;
}

@property(getter=isActive,readonly) BOOL active;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) UISearchBar * searchBar;
@property(copy) SUSearchFieldConfiguration * searchFieldConfiguration;
@property int searchFieldStyle;
@property(readonly) Class superclass;

- (id)_cancelButtonView;
- (void)_cancelCompletionsOperation;
- (id)_defaultSearchTerm;
- (void)_dimmerViewAction:(id)arg1;
- (void)_fetchCompletions;
- (void)_fetchResultsForTerm:(id)arg1 URL:(id)arg2;
- (void)_fetchResultsForURLRequestProperties:(id)arg1;
- (BOOL)_focusTransientViewController;
- (id)_newBlankStorePageViewController;
- (id)_newSearchBar;
- (id)_newSearchDisplayControllerWithContentsController:(id)arg1;
- (id)_newTransientViewController;
- (void)_reloadCompletionsForSearchString:(id)arg1;
- (void)_reloadSearchBar;
- (void)_resizeSearchBarForOrientation:(int)arg1;
- (void)_saveSearchTermToDefaults:(id)arg1;
- (void)_savedSearchTermChangedNotification:(id)arg1;
- (id)_searchGroupForSearchKind:(id)arg1;
- (void)_sendOnXEventWithTerm:(id)arg1 URL:(id)arg2 completionBlock:(id)arg3;
- (void)_showDimmerView;
- (id)_targetViewController;
- (void)_tearDownDimmerView;
- (void)dealloc;
- (void)handleSearchURL:(id)arg1 withSourceApplication:(id)arg2 sourceURL:(id)arg3;
- (id)init;
- (id)initWithContentsController:(id)arg1 clientInterface:(id)arg2 style:(int)arg3;
- (id)initWithContentsController:(id)arg1 clientInterface:(id)arg2;
- (id)initWithContentsController:(id)arg1 style:(int)arg2;
- (id)initWithContentsController:(id)arg1;
- (BOOL)isActive;
- (id)newRequestPropertiesWithSearchTerm:(id)arg1 kind:(id)arg2;
- (id)newRequestPropertiesWithSearchTerm:(id)arg1;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)operationDidFinish:(id)arg1;
- (void)scriptDidChangeTextForField:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (id)searchBar;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (BOOL)searchBarShouldBeginEditing:(id)arg1;
- (BOOL)searchBarShouldEndEditing:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarWillRemoveFromSuperview:(id)arg1;
- (BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (id)searchFieldConfiguration;
- (int)searchFieldStyle;
- (void)setSearchFieldConfiguration:(id)arg1;
- (void)setSearchFieldStyle:(int)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1;

@end
