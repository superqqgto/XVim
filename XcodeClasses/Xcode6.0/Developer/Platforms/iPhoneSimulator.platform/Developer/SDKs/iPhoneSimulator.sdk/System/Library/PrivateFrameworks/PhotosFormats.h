//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Typedef'd Structures

typedef struct {
    long long value;
    int timescale;
    unsigned int flags;
    long long epoch;
} CDStruct_1b6d18a9;

typedef struct {
    CDStruct_1b6d18a9 start;
    CDStruct_1b6d18a9 duration;
} CDStruct_e83c9415;

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
// UUID: 498C4EEE-3454-3D30-94FF-744A2CF53760
//
//                           Arch: x86_64
//                Current version: 1.0.0
//          Compatibility version: 1.0.0
//                 Source version: 2369.0.0.0.0
//            Minimum iOS version: 8.0.0
//                    SDK version: 8.0.0
//
// Objective-C Garbage Collection: Unsupported
//

@protocol NSCopying
- (id)copyWithZone:(struct _NSZone *)arg1;
@end

@interface PFAssetAdjustments : NSObject <NSCopying>
{
    NSDictionary *_propertyListDictionary;
}

@property(retain, nonatomic) NSDictionary *propertyListDictionary; // @synthesize propertyListDictionary=_propertyListDictionary;
- (void).cxx_destruct;
- (id)description;
- (_Bool)writeToURL:(id)arg1 atomically:(_Bool)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPropertyListDictionary:(id)arg1;
- (id)initWithURL:(id)arg1;
@property(readonly, nonatomic) long long adjustmentBaseVersion;
@property(readonly, nonatomic) NSData *adjustmentData;
@property(readonly, copy, nonatomic) NSString *adjustmentFormatVersion;
@property(readonly, copy, nonatomic) NSString *adjustmentFormatIdentifier;
- (id)initWithFormatIdentifier:(id)arg1 formatVersion:(id)arg2 data:(id)arg3 baseVersion:(long long)arg4;

@end

@interface PFSlowMotionConfiguration : NSObject
{
    float _volumeDuringSlowMotion;
    float _volumeDuringRampToSlowMotion;
    PFSlowMotionRampConfiguration *_rampDown;
    PFSlowMotionRampConfiguration *_rampUp;
}

@property(readonly, retain, nonatomic) PFSlowMotionRampConfiguration *rampUp; // @synthesize rampUp=_rampUp;
@property(readonly, retain, nonatomic) PFSlowMotionRampConfiguration *rampDown; // @synthesize rampDown=_rampDown;
@property(readonly, nonatomic) float volumeDuringRampToSlowMotion; // @synthesize volumeDuringRampToSlowMotion=_volumeDuringRampToSlowMotion;
@property(readonly, nonatomic) float volumeDuringSlowMotion; // @synthesize volumeDuringSlowMotion=_volumeDuringSlowMotion;
- (void).cxx_destruct;
- (id)init;

@end

@interface PFSlowMotionRampConfiguration : NSObject
{
    float _playbackRampCurveExponent;
    float _exportRampCurveExponent;
    double _rampTime;
    double _introTime;
    double _outroTime;
    double _volumeSuppressionIntroTime;
    double _volumeSuppressionOutroTime;
    unsigned long long _playbackNumIntermediateSteps;
    unsigned long long _exportNumIntermediateSteps;
}

@property(readonly, nonatomic) float exportRampCurveExponent; // @synthesize exportRampCurveExponent=_exportRampCurveExponent;
@property(readonly, nonatomic) float playbackRampCurveExponent; // @synthesize playbackRampCurveExponent=_playbackRampCurveExponent;
@property(readonly, nonatomic) unsigned long long exportNumIntermediateSteps; // @synthesize exportNumIntermediateSteps=_exportNumIntermediateSteps;
@property(readonly, nonatomic) unsigned long long playbackNumIntermediateSteps; // @synthesize playbackNumIntermediateSteps=_playbackNumIntermediateSteps;
@property(readonly, nonatomic) double volumeSuppressionOutroTime; // @synthesize volumeSuppressionOutroTime=_volumeSuppressionOutroTime;
@property(readonly, nonatomic) double volumeSuppressionIntroTime; // @synthesize volumeSuppressionIntroTime=_volumeSuppressionIntroTime;
@property(readonly, nonatomic) double outroTime; // @synthesize outroTime=_outroTime;
@property(readonly, nonatomic) double introTime; // @synthesize introTime=_introTime;
@property(readonly, nonatomic) double rampTime; // @synthesize rampTime=_rampTime;
- (void)computeRampToTargetRate:(float)arg1 forExport:(_Bool)arg2 outTimeSteps:(id *)arg3 outIntermediateRates:(id *)arg4;
- (id)init;
- (id)initForRampDown:(_Bool)arg1;

