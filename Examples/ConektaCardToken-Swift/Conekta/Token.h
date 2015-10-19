//
//  Token.h
//  Conekta
//
//  Created by Julian Ceballos on 10/16/15.
//
//

#ifndef Token_h
#define Token_h

#import "Card.h"
#import "Connection.h"
#import "DeviceCollectorSDK.h"

@interface Token : NSObject <DeviceCollectorSDKDelegate>

@property (nonatomic, retain) NSString *baseURI;
@property (nonatomic, retain) NSString* publicKey;
@property (nonatomic, retain) NSString *resourceURI;

@property (nonatomic, retain) Card* card;
@property (nonatomic, retain) NSString* deviceFingerprint;

- (id) initWithCard: (Card*) card;
- (void) setCard: (Card*) card;

- (void) createWithSuccess: (void(^)(NSDictionary *))successHandler andError: (void(^)(NSError*))errorHandler;

- (NSString *) apiKeyBase64: (NSString *)api_key;
- (void) deviceCollect;

@end

#endif /* Token_h */
