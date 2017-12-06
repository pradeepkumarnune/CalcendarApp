//
//  AppDelegate.h
//  CalcendarApp
//
//  Created by Admin on 15/09/1939 Saka.
//  Copyright © 1939 Saka vnsoftech. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

