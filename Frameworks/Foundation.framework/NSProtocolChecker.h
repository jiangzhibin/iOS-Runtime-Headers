/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */



@interface NSProtocolChecker : NSProxy 
{
}

+ (id)protocolCheckerWithTarget:(id)arg1 protocol:(id)arg2;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)doesNotRecognizeSelector:(SEL)arg1;
- (struct objc_method_description { SEL x1; char *x2; }*)methodDescriptionForSelector:(SEL)arg1;
- (const char *)_localClassNameForClass;
- (id)protocol;
- (void)forwardInvocation:(id)arg1;
- (BOOL)conformsToProtocol:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)target;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)initWithTarget:(id)arg1 protocol:(id)arg2;

@end