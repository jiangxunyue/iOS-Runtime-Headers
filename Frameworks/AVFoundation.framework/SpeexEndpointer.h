/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface SpeexEndpointer : NSObject <Endpointer> {
    void *_impl;
    double mEndWaitTime;
    int mEndpointMode;
    unsigned long mFrameRate;
    double mInterspeechWaitTime;
    int mLastStatus;
    double mStartWaitTime;
}

@property double endWaitTime;
@property int endpointMode;
@property double interspeechWaitTime;
@property double startWaitTime;

- (BOOL)configureWithSampleRate:(double)arg1 andFrameRate:(unsigned long)arg2;
- (void)dealloc;
- (double)endWaitTime;
- (int)endpointMode;
- (int)getStatus:(float*)arg1 count:(unsigned long)arg2;
- (int)getStatus:(struct AudioQueueBuffer { unsigned int x1; void *x2; unsigned int x3; void *x4; unsigned int x5; struct AudioStreamPacketDescription {} *x6; unsigned int x7; }*)arg1;
- (id)init;
- (double)interspeechWaitTime;
- (void)reset;
- (void)setEndWaitTime:(double)arg1;
- (void)setEndpointMode:(int)arg1;
- (void)setInterspeechWaitTime:(double)arg1;
- (void)setStartWaitTime:(double)arg1;
- (double)startWaitTime;

@end