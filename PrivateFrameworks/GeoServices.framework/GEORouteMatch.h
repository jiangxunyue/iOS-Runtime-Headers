/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOComposedRoute, GEORouteMatch, NSDate;

@interface GEORouteMatch : NSObject {
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    struct { 
        double latitude; 
        double longitude; 
    unsigned long long _consecutiveProgressionsOffRoute;
    double _distanceFromRoute;
    double _distanceTraveledOffRoute;
    } _locationCoordinate;
    double _matchedCourse;
    double _modifiedCourseAccuracy;
    double _modifiedHorizontalAccuracy;
    GEORouteMatch *_projectedFrom;
    struct { struct { id x_1_1_1; char *x_1_1_2; unsigned long long x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; unsigned long long x_1_1_6; unsigned int x_1_1_7; unsigned long long x_1_1_8; boolx_1_1_9; unsigned long long x_1_1_10; float x_1_1_11; unsigned long long x_1_1_12; id x_1_1_13; int x_1_1_14; } x1; unsigned long long x2; unsigned long long x3; int x4; int x5; int x6; unsigned long long x7; unsigned long long x8; union { struct { struct { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_9_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; } *_road;
    double _roadWidth;
    GEOComposedRoute *_route;
    } _routeCoordinate;
    unsigned long long _stepIndex;
    NSDate *_timestamp;
    bool_isGoodMatch;
}

@property unsigned long long consecutiveProgressionsOffRoute;
@property double distanceFromRoute;
@property double distanceTraveledOffRoute;
@property bool isGoodMatch;
@property struct { double x1; double x2; } locationCoordinate;
@property(readonly) double matchedCourse;
@property double modifiedCourseAccuracy;
@property double modifiedHorizontalAccuracy;
@property(retain) GEORouteMatch * projectedFrom;
@property(readonly) bool projectedPastEndOfLeg;
@property struct { struct { id x_1_1_1; char *x_1_1_2; unsigned long long x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; unsigned long long x_1_1_6; unsigned int x_1_1_7; unsigned long long x_1_1_8; boolx_1_1_9; unsigned long long x_1_1_10; float x_1_1_11; unsigned long long x_1_1_12; id x_1_1_13; int x_1_1_14; } x1; unsigned long long x2; unsigned long long x3; int x4; int x5; int x6; unsigned long long x7; unsigned long long x8; union { struct { struct { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_9_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; }* road;
@property(readonly) double roadWidth;
@property(readonly) GEOComposedRoute * route;
@property(readonly) struct PolylineCoordinate { unsigned int x1; float x2; } routeCoordinate;
@property(readonly) bool routeMatchedToEnd;
@property unsigned long long stepIndex;
@property(readonly) NSDate * timestamp;

- (id).cxx_construct;
- (unsigned long long)consecutiveProgressionsOffRoute;
- (void)dealloc;
- (id)description;
- (double)distanceFromRoute;
- (double)distanceTraveledOffRoute;
- (unsigned long long)hash;
- (id)initWithRoute:(id)arg1 routeCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg2 locationCoordinate:(struct { double x1; double x2; })arg3 stepIndex:(unsigned long long)arg4 matchedCourse:(double)arg5 timestamp:(id)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isEqualIgnoringScore:(id)arg1;
- (bool)isGoodMatch;
- (struct { double x1; double x2; })locationCoordinate;
- (double)matchedCourse;
- (double)modifiedCourseAccuracy;
- (double)modifiedHorizontalAccuracy;
- (id)projectedFrom;
- (bool)projectedPastEndOfLeg;
- (struct { struct { id x_1_1_1; char *x_1_1_2; unsigned long long x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; unsigned long long x_1_1_6; unsigned int x_1_1_7; unsigned long long x_1_1_8; boolx_1_1_9; unsigned long long x_1_1_10; float x_1_1_11; unsigned long long x_1_1_12; id x_1_1_13; int x_1_1_14; } x1; unsigned long long x2; unsigned long long x3; int x4; int x5; int x6; unsigned long long x7; unsigned long long x8; union { struct { struct { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_9_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; }*)road;
- (double)roadWidth;
- (id)route;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeCoordinate;
- (bool)routeMatchBehind:(id)arg1;
- (bool)routeMatchedToEnd;
- (void)setConsecutiveProgressionsOffRoute:(unsigned long long)arg1;
- (void)setDistanceFromRoute:(double)arg1;
- (void)setDistanceTraveledOffRoute:(double)arg1;
- (void)setIsGoodMatch:(bool)arg1;
- (void)setLocationCoordinate:(struct { double x1; double x2; })arg1;
- (void)setModifiedCourseAccuracy:(double)arg1;
- (void)setModifiedHorizontalAccuracy:(double)arg1;
- (void)setProjectedFrom:(id)arg1;
- (void)setRoad:(struct { struct { id x_1_1_1; char *x_1_1_2; unsigned long long x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; unsigned long long x_1_1_6; unsigned int x_1_1_7; unsigned long long x_1_1_8; boolx_1_1_9; unsigned long long x_1_1_10; float x_1_1_11; unsigned long long x_1_1_12; id x_1_1_13; int x_1_1_14; } x1; unsigned long long x2; unsigned long long x3; int x4; int x5; int x6; unsigned long long x7; unsigned long long x8; union { struct { struct { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_9_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; }*)arg1;
- (void)setStepIndex:(unsigned long long)arg1;
- (id)step;
- (unsigned long long)stepIndex;
- (id)timestamp;
- (void)updateOffRouteProgress:(id)arg1 minDistanceToGetOnRoute:(double)arg2;

@end