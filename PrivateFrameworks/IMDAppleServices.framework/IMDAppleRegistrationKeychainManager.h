/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMDAppleServices.framework/IMDAppleServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSRecursiveLock, NSMutableArray, IMTimer;

@interface IMDAppleRegistrationKeychainManager : NSObject {
    BOOL _loaded;
    NSRecursiveLock *_lock;
    id _purgeCancelBlock;
    id _purgeEnqueueBlock;
    IMTimer *_purgeTimer;
    NSMutableArray *_registrationData;
}

@property(readonly) NSArray * registrations;

+ (id)keychainAccessGroupForVersion:(unsigned int)arg1;
+ (id)keychainAccountForVersion:(unsigned int)arg1;
+ (id)keychainServiceForVersion:(unsigned int)arg1;
+ (id)sharedInstance;

- (void)_flush;
- (void)_loadIfNeeded;
- (void)_reloadFromDictionary:(id)arg1;
- (BOOL)_saveToKeychain;
- (void)_setPurgeTimer;
- (BOOL)addRegistration:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)registrationWithServiceType:(int)arg1 registrationType:(int)arg2 value:(id)arg3;
- (id)registrations;
- (void)reloadFromKeychain;
- (BOOL)removeAllRegistrations;
- (BOOL)removeRegistration:(id)arg1;
- (BOOL)saveToKeychain;
- (void)systemDidFinishMigration;

@end