
//
// StyleDictionaryColor.m
//
// Do not edit directly
// Generated on Wed, 10 Nov 2021 22:39:00 GMT
//

#import "StyleDictionaryColor.h"


@implementation StyleDictionaryColor

+ (UIColor *)color:(StyleDictionaryColorName)colorEnum{
  return [[self values] objectAtIndex:colorEnum];
}

+ (NSArray *)values {
  static NSArray* colorArray;
  static dispatch_once_t onceToken;

  dispatch_once(&onceToken, ^{
    colorArray = @[
[UIColor colorWithRed:0.000f green:0.380f blue:1.000f alpha:1.000f]
    ];
  });

  return colorArray;
}

@end
