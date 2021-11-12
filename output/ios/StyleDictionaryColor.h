
//
// StyleDictionaryColor.h
//
// Do not edit directly
// Generated on Fri, 12 Nov 2021 16:54:24 GMT
//

#import <UIKit/UIKit.h>


typedef NS_ENUM(NSInteger, StyleDictionaryColorName) {
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
ColorGreenSalemC10
};

@interface StyleDictionaryColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(StyleDictionaryColorName)color;
@end
