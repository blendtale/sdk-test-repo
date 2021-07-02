//
//  DyteMeeting.h
//  dyteClientMobile
//
//  Created by Rohit Bhatia on 08/06/21.
//

#import <UIKit/UIKit.h>
#import "DyteMeetingConfig.h"

NS_ASSUME_NONNULL_BEGIN

@interface DyteMeetingView : UIView
- (void) setPropsAndRenderView:(NSDictionary *_Nonnull)config;
@end

NS_ASSUME_NONNULL_END
