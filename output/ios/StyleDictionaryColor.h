
//
// StyleDictionaryColor.h
//

// Do not edit directly
// Generated on Wed, 10 Nov 2021 21:35:03 GMT


#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, StyleDictionaryColorName) {
ColorTokentestMagenta
};

@interface StyleDictionaryColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(StyleDictionaryColorName)color;
@end