@end

@interface PFSlowMotionTimeRangeMapper : NSObject
{
    NSMutableArray *_originalLengths;
    NSMutableArray *_scaledLengths;
    NSMutableArray *_scaledRegions;
}

- (void).cxx_destruct;
- (void)enumerateScaledRegionsUsingBlock:(CDUnknownBlockType)arg1;
- (void)markScaledRegionWithRate:(float)arg1 rampInStartTime:(float)arg2 rampInEndTime:(float)arg3 rampOutStartTime:(float)arg4 rampOutEndTime:(float)arg5;
- (float)_mapTime:(float)arg1 fromLengths:(id)arg2 toLengths:(id)arg3;
- (float)originalTimeForScaledTime:(float)arg1;
- (float)scaledTimeForOriginalTime:(float)arg1;
- (void)addNextRange:(float)arg1 scaledLength:(float)arg2;
- (id)init;

@end

@interface PFSlowMotionTimeRangeMapperScaledRegion : NSObject
{
    float _rate;
    float _rampInStartTime;
    float _rampInEndTime;
    float _rampOutStartTime;
    float _rampOutEndTime;
}

@property(nonatomic) float rampOutEndTime; // @synthesize rampOutEndTime=_rampOutEndTime;
@property(nonatomic) float rampOutStartTime; // @synthesize rampOutStartTime=_rampOutStartTime;
@property(nonatomic) float rampInEndTime; // @synthesize rampInEndTime=_rampInEndTime;
@property(nonatomic) float rampInStartTime; // @synthesize rampInStartTime=_rampInStartTime;
@property(nonatomic) float rate; // @synthesize rate=_rate;

@end

@interface PFSlowMotionUtilities : NSObject
{
}

+ (CDStruct_e83c9415)adjustTimeRange:(CDStruct_e83c9415)arg1 forNewStartTime:(CDStruct_1b6d18a9)arg2 endTime:(CDStruct_1b6d18a9)arg3;
+ (id)audioMixForScaledComposition:(id)arg1 timeRangeMapper:(id)arg2;
+ (CDStruct_e83c9415)_timeRangeFromTime:(float)arg1 toTime:(float)arg2;
+ (id)_setVolume:(float)arg1 forSlowMotionRegionsInTrack:(id)arg2 timeRangeMapper:(id)arg3;
+ (id)exportPresetForAsset:(id)arg1 preferredPreset:(id)arg2;
+ (void)configureExportSession:(id)arg1 forcePreciseConversion:(_Bool)arg2;
+ (double)_scaleWithinComposition:(id)arg1 fromCursor:(double)arg2 timeStep:(double)arg3 rate:(float)arg4 timeRangeMapper:(id)arg5;
+ (_Bool)_scaleComposition:(id)arg1 baseDuration:(double)arg2 slowMotionRate:(float)arg3 slowMotionRegions:(id)arg4 forExport:(_Bool)arg5 outTimeRangeMapper:(id *)arg6;
+ (id)timeRangeMapperForSourceDuration:(double)arg1 slowMotionRate:(float)arg2 slowMotionTimeRange:(CDStruct_e83c9415)arg3 forExport:(_Bool)arg4;
+ (id)_slowMotionRegionsFromSlowMotionTimeRange:(CDStruct_e83c9415)arg1;
+ (id)_scaledCompositionForAsset:(id)arg1 slowMotionRate:(float)arg2 slowMotionTimeRange:(CDStruct_e83c9415)arg3 forExport:(_Bool)arg4 outTimeRangeMapper:(id *)arg5;
+ (_Bool)_isValidSlowMotionTimeRange:(CDStruct_e83c9415)arg1;
+ (_Bool)_isValidSlowMotionRate:(float)arg1;
+ (id)assetFromVideoAsset:(id)arg1 slowMotionRate:(float)arg2 slowMotionTimeRange:(CDStruct_e83c9415)arg3 forExport:(_Bool)arg4 outAudioMix:(id *)arg5 outTimeRangeMapper:(id *)arg6;
+ (int)preferredTimeScale;
+ (id)sharedConfiguration;

@end

@interface PFVideoAVObjectBuilder : NSObject
{
    AVAsset *_videoAsset;
    PFVideoAdjustments *_videoAdjustments;
    PFSlowMotionTimeRangeMapper *__timeRangeMapperForPlayback;
    PFSlowMotionTimeRangeMapper *__timeRangeMapperForExport;
    AVAsset *__finalAsset;
    AVAudioMix *__finalAudioMix;
    AVVideoComposition *__finalVideoComposition;
}

