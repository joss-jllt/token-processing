
//
// StyleDictionaryColor.m
//
// Do not edit directly
// Generated on Fri, 12 Nov 2021 15:56:51 GMT
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
[UIColor colorWithRed:0.059f green:0.149f blue:0.424f alpha:1.000f],
[UIColor colorWithRed:0.961f green:0.969f blue:0.996f alpha:1.000f],
[UIColor colorWithRed:0.918f green:0.937f blue:0.988f alpha:1.000f],
[UIColor colorWithRed:0.839f green:0.875f blue:0.976f alpha:1.000f],
[UIColor colorWithRed:0.729f green:0.788f blue:0.965f alpha:1.000f],
[UIColor colorWithRed:0.553f green:0.651f blue:0.937f alpha:1.000f],
[UIColor colorWithRed:0.376f green:0.510f blue:0.914f alpha:1.000f],
[UIColor colorWithRed:0.169f green:0.349f blue:0.886f alpha:1.000f],
[UIColor colorWithRed:0.106f green:0.271f blue:0.765f alpha:1.000f],
[UIColor colorWithRed:0.078f green:0.204f blue:0.580f alpha:1.000f],
[UIColor colorWithRed:0.906f green:0.992f blue:0.949f alpha:1.000f],
[UIColor colorWithRed:0.780f green:0.980f blue:0.882f alpha:1.000f],
[UIColor colorWithRed:0.525f green:0.957f blue:0.741f alpha:1.000f],
[UIColor colorWithRed:0.082f green:0.906f blue:0.494f alpha:1.000f],
[UIColor colorWithRed:0.067f green:0.757f blue:0.412f alpha:1.000f],
[UIColor colorWithRed:0.055f green:0.612f blue:0.333f alpha:1.000f],
[UIColor colorWithRed:0.043f green:0.459f blue:0.251f alpha:1.000f],
[UIColor colorWithRed:0.035f green:0.373f blue:0.204f alpha:1.000f],
[UIColor colorWithRed:0.027f green:0.282f blue:0.153f alpha:1.000f],
[UIColor colorWithRed:0.020f green:0.204f blue:0.110f alpha:1.000f]
    ];
  });

  return colorArray;
}

@end
