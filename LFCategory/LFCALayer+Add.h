//
//  CALayer+LFAdd.h
//
//
//  Created by guoyaoyuan on 14-5-10.
//  Copyright (c) 2014 live Interactive. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

/**
 Provides extensions for `CALayer`.
 */
@interface CALayer (LFAdditions)

/**
 Take snapshot without transform, image's size equals to bounds.
 */
- (UIImage *)lf_snapshotImage;

/**
 Take snapshot without transform, PDF's page size equals to bounds.
 */
- (NSData *)lf_snapshotPDF;

/**
 Shortcut to set the layer's shadow
 
 @param color  Shadow Color
 @param offset Shadow offset
 @param radius Shadow radius
 */
- (void)lf_setLayerShadow:(UIColor*)color offset:(CGSize)offset radius:(CGFloat)radius;

/**
 Remove all sublayers.
 */
- (void)lf_removeAllSublayers;

@property (nonatomic) CGFloat lf_left;    ///< Shortcut for frame.origin.x.
@property (nonatomic) CGFloat lf_top;     ///< Shortcut for frame.origin.y
@property (nonatomic) CGFloat lf_right;   ///< Shortcut for frame.origin.x + frame.size.width
@property (nonatomic) CGFloat lf_bottom;  ///< Shortcut for frame.origin.y + frame.size.height
@property (nonatomic) CGFloat lf_width;   ///< Shortcut for frame.size.width.
@property (nonatomic) CGFloat lf_height;  ///< Shortcut for frame.size.height.
@property (nonatomic) CGPoint lf_center;  ///< Shortcut for center (Add)
@property (nonatomic) CGFloat lf_centerX; ///< Shortcut for center.x
@property (nonatomic) CGFloat lf_centerY; ///< Shortcut for center.y
@property (nonatomic) CGPoint lf_origin;  ///< Shortcut for frame.origin.
@property (nonatomic, getter=frameSize, setter=setFrameSize:) CGSize  size; ///< Shortcut for frame.size.


@property (nonatomic) CGFloat lf_transformRotation;     ///< key path "tranform.rotation"
@property (nonatomic) CGFloat lf_transformRotationX;    ///< key path "tranform.rotation.x"
@property (nonatomic) CGFloat lf_transformRotationY;    ///< key path "tranform.rotation.y"
@property (nonatomic) CGFloat lf_transformRotationZ;    ///< key path "tranform.rotation.z"
@property (nonatomic) CGFloat lf_transformScale;        ///< key path "tranform.scale"
@property (nonatomic) CGFloat lf_transformScaleX;       ///< key path "tranform.scale.x"
@property (nonatomic) CGFloat lf_transformScaleY;       ///< key path "tranform.scale.y"
@property (nonatomic) CGFloat lf_transformScaleZ;       ///< key path "tranform.scale.z"
@property (nonatomic) CGFloat lf_transformTranslationX; ///< key path "tranform.translation.x"
@property (nonatomic) CGFloat lf_transformTranslationY; ///< key path "tranform.translation.y"
@property (nonatomic) CGFloat lf_transformTranslationZ; ///< key path "tranform.translation.z"

/**
 做3D效果时，可以很方便用这个调整
 Shortcut for transform.m34, -1/1000 is a good value.
 It should be set before other transform shortcut.
 */
@property (nonatomic, assign) CGFloat lf_transformDepth;


/**
 Add a fade animation to layer's contents when the contents is changed.
 
 @param duration Animation duration
 @param curve    Animation curve.
 */
- (void)lf_addFadeAnimationWithDuration:(NSTimeInterval)duration curve:(UIViewAnimationCurve)curve;

/**
 Cancel fade animation which is added with "-addFadeAnimationWithDuration:curve:".
 */
- (void)lf_removePreviousFadeAnimation;

@end