/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSNumber, NSString, NSURL;

@interface SSVContentLink : NSObject {
    NSString *_categoryName;
    int _contentKind;
    NSNumber *_itemIdentifier;
    NSString *_itemTitle;
    NSString *_providerName;
    NSString *_searchTerm;
    int _targetApplication;
}

@property(readonly) NSURL * URL;
@property(copy) NSString * categoryName;
@property int contentKind;
@property(copy) NSNumber * itemIdentifier;
@property(copy) NSString * itemTitle;
@property(copy) NSString * providerName;
@property(copy) NSString * searchTerm;
@property int targetApplication;

- (void).cxx_destruct;
- (id)URL;
- (id)_URLSchemeWithApplication:(int)arg1;
- (id)_stringForContentKind:(int)arg1;
- (int)_targetApplicationWithContentKind:(int)arg1;
- (id)categoryName;
- (int)contentKind;
- (id)itemIdentifier;
- (id)itemTitle;
- (id)providerName;
- (id)searchTerm;
- (void)setCategoryName:(id)arg1;
- (void)setContentKind:(int)arg1;
- (void)setItemIdentifier:(id)arg1;
- (void)setItemTitle:(id)arg1;
- (void)setProviderName:(id)arg1;
- (void)setSearchTerm:(id)arg1;
- (void)setTargetApplication:(int)arg1;
- (int)targetApplication;

@end
