/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCaptureSessionInternal, NSArray, NSString;

@interface AVCaptureSession : NSObject {
    AVCaptureSessionInternal *_internal;
}

@property BOOL automaticallyConfiguresApplicationAudioSession;
@property(readonly) NSArray * inputs;
@property(getter=isInterrupted,readonly) BOOL interrupted;
@property(readonly) struct OpaqueCMClock { }* masterClock;
@property(readonly) NSArray * outputs;
@property(getter=isRunning,readonly) BOOL running;
@property(copy) NSString * sessionPreset;
@property BOOL usesApplicationAudioSession;

+ (id)allSessionPresets;
+ (id)alloc;
+ (BOOL)automaticallyNotifiesObserversOfMasterClock;
+ (BOOL)automaticallyNotifiesObserversOfRunning;
+ (id)dotString;
+ (void)initialize;
+ (id)publicSessionPresets;

- (void)_addConnection:(id)arg1;
- (void)_addInputWithNoConnections:(id)arg1;
- (void)_addOutputWithNoConnections:(id)arg1;
- (void)_addVideoPreviewLayer:(id)arg1;
- (void)_addVideoPreviewLayerWithNoConnection:(id)arg1;
- (void)_beginConfiguration;
- (BOOL)_buildAndRunGraph;
- (BOOL)_canAddConnection:(id)arg1 failureReason:(id*)arg2;
- (BOOL)_canAddInput:(id)arg1 failureReason:(id*)arg2;
- (BOOL)_canAddOutput:(id)arg1 failureReason:(id*)arg2;
- (BOOL)_canAddVideoPreviewLayer:(id)arg1 failureReason:(id*)arg2;
- (void)_commitConfiguration;
- (id)_connectionsForNewInputPort:(id)arg1;
- (id)_connectionsForNewOutput:(id)arg1;
- (id)_connectionsForNewVideoPreviewLayer:(id)arg1;
- (long)_createFigCaptureSession;
- (id)_figCaptureSessionConfiguration;
- (void)_handleConfigurationCommittedNotificationWithPayload:(id)arg1;
- (void)_handleConfigurationDidBecomeLiveNotificationWithPayload:(id)arg1;
- (void)_handleDidStartRunningNotificationWithPayload:(id)arg1;
- (void)_handleDidStopRunningNotificationWithPayload:(id)arg1;
- (void)_handleNotification:(id)arg1 payload:(id)arg2;
- (void)_handleServerConnectionDiedNotification;
- (void)_makeConfigurationLive:(id)arg1 masterClock:(struct OpaqueCMClock { }*)arg2;
- (void)_notifyMediaServerdDied;
- (void)_notifySessionStarted;
- (void)_notifySessionStopped;
- (void)_postRuntimeError:(id)arg1;
- (void)_rebuildGraph;
- (void)_removeAllPreviewLayers;
- (void)_removeConnection:(id)arg1;
- (void)_removeConnectionsForInputPort:(id)arg1;
- (void)_removeVideoPreviewLayer:(id)arg1;
- (void)_setInterrupted:(BOOL)arg1;
- (void)_setMasterClock:(struct OpaqueCMClock { }*)arg1;
- (void)_setRunning:(BOOL)arg1;
- (BOOL)_startFigCaptureSession;
- (void)_stopAndTearDownGraph;
- (id)_stopError;
- (BOOL)_stopFigCaptureSession;
- (void)_teardownFigCaptureSession;
- (void)_updateActiveConnections;
- (void)_updateDeviceActiveFormats;
- (void)addConnection:(id)arg1;
- (void)addInput:(id)arg1;
- (void)addInputWithNoConnections:(id)arg1;
- (void)addOutput:(id)arg1;
- (void)addOutputWithNoConnections:(id)arg1;
- (BOOL)automaticallyConfiguresApplicationAudioSession;
- (void)beginConfiguration;
- (BOOL)canAddConnection:(id)arg1;
- (BOOL)canAddInput:(id)arg1;
- (BOOL)canAddOutput:(id)arg1;
- (BOOL)canSetSessionPreset:(id)arg1;
- (void)commitConfiguration;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)inputs;
- (BOOL)isBeingConfigured;
- (BOOL)isInterrupted;
- (BOOL)isRunning;
- (struct OpaqueCMClock { }*)masterClock;
- (BOOL)notifiesOnMainThread;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)outputs;
- (void)removeConnection:(id)arg1;
- (void)removeInput:(id)arg1;
- (void)removeOutput:(id)arg1;
- (id)sessionPreset;
- (id)sessionVideoCaptureDevices;
- (void)setAutomaticallyConfiguresApplicationAudioSession:(BOOL)arg1;
- (void)setSessionPreset:(id)arg1;
- (void)setUsesApplicationAudioSession:(BOOL)arg1;
- (void)startRunning;
- (void)stopRunning;
- (BOOL)usesApplicationAudioSession;
- (id)valueForUndefinedKey:(id)arg1;
- (BOOL)videoHDREnabledForDevice:(id)arg1 format:(id)arg2 sessionPreset:(id)arg3;

@end
