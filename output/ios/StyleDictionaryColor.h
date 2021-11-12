
//
// StyleDictionaryColor.h
//
// Do not edit directly
// Generated on Fri, 12 Nov 2021 14:25:39 GMT
//

#import <UIKit/UIKit.h>


typedef NS_ENUM(NSInteger, StyleDictionaryColorName) {
ColorGreenSalemC10,
ColorGreenSalemC09,
ColorGreenSalemC08,
ColorGreenSalemC07,
ColorGreenSalemC06,
ColorGreenSalemC05,
ColorGreenSalemC04,
ColorGreenSalemC03,
ColorGreenSalemC02,
ColorGreenSalemC01,
ColorBlueRoyal10,
ColorBlueRoyal09,
ColorBlueRoyal08,
ColorBlueRoyal07,
ColorBlueRoyal06,
ColorBlueRoyal05,
ColorBlueRoyal04,
ColorBlueRoyal03,
ColorBlueRoyal02,
ColorBlueRoyal01
};

@interface StyleDictionaryColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(StyleDictionaryColorName)color;
@end
