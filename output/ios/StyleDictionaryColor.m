
//
// StyleDictionaryColor.m
//
// Do not edit directly
// Generated on Wed, 10 Nov 2021 22:35:58 GMT
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
[UIColor colorWithRed:0.000f green:1.000f blue:0.220f alpha:1.000f]
    ];
  });

  return colorArray;
}

@end
