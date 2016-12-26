//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"


//Header of iOS 8.4
/*
@class NSArray, NSString;

@interface UIKeyboardEmojiCategory : NSObject
{
    int _categoryType;
    NSArray *_emoji;
    int _lastVisibleFirstEmojiIndex;
    NSString *_displaySymbol;
}

+ (id)emojiRecentsFromPreferences;
+ (unsigned int)hasVariantsForEmoji:(id)arg1;
+ (BOOL)emojiString:(id)arg1 inGroup:(unsigned int *)arg2 withGroupCount:(int)arg3;
+ (id)categories;
+ (id)displayName:(int)arg1;
+ (id)categoryForType:(int)arg1;
+ (int)numberOfCategories;
+ (id)localizedStringForKey:(id)arg1;
@property(readonly, getter=displaySymbol) NSString *displaySymbol; // @synthesize displaySymbol=_displaySymbol;
@property(nonatomic) int lastVisibleFirstEmojiIndex; // @synthesize lastVisibleFirstEmojiIndex=_lastVisibleFirstEmojiIndex;
- (void)releaseCategories;
@property int categoryType; // @synthesize categoryType=_categoryType;
@property(retain) NSArray *emoji; // @synthesize emoji=_emoji;
@property(readonly, nonatomic, getter=name) NSString *name;
- (void)dealloc;

@end
*/

//Header of iOS 9beta3
/*
@interface UIKeyboardEmojiCategory : NSObject {
    int  _categoryType;
    NSString * _displaySymbol;
    NSArray * _emoji;
    int  _lastVisibleFirstEmojiIndex;
}

@property int categoryType;
@property (getter=displaySymbol, readonly) NSString *displaySymbol;
@property (retain) NSArray *emoji;
@property (nonatomic) int lastVisibleFirstEmojiIndex;
@property (getter=name, nonatomic, readonly) NSString *name;

+ (id)categories;
+ (id)categoryForType:(int)arg1;
+ (id)computeEmojiFlagsSortedByLanguage;
+ (id)displayName:(int)arg1;
+ (id)emojiRecentsFromPreferences;
+ (BOOL)emojiString:(id)arg1 inGroup:(unsigned int*)arg2 withGroupCount:(int)arg3;
+ (id)flagEmojiCountryCodesCommon;
+ (id)flagEmojiCountryCodesReadyToUse;
+ (unsigned int)hasVariantsForEmoji:(id)arg1;
+ (id)loadPrecomputedEmojiFlagCategory;
+ (id)localizedStringForKey:(id)arg1;
+ (int)numberOfCategories;
+ (id)stringToRegionalIndicatorString:(id)arg1;

- (int)categoryType;
- (void)dealloc;
- (id)displaySymbol;
- (id)emoji;
- (int)lastVisibleFirstEmojiIndex;
- (id)name;
- (void)releaseCategories;
- (void)setCategoryType:(int)arg1;
- (void)setEmoji:(id)arg1;
- (void)setLastVisibleFirstEmojiIndex:(int)arg1;

@end
*/



//Header of iOS 9.2
/* Generated by RuntimeBrowser
 Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */
/*
@interface UIKeyboardEmojiCategory : NSObject {
    int _categoryType;
    NSString *_displaySymbol;
    NSArray *_emoji;
    int _lastVisibleFirstEmojiIndex;
}

@property int categoryType;
@property (getter=displaySymbol, readonly) NSString *displaySymbol;
@property (retain) NSArray *emoji;
@property (nonatomic) int lastVisibleFirstEmojiIndex;
@property (getter=name, nonatomic, readonly) NSString *name;

+ (id)categories;
+ (id)categoryForType:(int)arg1;
+ (unsigned int)categoryIndexForCategoryType:(int)arg1;
+ (int)categoryTypeForCategoryIndex:(unsigned int)arg1;
+ (id)computeEmojiFlagsSortedByLanguage;
+ (id)displayName:(int)arg1;
+ (id)emojiRecentsFromPreferences;
+ (BOOL)emojiString:(id)arg1 inGroup:(unsigned int*)arg2 withGroupCount:(int)arg3;
+ (id)enabledCategoryIndexes;
+ (id)fallbackDisplayName:(int)arg1;
+ (id)flagEmojiCountryCodesCommon;
+ (id)flagEmojiCountryCodesReadyToUse;
+ (unsigned int)hasVariantsForEmoji:(id)arg1;
+ (id)loadPrecomputedEmojiFlagCategory;
+ (id)localizedStringForKey:(id)arg1;
+ (int)numberOfCategories;
+ (id)stringToRegionalIndicatorString:(id)arg1;

- (int)categoryType;
- (void)dealloc;
- (id)displaySymbol;
- (id)emoji;
- (int)lastVisibleFirstEmojiIndex;
- (id)name;
- (void)releaseCategories;
- (void)setCategoryType:(int)arg1;
- (void)setEmoji:(id)arg1;
- (void)setLastVisibleFirstEmojiIndex:(int)arg1;

@end
 */


//Header of iOS 10.2
@interface UIKeyboardEmojiCategory : NSObject {
    int _categoryType;
    NSString *_displaySymbol;
    NSArray *_emoji;
    int _lastVisibleFirstEmojiIndex;
}

@property int categoryType; // @synthesize categoryType=_categoryType;
@property (getter=displaySymbol, readonly) NSString *displaySymbol; // @synthesize displaySymbol=_displaySymbol;
@property (retain) NSArray *emoji; // @synthesize emoji=_emoji;
@property (nonatomic) int lastVisibleFirstEmojiIndex; // @synthesize lastVisibleFirstEmojiIndex=_lastVisibleFirstEmojiIndex;
@property (getter=name, nonatomic, readonly) NSString *name;

+ (id)categories;
+ (id)categoryForType:(int)arg1;
+ (unsigned int)categoryIndexForCategoryType:(int)arg1;
+ (int)categoryTypeForCategoryIndex:(unsigned int)arg1;
+ (id)displayName:(int)arg1;
+ (id)emojiCategoryStringForCategoryType:(int)arg1;
+ (int)emojiCategoryTypeForCategoryString:(id)arg1;
+ (id)emojiRecentsFromPreferences;
+ (_Bool)emojiString:(id)arg1 inGroup:(id)arg2;
+ (id)enabledCategoryIndexes;
+ (id)fallbackDisplayName:(int)arg1;
+ (unsigned int)hasVariantsForEmoji:(id)arg1;
+ (id)loadPrecomputedEmojiFlagCategory;
+ (id)localizedStringForKey:(id)arg1;
+ (int)numberOfCategories;
+ (id)professionSkinToneEmojiBaseKey:(id)arg1;

+ (id)DingbatVariantsEmoji;
+ (id)GenderEmoji;
+ (id)NoneVariantEmoji;
+ (id)ProfessionEmoji;
+ (id)SkinToneEmoji;

- (void)dealloc;
- (void)releaseCategories;

@end

