//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WNNoteItemUtilBase.h"

#import "WNNoteVoicePlayDelegate-Protocol.h"
#import "WNNoteVoicePlayViewDelegate-Protocol.h"
#import "WNNoteVoiceRecordDelegate-Protocol.h"

@class NSString, WNNoteVoiceMgr;

@interface WNNoteVoiceItemUtil : WNNoteItemUtilBase <WNNoteVoiceRecordDelegate, WNNoteVoicePlayDelegate, WNNoteVoicePlayViewDelegate>
{
    WNNoteVoiceMgr *_voiceMgr;
    _Bool _bRecording;
}

- (void).cxx_destruct;
- (void)CancelWNNoteVoiceRecordWithObj:(id)arg1 Code:(unsigned short)arg2;
- (void)StartWNNoteVoiceRecordWithObj:(id)arg1;
- (void)CompleteWNNoteVoiceRecordWithObj:(id)arg1 FilePath:(id)arg2 VoiceTime:(float)arg3 VoiceFmt:(unsigned int)arg4;
- (unsigned int)GetTmpAudioTime:(id)arg1;
- (void)insertItem:(id)arg1 isUpdate:(_Bool)arg2 isConfigData:(_Bool)arg3;
- (void)onClosePlayView;
- (void)onClickItem:(id)arg1;
- (id)getIconSelectedName;
- (id)getIconHLName;
- (id)getIconName;
- (id)getTitle;
- (void)onAddItemBegin:(id)arg1;
- (void)stopRecord;
- (void)dealloc;
@property(readonly, nonatomic) _Bool isPlaying;
@property(readonly, nonatomic) _Bool isRecording;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
