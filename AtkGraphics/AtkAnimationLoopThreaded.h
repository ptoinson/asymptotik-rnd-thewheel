//
//  AtkAnimationLoopThreaded.h
//  Atk
//
//  Created by Rick Boykin on 3/10/14.
//  Copyright 2014 Asymptotik Limited. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AtkAnimationLoop.h"

@interface AtkAnimationLoopThreaded : AtkAnimationLoop 
{
    AtkAnimationFrameData *theFrameData;
}

@end
