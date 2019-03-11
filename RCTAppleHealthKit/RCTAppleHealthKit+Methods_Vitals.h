#import "RCTAppleHealthKit.h"

@interface RCTAppleHealthKit (Methods_Vitals)

- (void)vitals_getOxygenSaturationSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)vitals_getHeartRateSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)vitals_getBodyTemperatureSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)vitals_getBloodPressureSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)vitals_getRespiratoryRateSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;

@end
