/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSDate, NSString;

@interface PKPaymentMessage : NSObject <NSSecureCoding> {
    BOOL _allowDeepLink;
    NSString *_content;
    NSDate *_expirationDate;
    BOOL _expiresOnNextTransaction;
    NSString *_identifier;
    NSDate *_messageDate;
}

@property BOOL allowDeepLink;
@property(copy) NSString * content;
@property(copy) NSDate * expirationDate;
@property BOOL expiresOnNextTransaction;
@property(copy) NSString * identifier;
@property(copy) NSDate * messageDate;

+ (id)paymentMessageWithDictionary:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (BOOL)allowDeepLink;
- (id)content;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (BOOL)expiresOnNextTransaction;
- (unsigned int)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToPaymentMessage:(id)arg1;
- (id)messageDate;
- (void)setAllowDeepLink:(BOOL)arg1;
- (void)setContent:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setExpiresOnNextTransaction:(BOOL)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMessageDate:(id)arg1;

@end
