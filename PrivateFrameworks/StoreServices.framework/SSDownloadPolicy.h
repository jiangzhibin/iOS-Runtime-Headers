/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSArray, NSMutableArray, NSString;

@interface SSDownloadPolicy : NSObject <NSCoding, SSXPCCoding, NSCopying> {
    long long _bagType;
    NSString *_downloadKind;
    NSMutableArray *_policyRules;
}

@property(readonly) long long URLBagType;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) NSString * downloadKind;
@property(readonly) unsigned long long hash;
@property(copy) NSArray * policyRules;
@property(readonly) Class superclass;

- (long long)URLBagType;
- (id)_policyRuleForSizeLimit:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)downloadKind;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDownloadKind:(id)arg1 URLBagType:(long long)arg2;
- (id)initWithNetworkConstraints:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)policyRules;
- (void)setPolicyRule:(id)arg1;
- (void)setPolicyRules:(id)arg1;
- (void)unionNetworkConstraints:(id)arg1;
- (void)unionPolicyRule:(id)arg1;

@end