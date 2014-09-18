/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSString;

@interface SAValueCondition : AceObject <SASupportCondition> {
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(copy) NSArray * legalValues;
@property(readonly) Class superclass;

+ (id)valueCondition;
+ (id)valueConditionWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)legalValues;
- (void)setLegalValues:(id)arg1;

@end