/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNBoundingSphere : NSObject {
    struct SCNVector3 { 
        float x; 
        float y; 
        float z; 
    } center;
    float radius;
}

@property struct SCNVector3 { float x1; float x2; float x3; } center;
@property float radius;

+ (id)SCNJSExportProtocol;

- (struct SCNVector3 { float x1; float x2; float x3; })center;
- (id)description;
- (float)radius;
- (void)setCenter:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (void)setRadius:(float)arg1;

@end
