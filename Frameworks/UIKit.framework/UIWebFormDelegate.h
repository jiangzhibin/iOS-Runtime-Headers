/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIWebFormCompletionController, <UIBrowserDocumentController>, NSMutableDictionary;



@interface UIWebFormDelegate : NSObject <WebFormDelegate>
{
    UIWebFormCompletionController *_completionController;
    <UIBrowserDocumentController> *_controller;
    NSMutableDictionary *_editedForms;
}


- (void)textDidChangeInTextArea:(id)arg1 inFrame:(id)arg2;
- (void)textDidChangeInTextField:(id)arg1 inFrame:(id)arg2;
- (void)textFieldDidBeginEditing:(id)arg1 inFrame:(id)arg2;
- (void)textFieldDidEndEditing:(id)arg1 inFrame:(id)arg2;
- (BOOL)textField:(id)arg1 doCommandBySelector:(SEL)arg2 inFrame:(id)arg3;
- (void)dataSourceHasChangedForFrame:(id)arg1;
- (BOOL)formWasEdited;
- (void)formWillHide;
- (void)frameLayoutHasChanged:(id)arg1;
- (void)_didEditFormElement:(id)arg1 inFrame:(id)arg2;
- (BOOL)_shouldIgnoreFormTextChangesInFrame:(id)arg1;
- (void)_clearEditedFormsInFrame:(id)arg1;
- (void)autoFillWithElementValue;
- (void)frame:(id)arg1 sourceFrame:(id)arg2 willSubmitForm:(id)arg3 withValues:(id)arg4 submissionListener:(id)arg5;
- (id)initWithController:(id)arg1;
- (void)setController:(id)arg1;
- (void)acceptedAutoFillWord:(id)arg1;
- (struct { id x1; NSUInteger x2; })suggestionsForString:(id)arg1 inputIndex:(NSUInteger)arg2;
- (BOOL)hasCurrentSuggestions;
- (void)dealloc;

@end