//
//  NDSGame.h
//  nds4ios
//
//  Created by Zydeco on 16/7/2013.
//  Copyright (c) 2013 DS Team. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NDSGame : NSObject

@property (strong, nonatomic) NSString *path;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSInteger numberOfSaveStates;

+ (NSArray*)gamesAtPath:(NSString*)path;
+ (NDSGame*)gameWithPath:(NSString*)path;
- (NDSGame*)initWithPath:(NSString*)path;
- (NSString*)pathForSaveStateWithName:(NSString*)name;
- (NSString*)pathForSaveStateAtIndex:(NSInteger)idx;
- (NSString*)nameOfSaveStateAtIndex:(NSInteger)idx;
- (NSDate*)dateOfSaveStateAtIndex:(NSInteger)idx;
- (BOOL)deleteSaveStateAtIndex:(NSInteger)idx;
- (void)reloadSaveStates;

@end