@property(readonly, nonatomic) AVVideoComposition *_finalVideoComposition; // @synthesize _finalVideoComposition=__finalVideoComposition;
@property(readonly, nonatomic) AVAudioMix *_finalAudioMix; // @synthesize _finalAudioMix=__finalAudioMix;
@property(readonly, nonatomic) AVAsset *_finalAsset; // @synthesize _finalAsset=__finalAsset;
@property(readonly, nonatomic) PFSlowMotionTimeRangeMapper *_timeRangeMapperForExport; // @synthesize _timeRangeMapperForExport=__timeRangeMapperForExport;
@property(readonly, nonatomic) PFSlowMotionTimeRangeMapper *_timeRangeMapperForPlayback; // @synthesize _timeRangeMapperForPlayback=__timeRangeMapperForPlayback;
@property(readonly, nonatomic) PFVideoAdjustments *videoAdjustments; // @synthesize videoAdjustments=_videoAdjustments;
@property(readonly, nonatomic) AVAsset *videoAsset; // @synthesize videoAsset=_videoAsset;
- (void).cxx_destruct;
- (void)requestAVAssetForExport:(_Bool)arg1 withResultHandler:(CDUnknownBlockType)arg2;
- (void)requestAVAssetWithResultHandler:(CDUnknownBlockType)arg1;
- (void)requestExportSessionWithExportPreset:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)requestPlayerItemWithResultHandler:(CDUnknownBlockType)arg1;
- (id)description;
- (id)initWithAsset:(id)arg1 audioMix:(id)arg2 videoComposition:(id)arg3;
- (id)initWithVideoAsset:(id)arg1 videoAdjustments:(id)arg2;
- (CDStruct_1b6d18a9)convertToOriginalTimeFromScaledTime:(CDStruct_1b6d18a9)arg1 forExport:(_Bool)arg2;
- (CDStruct_1b6d18a9)convertToScaledTimeFromOriginalTime:(CDStruct_1b6d18a9)arg1 forExport:(_Bool)arg2;
- (CDStruct_e83c9415)slowMotionRampOutRangeForExport:(_Bool)arg1;
- (CDStruct_e83c9415)slowMotionRampInRangeForExport:(_Bool)arg1;
- (id)_getOrCreateTimeRangeMapperForExport:(_Bool)arg1;

@end

@interface PFVideoAdjustments : PFAssetAdjustments
{
    float _slowMotionRate;
    CDStruct_e83c9415 _slowMotionTimeRange;
}

+ (id)defaultVideoAdjustmentsURLForVideoURL:(id)arg1;
+ (float)defaultSlowMotionRateForNominalFrameRate:(float)arg1;
+ (CDStruct_e83c9415)defaultSlowMotionTimeRangeForDuration:(CDStruct_1b6d18a9)arg1;
@property(nonatomic) CDStruct_e83c9415 slowMotionTimeRange; // @synthesize slowMotionTimeRange=_slowMotionTimeRange;
@property(nonatomic) float slowMotionRate; // @synthesize slowMotionRate=_slowMotionRate;
- (id)_adjustmentsObjectFromNSKeyedArchiverData:(id)arg1;
- (id)_dictionaryFromSlowMotionTimeRange:(CDStruct_e83c9415)arg1 rate:(float)arg2;
- (_Bool)_parseAppleVideoDataBlobDictionary:(id)arg1 forSlowMotionTimeRange:(CDStruct_e83c9415 *)arg2 rate:(float *)arg3;
- (_Bool)_parseVersionedDataForSlowMotionTimeRange:(CDStruct_e83c9415 *)arg1 rate:(float *)arg2;
- (_Bool)_parseLegacySLMDictionary:(id)arg1 forSlowMotionTimeRange:(CDStruct_e83c9415 *)arg2 rate:(float *)arg3;
- (void)_updateDerivedPropertiesFromVersionedData;
- (_Bool)_isSlowMotionFormat;
- (_Bool)isRecognizedFormat;
- (id)description;
- (id)initWithPropertyListDictionary:(id)arg1;
- (_Bool)hasSlowMotionAdjustments;
- (_Bool)_isUsableSlowMotionTimeRange:(CDStruct_e83c9415)arg1 rate:(float)arg2;
- (id)initWithSlowMotionTimeRange:(CDStruct_e83c9415)arg1 rate:(float)arg2;
- (CDStruct_1b6d18a9)convertToOriginalTimeFromScaledTime:(CDStruct_1b6d18a9)arg1 forExport:(_Bool)arg2;
- (CDStruct_1b6d18a9)convertToScaledTimeFromOriginalTime:(CDStruct_1b6d18a9)arg1 forExport:(_Bool)arg2;
@property(readonly, nonatomic) CDStruct_e83c9415 slowMotionRampOut;
@property(readonly, nonatomic) CDStruct_e83c9415 slowMotionRampIn;

@end
