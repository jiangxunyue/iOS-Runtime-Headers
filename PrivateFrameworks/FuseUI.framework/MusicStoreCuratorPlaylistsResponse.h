/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicStoreCuratorPlaylistsResponse : MPModelResponse {
    NSArray * _additionalPlaylistIdentifiers;
    MPChangeDetails * _changeDetails;
}

@property (nonatomic, copy) NSArray *additionalPlaylistIdentifiers;
@property (nonatomic, retain) MPChangeDetails *changeDetails;
@property (nonatomic, readonly) BOOL hasAdditionalPlaylists;

- (void).cxx_destruct;
- (id)additionalPlaylistIdentifiers;
- (id)changeDetails;
- (BOOL)hasAdditionalPlaylists;
- (void)setAdditionalPlaylistIdentifiers:(id)arg1;
- (void)setChangeDetails:(id)arg1;

@end