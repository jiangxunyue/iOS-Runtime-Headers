/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSMutableIndexSet;

@interface TSTCoordinateArray : NSObject {
    boolmLayoutDirectionIsLeftToRight;
    double mAverage;
    double *mCoordinates;
    unsigned int mCount;
    unsigned int mOffset;
    double mTableWidth;
    NSMutableIndexSet *mVisibleIndices;
}

- (void)dealloc;
- (id)description;
- (void)hasRightToLeftOrderingWithWidth:(double)arg1;
- (id)initWithCount:(unsigned int)arg1 atOffset:(unsigned int)arg2;
- (bool)isEqual:(id)arg1;

@end