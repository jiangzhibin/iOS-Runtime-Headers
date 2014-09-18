/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString, VKCamera, VKDispatch, VKLayoutContext, VKTimer, VKWorld;

@interface VKImageCanvas : GGLImageCanvas <VKWorldDelegate, VKAnimationRunner> {
    struct MapCamera { 
        struct View {} *_view; 
        struct Viewport {} *_viewport; 
        void *_layoutContext; 
    struct unique_ptr<md::RenderQueue, std::__1::default_delete<md::RenderQueue> > { 
        struct __compressed_pair<md::RenderQueue *, std::__1::default_delete<md::RenderQueue> > { 
            struct RenderQueue {} *__first_; 
        } __ptr_; 
    struct unique_ptr<ggl::RenderQueue, std::__1::default_delete<ggl::RenderQueue> > { 
        struct __compressed_pair<ggl::RenderQueue *, std::__1::default_delete<ggl::RenderQueue> > { 
            struct RenderQueue {} *__first_; 
        } __ptr_; 
    struct unique_ptr<<anonymous>::YFlipPass, std::__1::default_delete<<anonymous>::YFlipPass> > { 
        struct __compressed_pair<<anonymous>::YFlipPass *, std::__1::default_delete<<anonymous>::YFlipPass> > { 
            struct YFlipPass {} *__first_; 
        } __ptr_; 
    VKCamera *_camera;
    VKDispatch *_dispatch;
    double _frameTimestamp;
    VKLayoutContext *_layoutContext;
    VKTimer *_layoutTimer;
    } _mapCamera;
    struct RenderTree { int (**x1)(); id x2; } *_mapScene;
    } _renderQueue;
    } _renderQueueResolve;
    VKWorld *_world;
    } _yFlipPass;
    bool_needsLayout;
    bool_shouldDrawWhileLoading;
}

@property(readonly) VKCamera * camera;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) VKDispatch * dispatch;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly) VKWorld * world;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_spinScene:(id)arg1;
- (void)_spinSceneWillRender:(bool)arg1;
- (void)_updateViewTransform;
- (void)animationDidResume:(id)arg1;
- (void)animationDidStop:(id)arg1;
- (id)camera;
- (void)cancelLoad;
- (void)dealloc;
- (id)dispatch;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 useMultisampling:(bool)arg3 device:(const struct shared_ptr<ggl::Device> { }*)arg4 homeQueue:(id)arg5;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 useMultisampling:(bool)arg3 device:(const struct shared_ptr<ggl::Device> { }*)arg4;
- (void)loadScene;
- (void)renderSceneWithRenderer:(struct Renderer { int (**x1)(); struct Device {} *x2; unsigned long long x3; unsigned long long x4; boolx5; float x6; }*)arg1 completion:(id)arg2;
- (void)runAnimation:(id)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (id)world;
- (void)worldDisplayDidChange:(id)arg1;
- (void)worldLayoutDidChange:(id)arg1;

@end