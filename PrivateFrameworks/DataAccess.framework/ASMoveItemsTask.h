/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSMutableArray;

@interface ASMoveItemsTask : ASTask {
    NSMutableArray *_moveItems;
}

- (void)addSourceID:(id)arg1 sourceFolder:(id)arg2 destinatonFolder:(id)arg3;
- (id)command;
- (void)dealloc;
- (void)finishWithError:(id)arg1;
- (BOOL)processContext:(id)arg1;
- (id)requestBody;

@end