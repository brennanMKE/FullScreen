//
//  SSTStyleKit.h
//  FullScreen
//
//  Created by FullScreen on 6/14/14.
//  Copyright (c) 2014 FullScreen. All rights reserved.
//
//  Generated by PaintCode (www.paintcodeapp.com)
//

#import <Foundation/Foundation.h>


@class PCGradient;

@interface SSTStyleKit : NSObject

// iOS Controls Customization Outlets
@property(strong, nonatomic) IBOutletCollection(NSObject) NSArray* clearTopBarBackgroundImageTargets;
@property(strong, nonatomic) IBOutletCollection(NSObject) NSArray* darkTopBarBackgroundImageTargets;
@property(strong, nonatomic) IBOutletCollection(NSObject) NSArray* topShadowTargets;

// Colors
+ (UIColor*)myDarkColor;
+ (UIColor*)myShadowGradientClearColor;
+ (UIColor*)myShadowGradientBlackColor;

// Gradients
+ (PCGradient*)myShadowGradient;

// Drawing Methods
+ (void)drawClearTopBarBackgroundImage;
+ (void)drawDarkTopBarBackgroundImage;
+ (void)drawTopShadow;

// Generated Images
+ (UIImage*)imageOfClearTopBarBackgroundImage;
+ (UIImage*)imageOfDarkTopBarBackgroundImage;
+ (UIImage*)imageOfTopShadow;

@end



@interface PCGradient : NSObject
@property(nonatomic, readonly) CGGradientRef CGGradient;
- (CGGradientRef)CGGradient NS_RETURNS_INNER_POINTER;

+ (instancetype)gradientWithColors: (NSArray*)colors locations: (const CGFloat*)locations;
+ (instancetype)gradientWithStartingColor: (UIColor*)startingColor endingColor: (UIColor*)endingColor;

@end
