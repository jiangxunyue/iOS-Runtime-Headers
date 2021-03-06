/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKCropAdornmentLayer : AKAdornmentLayer {
    CAShapeLayer * _guideLayer;
    CAShapeLayer * _handlesLayer;
}

@property (retain) CAShapeLayer *guideLayer;
@property (retain) CAShapeLayer *handlesLayer;

- (void).cxx_destruct;
- (void)_addGuides;
- (void)_addHandles;
- (void)_removeGuides;
- (void)_removeHandles;
- (bool)_shouldShowHandles;
- (void)_updateGuides;
- (void)_updateHandles;
- (id)guideLayer;
- (id)handlesLayer;
- (bool)needsUpdateWhenDraggingStartsOrEnds;
- (void)setGuideLayer:(id)arg1;
- (void)setHandlesLayer:(id)arg1;
- (void)updateAdornmentElements;
- (void)updateSublayersWithScale:(double)arg1;

@end
