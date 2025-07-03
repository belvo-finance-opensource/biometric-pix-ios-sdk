#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class BPSDKAssertionResponse, BPSDKAttestationResponse, BPSDKAuthenticatorSelection, BPSDKAuthenticatorSelectionCompanion, BPSDKExcludeCredential, BPSDKExcludeCredentialCompanion, BPSDKFidoAuthenticationOptions, BPSDKFidoAuthenticationOptionsCompanion, BPSDKFidoRegistrationOptions, BPSDKFidoRegistrationOptionsCompanion, BPSDKGeolocation, BPSDKGeolocationCompanion, BPSDKIntegrity, BPSDKIntegrityCompanion, BPSDKJsonParser, BPSDKKotlinArray<T>, BPSDKKotlinEnum<E>, BPSDKKotlinEnumCompanion, BPSDKKotlinNothing, BPSDKKotlinx_serialization_coreSerialKind, BPSDKKotlinx_serialization_coreSerializersModule, BPSDKKotlinx_serialization_jsonClassDiscriminatorMode, BPSDKKotlinx_serialization_jsonJson, BPSDKKotlinx_serialization_jsonJsonConfiguration, BPSDKKotlinx_serialization_jsonJsonDefault, BPSDKKotlinx_serialization_jsonJsonElement, BPSDKKotlinx_serialization_jsonJsonElementCompanion, BPSDKPublicKeyCredentialParameters, BPSDKPublicKeyCredentialParametersCompanion, BPSDKRelyingParty, BPSDKRelyingPartyCompanion, BPSDKRiskSignals, BPSDKRiskSignalsCompanion, BPSDKScreenDimensions, BPSDKScreenDimensionsCompanion, BPSDKSdkPublicKeyCredentialDescriptor, BPSDKSdkPublicKeyCredentialDescriptorCompanion, BPSDKUser, BPSDKUserCompanion, NSData;

