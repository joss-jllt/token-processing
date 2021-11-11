
//
// StyleDictionaryColor.h
//
// Do not edit directly
// Generated on Thu, 11 Nov 2021 03:45:31 GMT
//

#import <UIKit/UIKit.h>


typedef NS_ENUM(NSInteger, StyleDictionaryColorName) {
ColorTokentestTestcolor
};

@interface StyleDictionaryColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(StyleDictionaryColorName)color;
@end
