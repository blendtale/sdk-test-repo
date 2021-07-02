//
//  DyteSdk.h
//  dyteClientMobile
//
//  Created by Rohit Bhatia on 6/11/21.
//


@import UIKit;
@import Foundation;

NS_ASSUME_NONNULL_BEGIN

@interface Dyte : NSObject 

#pragma mark - This class is a singleton

+ (instancetype _Nonnull)sharedInstance;


// Not using any of the below methods
#pragma mark - Methods that the App delegate must call
-             (BOOL)application:(UIApplication *_Nonnull)application
  didFinishLaunchingWithOptions:(NSDictionary *_Nonnull)launchOptions;

-    (BOOL)application:(UIApplication *_Nonnull)application
  continueUserActivity:(NSUserActivity *_Nonnull)userActivity
    restorationHandler:(void (^_Nullable)(NSArray<id<UIUserActivityRestoring>> *_Nonnull))restorationHandler;

- (BOOL)application:(UIApplication *_Nonnull)app
            openURL:(NSURL *_Nonnull)url
            options:(NSDictionary<UIApplicationOpenURLOptionsKey,id> *_Nonnull)options;

- (void)showSplashScreen:(UIView * _Nonnull) rootView;

@end

NS_ASSUME_NONNULL_END
