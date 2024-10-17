#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol CallKeepPushDelegate <NSObject>

- (void)mapPushPayload:(NSDictionary* _Nonnull)payload withCompletion:(void (^)(NSDictionary* _Nullable))completion;

@optional
- (void)onCallEvent:(NSString* _Nonnull)event withCallData:(NSDictionary* _Nonnull)callData;

@end

NS_ASSUME_NONNULL_END
