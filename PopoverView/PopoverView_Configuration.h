//
//  PopoverView_Configuration.h
//  popover
//
//  Created by Bas Pellis on 12/25/12.
//  Copyright (c) 2012 Oliver Rickard. All rights reserved.
//

#pragma mark Constants - Configure look/feel

// BOX GEOMETRY

//Height/width of the actual arrow
#define kArrowHeight 8

//padding within the box for the contentView
#define kBoxPadding 0.0f

//control point offset for rounding corners of the main popover box
#define kCPOffset 0.0f

//radius for the rounded corners of the main popover box
#define kBoxRadius 4.f

//Curvature value for the arrow.  Set to 0.f to make it linear.
#define kArrowCurvature 1.f

//Minimum distance from the side of the arrow to the beginning of curvature for the box
#define kArrowHorizontalPadding 5.f

//Alpha value for the shadow behind the PopoverView
#define kShadowAlpha 0.4f

//Blur for the shadow behind the PopoverView
#define kShadowBlur 3.f;

//Box gradient bg alpha
#define kBoxAlpha 0.95f

//Padding along top of screen to allow for any nav/status bars
#define kTopMargin 50.f

//margin along the left and right of the box
#define kHorizontalMargin 10.f

//padding along top of icons/images
#define kImageTopPadding 0.f

//padding along bottom of icons/images
#define kImageBottomPadding 0.f


// DIVIDERS BETWEEN VIEWS

//Bool that turns off/on the dividers
#define kShowDividersBetweenViews YES

//color for the divider fill
#define kDividerColor [UIColor colorWithRed:0.663 green:0.725 blue:0.827 alpha:1.000]


// BACKGROUND GRADIENT

//bottom color white in gradient bg
#define kGradientBottomColor [UIColor colorWithRed:0.871 green:0.894 blue:0.933 alpha:1.000]

//top color white value in gradient bg
#define kGradientTopColor [UIColor colorWithRed:0.871 green:0.894 blue:0.933 alpha:1.000]


// TITLE GRADIENT

//bool that turns off/on title gradient
#define kDrawTitleGradient YES

//bottom color white value in title gradient bg
#define kGradientTitleBottomColor [UIColor colorWithRed:0.980 green:0.984 blue:0.988 alpha:1.000]

//top color white value in title gradient bg
#define kGradientTitleTopColor [UIColor colorWithRed:0.980 green:0.984 blue:0.988 alpha:1.000]


// FONTS

//normal text font
#define kTextFont [UIFont fontWithName:@"HelveticaNeue" size:16.f]

//normal text color
#define kTextColor [UIColor colorWithRed:0.329 green:0.341 blue:0.353 alpha:1]
// highlighted text color
#define kTextHighlightColor [UIColor colorWithRed:0.098 green:0.102 blue:0.106 alpha:1.000]

//normal text alignment
#define kTextAlignment UITextAlignmentCenter

//title font
#define kTitleFont [UIFont fontWithName:@"HelveticaNeue-Bold" size:16.f]

//title text color
#define kTitleColor [UIColor colorWithRed:0.329 green:0.341 blue:0.353 alpha:1]
