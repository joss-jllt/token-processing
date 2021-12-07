
//
// StyleDictionaryColor.h
//
// Do not edit directly
// Generated on Tue, 07 Dec 2021 19:56:09 GMT
//

#import <UIKit/UIKit.h>


typedef NS_ENUM(NSInteger, StyleDictionaryColorName) {
ColorTestColor,
ColorTestTokenRed,
ColorBlueRoyal10,
ColorBlueRoyal01,
ColorBlueRoyal02,
ColorBlueRoyal03,
ColorBlueRoyal04,
ColorBlueRoyal05,
ColorBlueRoyal06,
ColorBlueRoyal07,
ColorBlueRoyal08,
ColorBlueRoyal09,
ColorGreenSalemC01,
ColorGreenSalemC02,
ColorGreenSalemC03,
ColorGreenSalemC04,
ColorGreenSalemC05,
ColorGreenSalemC06,
ColorGreenSalemC07,
ColorGreenSalemC08,
ColorGreenSalemC09,
ColorGreenSalemC10,
ColorBackgroundButtonPrimaryIdle,
ColorBrandPrimary
};

@interface StyleDictionaryColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(StyleDictionaryColorName)color;
@end
