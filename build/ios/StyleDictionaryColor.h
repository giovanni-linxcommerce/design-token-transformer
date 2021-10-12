
//
// StyleDictionaryColor.h
//

// Do not edit directly
// Generated on Tue, 12 Oct 2021 12:49:07 GMT


#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, StyleDictionaryColorName) {
ColorBlablaBla,
ColorBlablaBlaAsas0,
ColorBlablaBlaAsas1,
ColorFuschia60,
ColorFuschia80,
ColorFuschia100,
ColorIris60,
ColorIris80,
ColorIris100
};

@interface StyleDictionaryColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(StyleDictionaryColorName)color;
@end
