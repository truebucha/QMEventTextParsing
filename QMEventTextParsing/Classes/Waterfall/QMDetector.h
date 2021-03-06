//
//  QMDetector.h
//  QromaScan
//
//  Created by bucha on 10/7/17.
//  Copyright © 2017 Qroma. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CDBKit/CDBKit.h>
#import "QMSemanticChunk.h"


@interface QMDetector : NSObject

@property (strong, nonatomic, readonly, nullable) NSArray<QMSemanticChunk *> * detectedChunks;
@property (strong, nonatomic, readonly, nullable) NSArray<QMSemanticChunk *> * possibleChunks;
@property (assign, nonatomic, readonly) BOOL failed;
@property (copy, nonatomic, readonly, nullable) NSString * detectedValueDescription;

- (void) detectDataUsingString: (NSString * _Nonnull) string
                    completion: (CDBObjectErrorCompletion _Nonnull) completion;

@end
