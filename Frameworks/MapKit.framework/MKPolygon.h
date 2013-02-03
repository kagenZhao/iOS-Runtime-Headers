/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSArray;

@interface MKPolygon : MKMultiPoint <MKOverlay> {
    struct { 
        double latitude; 
        double longitude; 
    } _centroid;
    NSArray *_interiorPolygons;
}

@property(readonly) NSArray *interiorPolygons;
@property(readonly) ? boundingMapRect;
@property(readonly) ? coordinate;

+ (id)polygonWithCoordinates:(struct { double x1; double x2; }*)arg1 count:(NSUInteger)arg2 interiorPolygons:(id)arg3;
+ (id)polygonWithCoordinates:(struct { double x1; double x2; }*)arg1 count:(NSUInteger)arg2;
+ (id)polygonWithPoints:(struct { double x1; double x2; }*)arg1 count:(NSUInteger)arg2 interiorPolygons:(id)arg3;
+ (id)polygonWithPoints:(struct { double x1; double x2; }*)arg1 count:(NSUInteger)arg2;

- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })boundingMapRect;
- (struct { double x1; double x2; })coordinate;
- (void)dealloc;
- (id)interiorPolygons;
- (BOOL)intersectsMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end