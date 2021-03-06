/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFWallpaperDefaults : NSObject {
    SBWallpaperDefaults *_defaultsStore;
}

@property (nonatomic, readonly) SBWallpaperDefaults *defaultsStore;

+ (id)defaults;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })cropRectForVariant:(int)arg1;
- (id)defaultsStore;
- (id)description;
- (BOOL)hasVideo;
- (BOOL)hasVideoForVariant:(int)arg1;
- (id)init;
- (id)initWithDefaultsStore:(id)arg1;
- (BOOL)isPortraitForVariant:(int)arg1;
- (BOOL)magnifyEnabledForVariant:(int)arg1;
- (id)nameForVariant:(int)arg1;
- (float)parallaxFactorForVariant:(int)arg1;
- (void)resetCroppingDefaults;
- (void)resetDefaults;
- (void)resetHasVideoDefaults;
- (void)resetMagnifyDefaults;
- (void)resetNameDefaults;
- (void)resetParallaxFactorDefaults;
- (void)resetPortraitDefaults;
- (void)resetStillTimeInVideoDefaults;
- (void)resetZoomScaleDefaults;
- (void)setCropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forLocations:(int)arg2;
- (void)setHasVideo:(BOOL)arg1;
- (void)setMagnifyEnabled:(BOOL)arg1 forLocations:(int)arg2;
- (void)setName:(id)arg1 forLocations:(int)arg2;
- (void)setParallaxFactor:(float)arg1 forLocations:(int)arg2;
- (void)setPortrait:(BOOL)arg1 forLocations:(int)arg2;
- (void)setStillTimeInVideo:(double)arg1;
- (void)setSupportsCropping:(BOOL)arg1 forLocations:(int)arg2;
- (void)setWallpaperOptions:(id)arg1 forLocations:(int)arg2;
- (void)setZoomScale:(float)arg1 forLocations:(int)arg2;
- (double)stillTimeInVideo;
- (double)stillTimeInVideoForVariant:(int)arg1;
- (BOOL)supportsCroppingForVariant:(int)arg1;
- (id)wallpaperOptionsForVariant:(int)arg1;
- (float)zoomScaleForVariant:(int)arg1;

@end
