
//
// StyleDictionaryColor.h
//
// Do not edit directly
// Generated on Wed, 10 Nov 2021 22:47:34 GMT
//

#import <UIKit/UIKit.h>


typedef NS_ENUM(NSInteger, StyleDictionaryColorName) {
ColorTokentestTestcolor
};

@interface StyleDictionaryColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(StyleDictionaryColorName)color;
@end
