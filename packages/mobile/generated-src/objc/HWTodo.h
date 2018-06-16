// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from helloworld.djinni

#import <Foundation/Foundation.h>

@interface HWTodo : NSObject
- (nonnull instancetype)initWithId:(int32_t)id
                             label:(nonnull NSString *)label
                         completed:(int32_t)completed;
+ (nonnull instancetype)todoWithId:(int32_t)id
                             label:(nonnull NSString *)label
                         completed:(int32_t)completed;

@property (nonatomic, readonly) int32_t id;

@property (nonatomic, readonly, nonnull) NSString * label;

@property (nonatomic, readonly) int32_t completed;

@end
