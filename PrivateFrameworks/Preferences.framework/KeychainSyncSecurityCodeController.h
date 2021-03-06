/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSString, UIButton, UILabel;

@interface KeychainSyncSecurityCodeController : KeychainSyncTextEntryController {
    NSString *_firstPasscodeEntry;
    UIButton *_footerButton;
    UILabel *_footerLabel;
    NSString *_generatedCode;
    float _keyboardHeight;
    int _mode;
    int _securityCodeType;
    BOOL _showsAdvancedSettings;
}

@property(retain) NSString * firstPasscodeEntry;
@property int mode;
@property int securityCodeType;
@property BOOL showsAdvancedSettings;

- (void)animatePasscodeFieldLeft:(BOOL)arg1;
- (void)dealloc;
- (void)didFinishEnteringText:(id)arg1;
- (void)dismissAlerts;
- (id)firstPasscodeEntry;
- (void)forgotSecurityCode;
- (void)generateRandomCode;
- (id)init;
- (void)keyboardWillShow:(id)arg1;
- (int)mode;
- (id)placeholderText;
- (int)securityCodeType;
- (void)setFirstPasscodeEntry:(id)arg1;
- (void)setMode:(int)arg1;
- (void)setSecurityCodeType:(int)arg1;
- (void)setShowsAdvancedSettings:(BOOL)arg1;
- (void)showAdvancedOptions;
- (BOOL)showsAdvancedSettings;
- (id)specifiers;
- (id)textEntryCell;
- (Class)textEntryCellClass;
- (void)textEntryViewDidChange:(id)arg1;
- (void)updateNextButton;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end
