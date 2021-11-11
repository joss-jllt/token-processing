
//
// StyleDictionaryColor.m
//
// Do not edit directly
// Generated on Thu, 11 Nov 2021 03:46:41 GMT
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
[UIColor colorWithRed:0.894f green:0.118f blue:0.180f alpha:1.000f]
    ];
  });

  return colorArray;
}

@end