@protocol BPSDKFidoAuthenticationCallback, BPSDKFidoRegistrationCallback, BPSDKKotlinAnnotation, BPSDKKotlinComparable, BPSDKKotlinIterator, BPSDKKotlinKAnnotatedElement, BPSDKKotlinKClass, BPSDKKotlinKClassifier, BPSDKKotlinKDeclarationContainer, BPSDKKotlinx_serialization_coreCompositeDecoder, BPSDKKotlinx_serialization_coreCompositeEncoder, BPSDKKotlinx_serialization_coreDecoder, BPSDKKotlinx_serialization_coreDeserializationStrategy, BPSDKKotlinx_serialization_coreEncoder, BPSDKKotlinx_serialization_coreKSerializer, BPSDKKotlinx_serialization_coreSerialDescriptor, BPSDKKotlinx_serialization_coreSerialFormat, BPSDKKotlinx_serialization_coreSerializationStrategy, BPSDKKotlinx_serialization_coreSerializersModuleCollector, BPSDKKotlinx_serialization_coreStringFormat, BPSDKKotlinx_serialization_jsonJsonNamingStrategy;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface BPSDKBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface BPSDKBase (BPSDKBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface BPSDKMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface BPSDKMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorBPSDKKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface BPSDKNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface BPSDKByte : BPSDKNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface BPSDKUByte : BPSDKNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface BPSDKShort : BPSDKNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface BPSDKUShort : BPSDKNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface BPSDKInt : BPSDKNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface BPSDKUInt : BPSDKNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface BPSDKLong : BPSDKNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface BPSDKULong : BPSDKNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface BPSDKFloat : BPSDKNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface BPSDKDouble : BPSDKNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface BPSDKBoolean : BPSDKNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BiometricPixSDK")))
@interface BPSDKBiometricPixSDK : BPSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)cleanup __attribute__((swift_name("cleanup()")));
- (BPSDKRiskSignals *)collectRiskSignalsCustomerCreatedAt:(NSString *)customerCreatedAt __attribute__((swift_name("collectRiskSignals(customerCreatedAt:)")));
- (void)requestPermissionOnResult:(void (^)(BPSDKBoolean *))onResult __attribute__((swift_name("requestPermission(onResult:)")));
- (void)startRegistrationFidoResponseString:(NSString *)fidoResponseString callback:(id<BPSDKFidoRegistrationCallback>)callback __attribute__((swift_name("startRegistration(fidoResponseString:callback:)")));
- (void)startSigningFidoResponseString:(NSString *)fidoResponseString fallbackCredential:(NSString * _Nullable)fallbackCredential callback:(id<BPSDKFidoAuthenticationCallback>)callback __attribute__((swift_name("startSigning(fidoResponseString:fallbackCredential:callback:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AssertionResponse")))
@interface BPSDKAssertionResponse : BPSDKBase
- (instancetype)initWithEncodedId:(NSString *)encodedId rawId:(NSData *)rawId authenticatorData:(NSData * _Nullable)authenticatorData encodedAuthenticatorData:(NSString *)encodedAuthenticatorData clientDataJSON:(NSData *)clientDataJSON encodedClientDataJSON:(NSString *)encodedClientDataJSON signature:(NSData * _Nullable)signature encodedSignature:(NSString *)encodedSignature userHandle:(NSData * _Nullable)userHandle encodedUserHandle:(NSString *)encodedUserHandle __attribute__((swift_name("init(encodedId:rawId:authenticatorData:encodedAuthenticatorData:clientDataJSON:encodedClientDataJSON:signature:encodedSignature:userHandle:encodedUserHandle:)"))) __attribute__((objc_designated_initializer));
- (BPSDKAssertionResponse *)doCopyEncodedId:(NSString *)encodedId rawId:(NSData *)rawId authenticatorData:(NSData * _Nullable)authenticatorData encodedAuthenticatorData:(NSString *)encodedAuthenticatorData clientDataJSON:(NSData *)clientDataJSON encodedClientDataJSON:(NSString *)encodedClientDataJSON signature:(NSData * _Nullable)signature encodedSignature:(NSString *)encodedSignature userHandle:(NSData * _Nullable)userHandle encodedUserHandle:(NSString *)encodedUserHandle __attribute__((swift_name("doCopy(encodedId:rawId:authenticatorData:encodedAuthenticatorData:clientDataJSON:encodedClientDataJSON:signature:encodedSignature:userHandle:encodedUserHandle:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSData * _Nullable authenticatorData __attribute__((swift_name("authenticatorData")));
@property (readonly) NSData *clientDataJSON __attribute__((swift_name("clientDataJSON")));
@property (readonly) NSString *encodedAuthenticatorData __attribute__((swift_name("encodedAuthenticatorData")));
@property (readonly) NSString *encodedClientDataJSON __attribute__((swift_name("encodedClientDataJSON")));
@property (readonly) NSString *encodedId __attribute__((swift_name("encodedId")));
@property (readonly) NSString *encodedSignature __attribute__((swift_name("encodedSignature")));
@property (readonly) NSString *encodedUserHandle __attribute__((swift_name("encodedUserHandle")));
@property (readonly) NSData *rawId __attribute__((swift_name("rawId")));
@property (readonly) NSData * _Nullable signature __attribute__((swift_name("signature")));
@property (readonly) NSData * _Nullable userHandle __attribute__((swift_name("userHandle")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AttestationResponse")))
@interface BPSDKAttestationResponse : BPSDKBase
- (instancetype)initWithEncodedId:(NSString *)encodedId rawId:(NSData *)rawId rawAttestationObject:(NSData * _Nullable)rawAttestationObject encodedAttestationObject:(NSString *)encodedAttestationObject rawClientDataJSON:(NSData * _Nullable)rawClientDataJSON encodedClientDataJSON:(NSString *)encodedClientDataJSON __attribute__((swift_name("init(encodedId:rawId:rawAttestationObject:encodedAttestationObject:rawClientDataJSON:encodedClientDataJSON:)"))) __attribute__((objc_designated_initializer));
- (BPSDKAttestationResponse *)doCopyEncodedId:(NSString *)encodedId rawId:(NSData *)rawId rawAttestationObject:(NSData * _Nullable)rawAttestationObject encodedAttestationObject:(NSString *)encodedAttestationObject rawClientDataJSON:(NSData * _Nullable)rawClientDataJSON encodedClientDataJSON:(NSString *)encodedClientDataJSON __attribute__((swift_name("doCopy(encodedId:rawId:rawAttestationObject:encodedAttestationObject:rawClientDataJSON:encodedClientDataJSON:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedAttestationObject __attribute__((swift_name("encodedAttestationObject")));
@property (readonly) NSString *encodedClientDataJSON __attribute__((swift_name("encodedClientDataJSON")));
@property (readonly) NSString *encodedId __attribute__((swift_name("encodedId")));
@property (readonly) NSData * _Nullable rawAttestationObject __attribute__((swift_name("rawAttestationObject")));
@property (readonly) NSData * _Nullable rawClientDataJSON __attribute__((swift_name("rawClientDataJSON")));
@property (readonly) NSData *rawId __attribute__((swift_name("rawId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthenticatorSelection")))
@interface BPSDKAuthenticatorSelection : BPSDKBase
- (instancetype)initWithAuthenticatorAttachment:(NSString * _Nullable)authenticatorAttachment userVerification:(NSString * _Nullable)userVerification requireResidentKey:(BPSDKBoolean * _Nullable)requireResidentKey residentKey:(NSString * _Nullable)residentKey __attribute__((swift_name("init(authenticatorAttachment:userVerification:requireResidentKey:residentKey:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BPSDKAuthenticatorSelectionCompanion *companion __attribute__((swift_name("companion")));
- (BPSDKAuthenticatorSelection *)doCopyAuthenticatorAttachment:(NSString * _Nullable)authenticatorAttachment userVerification:(NSString * _Nullable)userVerification requireResidentKey:(BPSDKBoolean * _Nullable)requireResidentKey residentKey:(NSString * _Nullable)residentKey __attribute__((swift_name("doCopy(authenticatorAttachment:userVerification:requireResidentKey:residentKey:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable authenticatorAttachment __attribute__((swift_name("authenticatorAttachment")));
@property (readonly) BPSDKBoolean * _Nullable requireResidentKey __attribute__((swift_name("requireResidentKey")));
@property (readonly) NSString * _Nullable residentKey __attribute__((swift_name("residentKey")));
@property (readonly) NSString * _Nullable userVerification __attribute__((swift_name("userVerification")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthenticatorSelection.Companion")))
@interface BPSDKAuthenticatorSelectionCompanion : BPSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BPSDKAuthenticatorSelectionCompanion *shared __attribute__((swift_name("shared")));
- (id<BPSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((unavailable("Kotlin subclass of Objective-C class can't be imported")))
__attribute__((swift_name("DefaultPresentationContextProvider")))
@interface BPSDKDefaultPresentationContextProvider : NSObject
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExcludeCredential")))
@interface BPSDKExcludeCredential : BPSDKBase
- (instancetype)initWithId:(NSString *)id type:(NSString *)type __attribute__((swift_name("init(id:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BPSDKExcludeCredentialCompanion *companion __attribute__((swift_name("companion")));
- (BPSDKExcludeCredential *)doCopyId:(NSString *)id type:(NSString *)type __attribute__((swift_name("doCopy(id:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExcludeCredential.Companion")))
@interface BPSDKExcludeCredentialCompanion : BPSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BPSDKExcludeCredentialCompanion *shared __attribute__((swift_name("shared")));
- (id<BPSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("FidoAuthenticationCallback")))
@protocol BPSDKFidoAuthenticationCallback
@required
- (void)onErrorError:(NSString *)error __attribute__((swift_name("onError(error:)")));
- (void)onSuccessResponse:(BPSDKAssertionResponse *)response __attribute__((swift_name("onSuccess(response:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FidoAuthenticationOptions")))
@interface BPSDKFidoAuthenticationOptions : BPSDKBase
- (instancetype)initWithChallenge:(NSString *)challenge rpId:(NSString *)rpId allowCredentials:(NSArray<BPSDKSdkPublicKeyCredentialDescriptor *> * _Nullable)allowCredentials timeout:(BPSDKInt * _Nullable)timeout userVerification:(NSString * _Nullable)userVerification extensions:(NSDictionary<NSString *, NSString *> * _Nullable)extensions __attribute__((swift_name("init(challenge:rpId:allowCredentials:timeout:userVerification:extensions:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BPSDKFidoAuthenticationOptionsCompanion *companion __attribute__((swift_name("companion")));
- (BPSDKFidoAuthenticationOptions *)doCopyChallenge:(NSString *)challenge rpId:(NSString *)rpId allowCredentials:(NSArray<BPSDKSdkPublicKeyCredentialDescriptor *> * _Nullable)allowCredentials timeout:(BPSDKInt * _Nullable)timeout userVerification:(NSString * _Nullable)userVerification extensions:(NSDictionary<NSString *, NSString *> * _Nullable)extensions __attribute__((swift_name("doCopy(challenge:rpId:allowCredentials:timeout:userVerification:extensions:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<BPSDKSdkPublicKeyCredentialDescriptor *> * _Nullable allowCredentials __attribute__((swift_name("allowCredentials")));
@property (readonly) NSString *challenge __attribute__((swift_name("challenge")));
@property (readonly) NSDictionary<NSString *, NSString *> * _Nullable extensions __attribute__((swift_name("extensions")));
@property (readonly) NSString *rpId __attribute__((swift_name("rpId")));
@property (readonly) BPSDKInt * _Nullable timeout __attribute__((swift_name("timeout")));
@property (readonly) NSString * _Nullable userVerification __attribute__((swift_name("userVerification")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FidoAuthenticationOptions.Companion")))
@interface BPSDKFidoAuthenticationOptionsCompanion : BPSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BPSDKFidoAuthenticationOptionsCompanion *shared __attribute__((swift_name("shared")));
- (id<BPSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("FidoRegistrationCallback")))
@protocol BPSDKFidoRegistrationCallback
@required
- (void)onErrorError:(NSString *)error __attribute__((swift_name("onError(error:)")));
- (void)onSuccessResponse_:(BPSDKAttestationResponse *)response __attribute__((swift_name("onSuccess(response_:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FidoRegistrationOptions")))
@interface BPSDKFidoRegistrationOptions : BPSDKBase
- (instancetype)initWithRp:(BPSDKRelyingParty *)rp user:(BPSDKUser *)user challenge:(NSString *)challenge pubKeyCredParams:(NSArray<BPSDKPublicKeyCredentialParameters *> *)pubKeyCredParams timeout:(BPSDKInt * _Nullable)timeout excludeCredentials:(NSArray<BPSDKExcludeCredential *> * _Nullable)excludeCredentials authenticatorSelection:(BPSDKAuthenticatorSelection * _Nullable)authenticatorSelection attestation:(NSString * _Nullable)attestation attestationFormats:(NSArray<NSString *> * _Nullable)attestationFormats extensions:(NSDictionary<NSString *, NSString *> * _Nullable)extensions __attribute__((swift_name("init(rp:user:challenge:pubKeyCredParams:timeout:excludeCredentials:authenticatorSelection:attestation:attestationFormats:extensions:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BPSDKFidoRegistrationOptionsCompanion *companion __attribute__((swift_name("companion")));
- (BPSDKFidoRegistrationOptions *)doCopyRp:(BPSDKRelyingParty *)rp user:(BPSDKUser *)user challenge:(NSString *)challenge pubKeyCredParams:(NSArray<BPSDKPublicKeyCredentialParameters *> *)pubKeyCredParams timeout:(BPSDKInt * _Nullable)timeout excludeCredentials:(NSArray<BPSDKExcludeCredential *> * _Nullable)excludeCredentials authenticatorSelection:(BPSDKAuthenticatorSelection * _Nullable)authenticatorSelection attestation:(NSString * _Nullable)attestation attestationFormats:(NSArray<NSString *> * _Nullable)attestationFormats extensions:(NSDictionary<NSString *, NSString *> * _Nullable)extensions __attribute__((swift_name("doCopy(rp:user:challenge:pubKeyCredParams:timeout:excludeCredentials:authenticatorSelection:attestation:attestationFormats:extensions:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable attestation __attribute__((swift_name("attestation")));
@property (readonly) NSArray<NSString *> * _Nullable attestationFormats __attribute__((swift_name("attestationFormats")));
@property (readonly) BPSDKAuthenticatorSelection * _Nullable authenticatorSelection __attribute__((swift_name("authenticatorSelection")));
@property (readonly) NSString *challenge __attribute__((swift_name("challenge")));
@property (readonly) NSArray<BPSDKExcludeCredential *> * _Nullable excludeCredentials __attribute__((swift_name("excludeCredentials")));
@property (readonly) NSDictionary<NSString *, NSString *> * _Nullable extensions __attribute__((swift_name("extensions")));
@property (readonly) NSArray<BPSDKPublicKeyCredentialParameters *> *pubKeyCredParams __attribute__((swift_name("pubKeyCredParams")));
@property (readonly) BPSDKRelyingParty *rp __attribute__((swift_name("rp")));
@property (readonly) BPSDKInt * _Nullable timeout __attribute__((swift_name("timeout")));
@property (readonly) BPSDKUser *user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FidoRegistrationOptions.Companion")))
@interface BPSDKFidoRegistrationOptionsCompanion : BPSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BPSDKFidoRegistrationOptionsCompanion *shared __attribute__((swift_name("shared")));
- (id<BPSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Geolocation")))
@interface BPSDKGeolocation : BPSDKBase
- (instancetype)initWithLatitude:(double)latitude longitude:(double)longitude type:(NSString * _Nullable)type __attribute__((swift_name("init(latitude:longitude:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BPSDKGeolocationCompanion *companion __attribute__((swift_name("companion")));
- (BPSDKGeolocation *)doCopyLatitude:(double)latitude longitude:(double)longitude type:(NSString * _Nullable)type __attribute__((swift_name("doCopy(latitude:longitude:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double latitude __attribute__((swift_name("latitude")));
@property (readonly) double longitude __attribute__((swift_name("longitude")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Geolocation.Companion")))
@interface BPSDKGeolocationCompanion : BPSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BPSDKGeolocationCompanion *shared __attribute__((swift_name("shared")));
- (id<BPSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Integrity")))
@interface BPSDKIntegrity : BPSDKBase
- (instancetype)initWithAppRecognitionVerdict:(NSString *)appRecognitionVerdict deviceRecognitionVerdict:(NSArray<NSString *> *)deviceRecognitionVerdict __attribute__((swift_name("init(appRecognitionVerdict:deviceRecognitionVerdict:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BPSDKIntegrityCompanion *companion __attribute__((swift_name("companion")));
- (BPSDKIntegrity *)doCopyAppRecognitionVerdict:(NSString *)appRecognitionVerdict deviceRecognitionVerdict:(NSArray<NSString *> *)deviceRecognitionVerdict __attribute__((swift_name("doCopy(appRecognitionVerdict:deviceRecognitionVerdict:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *appRecognitionVerdict __attribute__((swift_name("appRecognitionVerdict")));
@property (readonly) NSArray<NSString *> *deviceRecognitionVerdict __attribute__((swift_name("deviceRecognitionVerdict")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Integrity.Companion")))
@interface BPSDKIntegrityCompanion : BPSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BPSDKIntegrityCompanion *shared __attribute__((swift_name("shared")));
- (id<BPSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PublicKeyCredentialParameters")))
@interface BPSDKPublicKeyCredentialParameters : BPSDKBase
- (instancetype)initWithAlg:(int32_t)alg type:(NSString *)type __attribute__((swift_name("init(alg:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BPSDKPublicKeyCredentialParametersCompanion *companion __attribute__((swift_name("companion")));
- (BPSDKPublicKeyCredentialParameters *)doCopyAlg:(int32_t)alg type:(NSString *)type __attribute__((swift_name("doCopy(alg:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t alg __attribute__((swift_name("alg")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PublicKeyCredentialParameters.Companion")))
@interface BPSDKPublicKeyCredentialParametersCompanion : BPSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BPSDKPublicKeyCredentialParametersCompanion *shared __attribute__((swift_name("shared")));
- (id<BPSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RelyingParty")))
@interface BPSDKRelyingParty : BPSDKBase
- (instancetype)initWithId:(NSString *)id name:(NSString *)name __attribute__((swift_name("init(id:name:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BPSDKRelyingPartyCompanion *companion __attribute__((swift_name("companion")));
- (BPSDKRelyingParty *)doCopyId:(NSString *)id name:(NSString *)name __attribute__((swift_name("doCopy(id:name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RelyingParty.Companion")))
@interface BPSDKRelyingPartyCompanion : BPSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BPSDKRelyingPartyCompanion *shared __attribute__((swift_name("shared")));
- (id<BPSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RiskSignals")))
@interface BPSDKRiskSignals : BPSDKBase
- (instancetype)initWithDeviceId:(NSString *)deviceId isRootedDevice:(BOOL)isRootedDevice screenBrightness:(int32_t)screenBrightness elapsedTimeSinceBoot:(int64_t)elapsedTimeSinceBoot osVersion:(NSString *)osVersion userTimeZoneOffset:(NSString *)userTimeZoneOffset language:(NSString *)language screenDimensions:(BPSDKScreenDimensions *)screenDimensions geolocation:(BPSDKGeolocation * _Nullable)geolocation accountTenure:(NSString *)accountTenure isCallInProgress:(BPSDKBoolean * _Nullable)isCallInProgress isDevModeEnabled:(BPSDKBoolean * _Nullable)isDevModeEnabled isMockGPS:(BPSDKBoolean * _Nullable)isMockGPS isEmulated:(BOOL)isEmulated isMonkeyRunner:(BPSDKBoolean * _Nullable)isMonkeyRunner isCharging:(BOOL)isCharging antennaInformation:(NSString * _Nullable)antennaInformation isUsbConnected:(BPSDKBoolean * _Nullable)isUsbConnected integrity:(BPSDKIntegrity *)integrity __attribute__((swift_name("init(deviceId:isRootedDevice:screenBrightness:elapsedTimeSinceBoot:osVersion:userTimeZoneOffset:language:screenDimensions:geolocation:accountTenure:isCallInProgress:isDevModeEnabled:isMockGPS:isEmulated:isMonkeyRunner:isCharging:antennaInformation:isUsbConnected:integrity:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BPSDKRiskSignalsCompanion *companion __attribute__((swift_name("companion")));
- (BPSDKRiskSignals *)doCopyDeviceId:(NSString *)deviceId isRootedDevice:(BOOL)isRootedDevice screenBrightness:(int32_t)screenBrightness elapsedTimeSinceBoot:(int64_t)elapsedTimeSinceBoot osVersion:(NSString *)osVersion userTimeZoneOffset:(NSString *)userTimeZoneOffset language:(NSString *)language screenDimensions:(BPSDKScreenDimensions *)screenDimensions geolocation:(BPSDKGeolocation * _Nullable)geolocation accountTenure:(NSString *)accountTenure isCallInProgress:(BPSDKBoolean * _Nullable)isCallInProgress isDevModeEnabled:(BPSDKBoolean * _Nullable)isDevModeEnabled isMockGPS:(BPSDKBoolean * _Nullable)isMockGPS isEmulated:(BOOL)isEmulated isMonkeyRunner:(BPSDKBoolean * _Nullable)isMonkeyRunner isCharging:(BOOL)isCharging antennaInformation:(NSString * _Nullable)antennaInformation isUsbConnected:(BPSDKBoolean * _Nullable)isUsbConnected integrity:(BPSDKIntegrity *)integrity __attribute__((swift_name("doCopy(deviceId:isRootedDevice:screenBrightness:elapsedTimeSinceBoot:osVersion:userTimeZoneOffset:language:screenDimensions:geolocation:accountTenure:isCallInProgress:isDevModeEnabled:isMockGPS:isEmulated:isMonkeyRunner:isCharging:antennaInformation:isUsbConnected:integrity:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toJsonString __attribute__((swift_name("toJsonString()")));
- (NSString *)toPrettyJsonString __attribute__((swift_name("toPrettyJsonString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *accountTenure __attribute__((swift_name("accountTenure")));
@property (readonly) NSString * _Nullable antennaInformation __attribute__((swift_name("antennaInformation")));
@property (readonly) NSString *deviceId __attribute__((swift_name("deviceId")));
@property (readonly) int64_t elapsedTimeSinceBoot __attribute__((swift_name("elapsedTimeSinceBoot")));
@property (readonly) BPSDKGeolocation * _Nullable geolocation __attribute__((swift_name("geolocation")));
@property (readonly) BPSDKIntegrity *integrity __attribute__((swift_name("integrity")));
@property (readonly) BPSDKBoolean * _Nullable isCallInProgress __attribute__((swift_name("isCallInProgress")));
@property (readonly) BOOL isCharging __attribute__((swift_name("isCharging")));
@property (readonly) BPSDKBoolean * _Nullable isDevModeEnabled __attribute__((swift_name("isDevModeEnabled")));
@property (readonly) BOOL isEmulated __attribute__((swift_name("isEmulated")));
@property (readonly) BPSDKBoolean * _Nullable isMockGPS __attribute__((swift_name("isMockGPS")));
@property (readonly) BPSDKBoolean * _Nullable isMonkeyRunner __attribute__((swift_name("isMonkeyRunner")));
@property (readonly) BOOL isRootedDevice __attribute__((swift_name("isRootedDevice")));
@property (readonly) BPSDKBoolean * _Nullable isUsbConnected __attribute__((swift_name("isUsbConnected")));
@property (readonly) NSString *language __attribute__((swift_name("language")));
@property (readonly) NSString *osVersion __attribute__((swift_name("osVersion")));
@property (readonly) int32_t screenBrightness __attribute__((swift_name("screenBrightness")));
@property (readonly) BPSDKScreenDimensions *screenDimensions __attribute__((swift_name("screenDimensions")));
@property (readonly) NSString *userTimeZoneOffset __attribute__((swift_name("userTimeZoneOffset")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RiskSignals.Companion")))
@interface BPSDKRiskSignalsCompanion : BPSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BPSDKRiskSignalsCompanion *shared __attribute__((swift_name("shared")));
- (id<BPSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScreenDimensions")))
@interface BPSDKScreenDimensions : BPSDKBase
- (instancetype)initWithHeight:(int32_t)height width:(int32_t)width __attribute__((swift_name("init(height:width:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BPSDKScreenDimensionsCompanion *companion __attribute__((swift_name("companion")));
- (BPSDKScreenDimensions *)doCopyHeight:(int32_t)height width:(int32_t)width __attribute__((swift_name("doCopy(height:width:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScreenDimensions.Companion")))
@interface BPSDKScreenDimensionsCompanion : BPSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BPSDKScreenDimensionsCompanion *shared __attribute__((swift_name("shared")));
- (id<BPSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SdkPublicKeyCredentialDescriptor")))
@interface BPSDKSdkPublicKeyCredentialDescriptor : BPSDKBase
- (instancetype)initWithType:(NSString *)type id:(NSString *)id transports:(NSArray<NSString *> * _Nullable)transports __attribute__((swift_name("init(type:id:transports:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BPSDKSdkPublicKeyCredentialDescriptorCompanion *companion __attribute__((swift_name("companion")));
- (BPSDKSdkPublicKeyCredentialDescriptor *)doCopyType:(NSString *)type id:(NSString *)id transports:(NSArray<NSString *> * _Nullable)transports __attribute__((swift_name("doCopy(type:id:transports:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSArray<NSString *> * _Nullable transports __attribute__((swift_name("transports")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SdkPublicKeyCredentialDescriptor.Companion")))
@interface BPSDKSdkPublicKeyCredentialDescriptorCompanion : BPSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BPSDKSdkPublicKeyCredentialDescriptorCompanion *shared __attribute__((swift_name("shared")));
- (id<BPSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("User")))
@interface BPSDKUser : BPSDKBase
- (instancetype)initWithId:(NSString *)id name:(NSString *)name displayName:(NSString *)displayName __attribute__((swift_name("init(id:name:displayName:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BPSDKUserCompanion *companion __attribute__((swift_name("companion")));
- (BPSDKUser *)doCopyId:(NSString *)id name:(NSString *)name displayName:(NSString *)displayName __attribute__((swift_name("doCopy(id:name:displayName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *displayName __attribute__((swift_name("displayName")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("User.Companion")))
@interface BPSDKUserCompanion : BPSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BPSDKUserCompanion *shared __attribute__((swift_name("shared")));
- (id<BPSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonParser")))
@interface BPSDKJsonParser : BPSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)jsonParser __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BPSDKJsonParser *shared __attribute__((swift_name("shared")));
- (id _Nullable)parseJsonString:(NSString *)jsonString __attribute__((swift_name("parse(jsonString:)")));
@property (readonly) BPSDKKotlinx_serialization_jsonJson *json __attribute__((swift_name("json")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NSDataExtensionsKt")))
@interface BPSDKNSDataExtensionsKt : BPSDKBase
+ (NSString *)toBase64String:(NSData *)receiver __attribute__((swift_name("toBase64String(_:)")));
+ (NSString *)toBase64UrlString:(NSData *)receiver __attribute__((swift_name("toBase64UrlString(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StringExtensionsKt")))
@interface BPSDKStringExtensionsKt : BPSDKBase
+ (NSData *)fromBase64ToNSData:(NSString *)receiver __attribute__((swift_name("fromBase64ToNSData(_:)")));
+ (NSData *)fromBase64UrlToNSData:(NSString *)receiver __attribute__((swift_name("fromBase64UrlToNSData(_:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol BPSDKKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<BPSDKKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<BPSDKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol BPSDKKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<BPSDKKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<BPSDKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol BPSDKKotlinx_serialization_coreKSerializer <BPSDKKotlinx_serialization_coreSerializationStrategy, BPSDKKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialFormat")))
@protocol BPSDKKotlinx_serialization_coreSerialFormat
@required
@property (readonly) BPSDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreStringFormat")))
@protocol BPSDKKotlinx_serialization_coreStringFormat <BPSDKKotlinx_serialization_coreSerialFormat>
@required
- (id _Nullable)decodeFromStringDeserializer:(id<BPSDKKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (NSString *)encodeToStringSerializer:(id<BPSDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_jsonJson")))
@interface BPSDKKotlinx_serialization_jsonJson : BPSDKBase <BPSDKKotlinx_serialization_coreStringFormat>
@property (class, readonly, getter=companion) BPSDKKotlinx_serialization_jsonJsonDefault *companion __attribute__((swift_name("companion")));
- (id _Nullable)decodeFromJsonElementDeserializer:(id<BPSDKKotlinx_serialization_coreDeserializationStrategy>)deserializer element:(BPSDKKotlinx_serialization_jsonJsonElement *)element __attribute__((swift_name("decodeFromJsonElement(deserializer:element:)")));
- (id _Nullable)decodeFromStringString:(NSString *)string __attribute__((swift_name("decodeFromString(string:)")));
- (id _Nullable)decodeFromStringDeserializer:(id<BPSDKKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (BPSDKKotlinx_serialization_jsonJsonElement *)encodeToJsonElementSerializer:(id<BPSDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToJsonElement(serializer:value:)")));
- (NSString *)encodeToStringValue:(id _Nullable)value __attribute__((swift_name("encodeToString(value:)")));
- (NSString *)encodeToStringSerializer:(id<BPSDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
- (BPSDKKotlinx_serialization_jsonJsonElement *)parseToJsonElementString:(NSString *)string __attribute__((swift_name("parseToJsonElement(string:)")));
@property (readonly) BPSDKKotlinx_serialization_jsonJsonConfiguration *configuration __attribute__((swift_name("configuration")));
@property (readonly) BPSDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol BPSDKKotlinx_serialization_coreEncoder
@required
- (id<BPSDKKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<BPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<BPSDKKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<BPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<BPSDKKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<BPSDKKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<BPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<BPSDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<BPSDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) BPSDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol BPSDKKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<BPSDKKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<BPSDKKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<BPSDKKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) BPSDKKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol BPSDKKotlinx_serialization_coreDecoder
@required
- (id<BPSDKKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<BPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<BPSDKKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<BPSDKKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<BPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BPSDKKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<BPSDKKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<BPSDKKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) BPSDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface BPSDKKotlinx_serialization_coreSerializersModule : BPSDKBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<BPSDKKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<BPSDKKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<BPSDKKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<BPSDKKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<BPSDKKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<BPSDKKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<BPSDKKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<BPSDKKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJson.Default")))
@interface BPSDKKotlinx_serialization_jsonJsonDefault : BPSDKKotlinx_serialization_jsonJson
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)default_ __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BPSDKKotlinx_serialization_jsonJsonDefault *shared __attribute__((swift_name("shared")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/serialization/json/JsonElementSerializer))
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface BPSDKKotlinx_serialization_jsonJsonElement : BPSDKBase
@property (class, readonly, getter=companion) BPSDKKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonConfiguration")))
@interface BPSDKKotlinx_serialization_jsonJsonConfiguration : BPSDKBase
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL allowComments __attribute__((swift_name("allowComments")));
@property (readonly) BOOL allowSpecialFloatingPointValues __attribute__((swift_name("allowSpecialFloatingPointValues")));
@property (readonly) BOOL allowStructuredMapKeys __attribute__((swift_name("allowStructuredMapKeys")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL allowTrailingComma __attribute__((swift_name("allowTrailingComma")));
@property (readonly) NSString *classDiscriminator __attribute__((swift_name("classDiscriminator")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property BPSDKKotlinx_serialization_jsonClassDiscriminatorMode *classDiscriminatorMode __attribute__((swift_name("classDiscriminatorMode")));
@property (readonly) BOOL coerceInputValues __attribute__((swift_name("coerceInputValues")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL decodeEnumsCaseInsensitive __attribute__((swift_name("decodeEnumsCaseInsensitive")));
@property (readonly) BOOL encodeDefaults __attribute__((swift_name("encodeDefaults")));
@property (readonly) BOOL explicitNulls __attribute__((swift_name("explicitNulls")));
@property (readonly) BOOL ignoreUnknownKeys __attribute__((swift_name("ignoreUnknownKeys")));
@property (readonly) BOOL isLenient __attribute__((swift_name("isLenient")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) id<BPSDKKotlinx_serialization_jsonJsonNamingStrategy> _Nullable namingStrategy __attribute__((swift_name("namingStrategy")));
@property (readonly) BOOL prettyPrint __attribute__((swift_name("prettyPrint")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *prettyPrintIndent __attribute__((swift_name("prettyPrintIndent")));
@property (readonly) BOOL useAlternativeNames __attribute__((swift_name("useAlternativeNames")));
@property (readonly) BOOL useArrayPolymorphism __attribute__((swift_name("useArrayPolymorphism")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol BPSDKKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<BPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<BPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<BPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<BPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<BPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<BPSDKKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<BPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<BPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<BPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<BPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<BPSDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<BPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<BPSDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<BPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<BPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<BPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<BPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) BPSDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol BPSDKKotlinAnnotation
@required
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface BPSDKKotlinx_serialization_coreSerialKind : BPSDKBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol BPSDKKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<BPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<BPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<BPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<BPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<BPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<BPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<BPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<BPSDKKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<BPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<BPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<BPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<BPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<BPSDKKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<BPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<BPSDKKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<BPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<BPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<BPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) BPSDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface BPSDKKotlinNothing : BPSDKBase
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol BPSDKKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<BPSDKKotlinKClass>)kClass provider:(id<BPSDKKotlinx_serialization_coreKSerializer> (^)(NSArray<id<BPSDKKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<BPSDKKotlinKClass>)kClass serializer:(id<BPSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<BPSDKKotlinKClass>)baseClass actualClass:(id<BPSDKKotlinKClass>)actualClass actualSerializer:(id<BPSDKKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<BPSDKKotlinKClass>)baseClass defaultDeserializerProvider:(id<BPSDKKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<BPSDKKotlinKClass>)baseClass defaultDeserializerProvider:(id<BPSDKKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<BPSDKKotlinKClass>)baseClass defaultSerializerProvider:(id<BPSDKKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol BPSDKKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol BPSDKKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol BPSDKKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol BPSDKKotlinKClass <BPSDKKotlinKDeclarationContainer, BPSDKKotlinKAnnotatedElement, BPSDKKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement.Companion")))
@interface BPSDKKotlinx_serialization_jsonJsonElementCompanion : BPSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BPSDKKotlinx_serialization_jsonJsonElementCompanion *shared __attribute__((swift_name("shared")));
- (id<BPSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol BPSDKKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface BPSDKKotlinEnum<E> : BPSDKBase <BPSDKKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BPSDKKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonClassDiscriminatorMode")))
@interface BPSDKKotlinx_serialization_jsonClassDiscriminatorMode : BPSDKKotlinEnum<BPSDKKotlinx_serialization_jsonClassDiscriminatorMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) BPSDKKotlinx_serialization_jsonClassDiscriminatorMode *none __attribute__((swift_name("none")));
@property (class, readonly) BPSDKKotlinx_serialization_jsonClassDiscriminatorMode *allJsonObjects __attribute__((swift_name("allJsonObjects")));
@property (class, readonly) BPSDKKotlinx_serialization_jsonClassDiscriminatorMode *polymorphic __attribute__((swift_name("polymorphic")));
+ (BPSDKKotlinArray<BPSDKKotlinx_serialization_jsonClassDiscriminatorMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<BPSDKKotlinx_serialization_jsonClassDiscriminatorMode *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonNamingStrategy")))
@protocol BPSDKKotlinx_serialization_jsonJsonNamingStrategy
@required
- (NSString *)serialNameForJsonDescriptor:(id<BPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor elementIndex:(int32_t)elementIndex serialName:(NSString *)serialName __attribute__((swift_name("serialNameForJson(descriptor:elementIndex:serialName:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface BPSDKKotlinEnumCompanion : BPSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BPSDKKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface BPSDKKotlinArray<T> : BPSDKBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(BPSDKInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<BPSDKKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol BPSDKKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
