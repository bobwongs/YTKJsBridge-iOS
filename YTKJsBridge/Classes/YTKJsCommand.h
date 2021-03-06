//
//  YTKJSCommand.h
//  YTKJsBridge
//
//  Created by lihaichun on 2018/12/21.
//  Copyright © 2018年 fenbi. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface YTKJsCommand : NSObject

/** 方法名称 */
@property (nonatomic, copy) NSString *methodName;
/** 参数 */
@property (nonatomic, copy) NSArray *args;
/** 回调id */
@property (nonatomic, copy) NSString *callId;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;

@end

@interface YTKJsEvent : NSObject

@property (nonatomic, copy) NSString *event;

@property (nonatomic, copy) NSArray *arg;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;

@end

NS_ASSUME_NONNULL_END
