//
//  UIColor+Scrabble.h
//  WordPlay
//
//  Created by CJNevin on 31/10/2013.
//  Copyright (c) 2013 CJNevin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (Scrabble)

+ (UIColor*)doubleWordColor;
+ (UIColor*)doubleLetterColor;
+ (UIColor*)tripleLetterColor;
+ (UIColor*)tripleWordColor;
+ (UIColor*)centerColor;
+ (UIColor*)squareColor;
+ (UIColor*)squareBorderColor;
+ (UIColor*)tileColor;
+ (UIColor*)tileBorderColor;
+ (UIColor*)tileTextColor;
+ (UIColor*)tileRackColor;
+ (UIColor*)gameBackgroundColor;

@end