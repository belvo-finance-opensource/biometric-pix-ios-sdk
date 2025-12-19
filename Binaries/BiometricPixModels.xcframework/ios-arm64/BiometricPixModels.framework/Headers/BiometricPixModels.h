#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class AssertionResponse, AttestationResponse, AuthenticatorSelection, AuthenticatorSelectionCompanion, AuthorizePaymentIntentPayload, AuthorizePaymentIntentPayloadCompanion, BPMJsonParser, BPMKotlinArray<T>, BPMKotlinEnum<E>, BPMKotlinEnumCompanion, BPMKotlinNothing, BPMKotlinx_serialization_coreSerialKind, BPMKotlinx_serialization_coreSerializersModule, BPMKotlinx_serialization_jsonClassDiscriminatorMode, BPMKotlinx_serialization_jsonJson, BPMKotlinx_serialization_jsonJsonConfiguration, BPMKotlinx_serialization_jsonJsonDefault, BPMKotlinx_serialization_jsonJsonElement, BPMKotlinx_serialization_jsonJsonElementCompanion, BankAccount, BankAccountCompanion, BelvoApiErrorItem, BelvoApiErrorItemCompanion, Branding, BrandingCompanion, CallbackUrls, CallbackUrlsCompanion, Charge, ChargeCompanion, ChargeStatus, ChargeStatusCompanion, ColorScheme, CompleteEnrollmentPayload, CompleteEnrollmentPayloadCompanion, ConfirmationData, ConfirmationDataCompanion, ConfirmationResponse, ConfirmationResponseCompanion, CreatePaymentIntentPayload, CreatePaymentIntentPayloadCompanion, Customer, CustomerCompanion, Enrollment, EnrollmentConfiguration, EnrollmentConfigurationCompanion, EnrollmentConfirmationPayload, EnrollmentConfirmationPayloadCompanion, EnrollmentData, EnrollmentDataCompanion, EnrollmentDetails, EnrollmentDetailsCompanion, EnrollmentDetailsStatus, EnrollmentDetailsStatusCompanion, EnrollmentMetadata, EnrollmentMetadataCompanion, EnrollmentPayload, EnrollmentPayloadCompanion, EnrollmentPayloadDetails, EnrollmentPayloadDetailsCompanion, EnrollmentResponse, EnrollmentResponseCompanion, EnrollmentResponseDetails, EnrollmentResponseDetailsCompanion, EnrollmentStatus, EnrollmentStatusCompanion, EnrollmentStatusReasonCode, EnrollmentStatusReasonCodeCompanion, ExcludeCredential, ExcludeCredentialCompanion, FidoAuthenticationOptions, FidoAuthenticationOptionsCompanion, FidoRegistrationOptions, FidoRegistrationOptionsCompanion, Geolocation, GeolocationCompanion, Institution, InstitutionCompanion, InstitutionQueryParameters, InstitutionQueryParametersInstitutionType, Integrity, IntegrityCompanion, Metadata, MetadataCompanion, NSData, OpenFinanceBiometricPix, OpenFinanceBiometricPixCompanion, OpenFinanceBiometricPixPaymentMethodDetails, OpenFinanceBiometricPixPaymentMethodDetailsCompanion, OpenFinanceBiometricPixPaymentMethodInformation, OpenFinanceBiometricPixPaymentMethodInformationCompanion, Organization, OrganizationCompanion, PaginatedResponse<T>, PaginatedResponseCompanion, PaymentIntent, PaymentIntentAssertion, PaymentIntentAssertionCompanion, PaymentIntentAssertionResponse, PaymentIntentAssertionResponseCompanion, PaymentIntentCompanion, PaymentIntentConfiguration, PaymentIntentConfigurationCompanion, PaymentIntentMetadata, PaymentIntentMetadataCompanion, PaymentIntentQueryParameters, PaymentIntentStatus, PaymentIntentStatusCompanion, PaymentIntent_, PaymentIntent_Companion, PaymentMethodDetails, PaymentMethodDetailsCompanion, PaymentMethodDetails_, PaymentMethodDetails_Companion, PaymentMethodInformation, PaymentMethodInformationCompanion, PaymentMethodStatus, PaymentMethodStatusCompanion, PublicKeyCredentialParameters, PublicKeyCredentialParametersCompanion, RelyingParty, RelyingPartyCompanion, RiskSignals, RiskSignalsCompanion, Scope, ScreenDimensions, ScreenDimensionsCompanion, SdkPublicKeyCredentialDescriptor, SdkPublicKeyCredentialDescriptorCompanion, Theme, ThemeCompanion, Token, TokenCompanion, TokenMetadata, TokenMetadataCompanion, UseCase, User, UserCompanion, UserData, UserDataCompanion, Widget, WidgetCompanion, WidgetConfig, WidgetConfigCompanion;

@protocol BPMKotlinAnnotation, BPMKotlinComparable, BPMKotlinIterator, BPMKotlinKAnnotatedElement, BPMKotlinKClass, BPMKotlinKClassifier, BPMKotlinKDeclarationContainer, BPMKotlinx_serialization_coreCompositeDecoder, BPMKotlinx_serialization_coreCompositeEncoder, BPMKotlinx_serialization_coreDecoder, BPMKotlinx_serialization_coreDeserializationStrategy, BPMKotlinx_serialization_coreEncoder, BPMKotlinx_serialization_coreKSerializer, BPMKotlinx_serialization_coreSerialDescriptor, BPMKotlinx_serialization_coreSerialFormat, BPMKotlinx_serialization_coreSerializationStrategy, BPMKotlinx_serialization_coreSerializersModuleCollector, BPMKotlinx_serialization_coreStringFormat, BPMKotlinx_serialization_jsonJsonNamingStrategy;

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
@interface BPMBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface BPMBase (BPMBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface BPMMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface BPMMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorBPMKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface BPMNumber : NSNumber
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
@interface BPMByte : BPMNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface BPMUByte : BPMNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface BPMShort : BPMNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface BPMUShort : BPMNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface BPMInt : BPMNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface BPMUInt : BPMNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface BPMLong : BPMNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface BPMULong : BPMNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface BPMFloat : BPMNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface BPMDouble : BPMNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface BPMBoolean : BPMNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end


/**
 * WebAuthn assertion response (for authentication)
 * Following the WebAuthn spec, id and rawId are kept as separate properties
 * even though they contain the same value in this implementation
 */
__attribute__((objc_subclassing_restricted))
@interface AssertionResponse : BPMBase
- (instancetype)initWithEncodedId:(NSString *)encodedId rawId:(NSData *)rawId authenticatorData:(NSData * _Nullable)authenticatorData encodedAuthenticatorData:(NSString *)encodedAuthenticatorData clientDataJSON:(NSData *)clientDataJSON encodedClientDataJSON:(NSString *)encodedClientDataJSON signature:(NSData * _Nullable)signature encodedSignature:(NSString *)encodedSignature userHandle:(NSData * _Nullable)userHandle encodedUserHandle:(NSString *)encodedUserHandle __attribute__((swift_name("init(encodedId:rawId:authenticatorData:encodedAuthenticatorData:clientDataJSON:encodedClientDataJSON:signature:encodedSignature:userHandle:encodedUserHandle:)"))) __attribute__((objc_designated_initializer));
- (AssertionResponse *)doCopyEncodedId:(NSString *)encodedId rawId:(NSData *)rawId authenticatorData:(NSData * _Nullable)authenticatorData encodedAuthenticatorData:(NSString *)encodedAuthenticatorData clientDataJSON:(NSData *)clientDataJSON encodedClientDataJSON:(NSString *)encodedClientDataJSON signature:(NSData * _Nullable)signature encodedSignature:(NSString *)encodedSignature userHandle:(NSData * _Nullable)userHandle encodedUserHandle:(NSString *)encodedUserHandle __attribute__((swift_name("doCopy(encodedId:rawId:authenticatorData:encodedAuthenticatorData:clientDataJSON:encodedClientDataJSON:signature:encodedSignature:userHandle:encodedUserHandle:)")));

/**
 * WebAuthn assertion response (for authentication)
 * Following the WebAuthn spec, id and rawId are kept as separate properties
 * even though they contain the same value in this implementation
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * WebAuthn assertion response (for authentication)
 * Following the WebAuthn spec, id and rawId are kept as separate properties
 * even though they contain the same value in this implementation
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * WebAuthn assertion response (for authentication)
 * Following the WebAuthn spec, id and rawId are kept as separate properties
 * even though they contain the same value in this implementation
 */
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


/**
 * WebAuthn attestation response (for registration)
 * Following the WebAuthn spec, id and rawId are kept as separate properties
 * even though they contain the same value in this implementation
 */
__attribute__((objc_subclassing_restricted))
@interface AttestationResponse : BPMBase
- (instancetype)initWithEncodedId:(NSString *)encodedId rawId:(NSData *)rawId rawAttestationObject:(NSData * _Nullable)rawAttestationObject encodedAttestationObject:(NSString *)encodedAttestationObject rawClientDataJSON:(NSData * _Nullable)rawClientDataJSON encodedClientDataJSON:(NSString *)encodedClientDataJSON __attribute__((swift_name("init(encodedId:rawId:rawAttestationObject:encodedAttestationObject:rawClientDataJSON:encodedClientDataJSON:)"))) __attribute__((objc_designated_initializer));
- (AttestationResponse *)doCopyEncodedId:(NSString *)encodedId rawId:(NSData *)rawId rawAttestationObject:(NSData * _Nullable)rawAttestationObject encodedAttestationObject:(NSString *)encodedAttestationObject rawClientDataJSON:(NSData * _Nullable)rawClientDataJSON encodedClientDataJSON:(NSString *)encodedClientDataJSON __attribute__((swift_name("doCopy(encodedId:rawId:rawAttestationObject:encodedAttestationObject:rawClientDataJSON:encodedClientDataJSON:)")));

/**
 * WebAuthn attestation response (for registration)
 * Following the WebAuthn spec, id and rawId are kept as separate properties
 * even though they contain the same value in this implementation
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * WebAuthn attestation response (for registration)
 * Following the WebAuthn spec, id and rawId are kept as separate properties
 * even though they contain the same value in this implementation
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * WebAuthn attestation response (for registration)
 * Following the WebAuthn spec, id and rawId are kept as separate properties
 * even though they contain the same value in this implementation
 */
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
@interface AuthenticatorSelection : BPMBase
- (instancetype)initWithAuthenticatorAttachment:(NSString * _Nullable)authenticatorAttachment userVerification:(NSString * _Nullable)userVerification requireResidentKey:(BPMBoolean * _Nullable)requireResidentKey residentKey:(NSString * _Nullable)residentKey __attribute__((swift_name("init(authenticatorAttachment:userVerification:requireResidentKey:residentKey:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AuthenticatorSelectionCompanion *companion __attribute__((swift_name("companion")));
- (AuthenticatorSelection *)doCopyAuthenticatorAttachment:(NSString * _Nullable)authenticatorAttachment userVerification:(NSString * _Nullable)userVerification requireResidentKey:(BPMBoolean * _Nullable)requireResidentKey residentKey:(NSString * _Nullable)residentKey __attribute__((swift_name("doCopy(authenticatorAttachment:userVerification:requireResidentKey:residentKey:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable authenticatorAttachment __attribute__((swift_name("authenticatorAttachment")));
@property (readonly) BPMBoolean * _Nullable requireResidentKey __attribute__((swift_name("requireResidentKey")));
@property (readonly) NSString * _Nullable residentKey __attribute__((swift_name("residentKey")));
@property (readonly) NSString * _Nullable userVerification __attribute__((swift_name("userVerification")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthenticatorSelection.Companion")))
@interface AuthenticatorSelectionCompanion : BPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AuthenticatorSelectionCompanion *shared __attribute__((swift_name("shared")));
- (id<BPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Represents a single API error item
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface BelvoApiErrorItem : BPMBase
- (instancetype)initWithCode:(NSString * _Nullable)code message:(BPMKotlinx_serialization_jsonJsonElement * _Nullable)message requestId:(NSString * _Nullable)requestId detail:(NSString * _Nullable)detail field:(NSString * _Nullable)field __attribute__((swift_name("init(code:message:requestId:detail:field:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BelvoApiErrorItemCompanion *companion __attribute__((swift_name("companion")));
- (BelvoApiErrorItem *)doCopyCode:(NSString * _Nullable)code message:(BPMKotlinx_serialization_jsonJsonElement * _Nullable)message requestId:(NSString * _Nullable)requestId detail:(NSString * _Nullable)detail field:(NSString * _Nullable)field __attribute__((swift_name("doCopy(code:message:requestId:detail:field:)")));

/**
 * Represents a single API error item
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Represents a single API error item
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Represents a single API error item
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable code __attribute__((swift_name("code")));
@property (readonly) NSString * _Nullable detail __attribute__((swift_name("detail")));
@property (readonly) NSString * _Nullable field __attribute__((swift_name("field")));
@property (readonly) BPMKotlinx_serialization_jsonJsonElement * _Nullable message __attribute__((swift_name("message")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="request_id")
*/
@property (readonly) NSString * _Nullable requestId __attribute__((swift_name("requestId")));
@end


/**
 * Represents a single API error item
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BelvoApiErrorItem.Companion")))
@interface BelvoApiErrorItemCompanion : BPMBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Represents a single API error item
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BelvoApiErrorItemCompanion *shared __attribute__((swift_name("shared")));

/**
 * Represents a single API error item
 */
- (id<BPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Branding configuration for the widget
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface Branding : BPMBase
- (instancetype)initWithCompanyName:(NSString * _Nullable)companyName companyLogo:(NSString * _Nullable)companyLogo companyIcon:(NSString * _Nullable)companyIcon colorScheme:(NSString * _Nullable)colorScheme __attribute__((swift_name("init(companyName:companyLogo:companyIcon:colorScheme:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BrandingCompanion *companion __attribute__((swift_name("companion")));
- (Branding *)doCopyCompanyName:(NSString * _Nullable)companyName companyLogo:(NSString * _Nullable)companyLogo companyIcon:(NSString * _Nullable)companyIcon colorScheme:(NSString * _Nullable)colorScheme __attribute__((swift_name("doCopy(companyName:companyLogo:companyIcon:colorScheme:)")));

/**
 * Branding configuration for the widget
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Branding configuration for the widget
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Branding configuration for the widget
 */
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="color_scheme")
*/
@property (readonly) NSString * _Nullable colorScheme __attribute__((swift_name("colorScheme")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="company_icon")
*/
@property (readonly) NSString * _Nullable companyIcon __attribute__((swift_name("companyIcon")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="company_logo")
*/
@property (readonly) NSString * _Nullable companyLogo __attribute__((swift_name("companyLogo")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="company_name")
*/
@property (readonly) NSString * _Nullable companyName __attribute__((swift_name("companyName")));
@end


/**
 * Branding configuration for the widget
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Branding.Companion")))
@interface BrandingCompanion : BPMBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Branding configuration for the widget
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BrandingCompanion *shared __attribute__((swift_name("shared")));

/**
 * Branding configuration for the widget
 */
- (id<BPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Callback URLs for success and exit scenarios
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface CallbackUrls : BPMBase
- (instancetype)initWithSuccess:(NSString *)success exit:(NSString *)exit __attribute__((swift_name("init(success:exit:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CallbackUrlsCompanion *companion __attribute__((swift_name("companion")));
- (CallbackUrls *)doCopySuccess:(NSString *)success exit:(NSString *)exit __attribute__((swift_name("doCopy(success:exit:)")));

/**
 * Callback URLs for success and exit scenarios
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Callback URLs for success and exit scenarios
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Callback URLs for success and exit scenarios
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *exit __attribute__((swift_name("exit")));
@property (readonly) NSString *success __attribute__((swift_name("success")));
@end


/**
 * Callback URLs for success and exit scenarios
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallbackUrls.Companion")))
@interface CallbackUrlsCompanion : BPMBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Callback URLs for success and exit scenarios
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CallbackUrlsCompanion *shared __attribute__((swift_name("shared")));

/**
 * Callback URLs for success and exit scenarios
 */
- (id<BPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol BPMKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface BPMKotlinEnum<E> : BPMBase <BPMKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BPMKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end


/**
 * Color scheme options
 */
__attribute__((objc_subclassing_restricted))
@interface ColorScheme : BPMKotlinEnum<ColorScheme *>
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Color scheme options
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ColorScheme *dark __attribute__((swift_name("dark")));
@property (class, readonly) ColorScheme *light __attribute__((swift_name("light")));
+ (BPMKotlinArray<ColorScheme *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ColorScheme *> *entries __attribute__((swift_name("entries")));
@end


/**
 * Implementation of ASAuthorizationControllerPresentationContextProvidingProtocol
 * that provides a window for displaying the authentication UI.
 */
__attribute__((unavailable("Kotlin subclass of Objective-C class can't be imported")))
@interface DefaultPresentationContextProvider : NSObject
@end


/**
 * Enrollment configuration and details
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface EnrollmentConfiguration : BPMBase
- (instancetype)initWithType:(NSString *)type externalId:(NSString * _Nullable)externalId details:(EnrollmentDetails *)details metadata:(NSDictionary<NSString *, BPMKotlinx_serialization_jsonJsonElement *> * _Nullable)metadata __attribute__((swift_name("init(type:externalId:details:metadata:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) EnrollmentConfigurationCompanion *companion __attribute__((swift_name("companion")));
- (EnrollmentConfiguration *)doCopyType:(NSString *)type externalId:(NSString * _Nullable)externalId details:(EnrollmentDetails *)details metadata:(NSDictionary<NSString *, BPMKotlinx_serialization_jsonJsonElement *> * _Nullable)metadata __attribute__((swift_name("doCopy(type:externalId:details:metadata:)")));

/**
 * Enrollment configuration and details
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Enrollment configuration and details
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Enrollment configuration and details
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) EnrollmentDetails *details __attribute__((swift_name("details")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="external_id")
*/
@property (readonly) NSString * _Nullable externalId __attribute__((swift_name("externalId")));
@property (readonly) NSDictionary<NSString *, BPMKotlinx_serialization_jsonJsonElement *> * _Nullable metadata __attribute__((swift_name("metadata")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end


/**
 * Enrollment configuration and details
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EnrollmentConfiguration.Companion")))
@interface EnrollmentConfigurationCompanion : BPMBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Enrollment configuration and details
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) EnrollmentConfigurationCompanion *shared __attribute__((swift_name("shared")));

/**
 * Enrollment configuration and details
 */
- (id<BPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Enrollment configuration and details
 * @deprecated Use EnrollmentConfiguration instead
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface EnrollmentData : BPMBase
- (instancetype)initWithType:(NSString *)type details:(EnrollmentDetails *)details metadata:(EnrollmentMetadata *)metadata __attribute__((swift_name("init(type:details:metadata:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) EnrollmentDataCompanion *companion __attribute__((swift_name("companion")));
- (EnrollmentData *)doCopyType:(NSString *)type details:(EnrollmentDetails *)details metadata:(EnrollmentMetadata *)metadata __attribute__((swift_name("doCopy(type:details:metadata:)")));

/**
 * Enrollment configuration and details
 * @deprecated Use EnrollmentConfiguration instead
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Enrollment configuration and details
 * @deprecated Use EnrollmentConfiguration instead
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Enrollment configuration and details
 * @deprecated Use EnrollmentConfiguration instead
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) EnrollmentDetails *details __attribute__((swift_name("details")));
@property (readonly) EnrollmentMetadata *metadata __attribute__((swift_name("metadata")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end


/**
 * Enrollment configuration and details
 * @deprecated Use EnrollmentConfiguration instead
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EnrollmentData.Companion")))
@interface EnrollmentDataCompanion : BPMBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Enrollment configuration and details
 * @deprecated Use EnrollmentConfiguration instead
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) EnrollmentDataCompanion *shared __attribute__((swift_name("shared")));

/**
 * Enrollment configuration and details
 * @deprecated Use EnrollmentConfiguration instead
 */
- (id<BPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Enrollment details containing customer information
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface EnrollmentDetails : BPMBase
- (instancetype)initWithName:(NSString * _Nullable)name customer:(Customer *)customer institution:(NSString * _Nullable)institution __attribute__((swift_name("init(name:customer:institution:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) EnrollmentDetailsCompanion *companion __attribute__((swift_name("companion")));
- (EnrollmentDetails *)doCopyName:(NSString * _Nullable)name customer:(Customer *)customer institution:(NSString * _Nullable)institution __attribute__((swift_name("doCopy(name:customer:institution:)")));

/**
 * Enrollment details containing customer information
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Enrollment details containing customer information
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Enrollment details containing customer information
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Customer *customer __attribute__((swift_name("customer")));
@property (readonly) NSString * _Nullable institution __attribute__((swift_name("institution")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@end


/**
 * Enrollment details containing customer information
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EnrollmentDetails.Companion")))
@interface EnrollmentDetailsCompanion : BPMBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Enrollment details containing customer information
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) EnrollmentDetailsCompanion *shared __attribute__((swift_name("shared")));

/**
 * Enrollment details containing customer information
 */
- (id<BPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Enrollment metadata
 * @deprecated Part of legacy model
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface EnrollmentMetadata : BPMBase
- (instancetype)initWithWidgetSessionId:(NSString *)widgetSessionId __attribute__((swift_name("init(widgetSessionId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) EnrollmentMetadataCompanion *companion __attribute__((swift_name("companion")));
- (EnrollmentMetadata *)doCopyWidgetSessionId:(NSString *)widgetSessionId __attribute__((swift_name("doCopy(widgetSessionId:)")));

/**
 * Enrollment metadata
 * @deprecated Part of legacy model
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Enrollment metadata
 * @deprecated Part of legacy model
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Enrollment metadata
 * @deprecated Part of legacy model
 */
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="widget_session_id")
*/
@property (readonly) NSString *widgetSessionId __attribute__((swift_name("widgetSessionId")));
@end


/**
 * Enrollment metadata
 * @deprecated Part of legacy model
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EnrollmentMetadata.Companion")))
@interface EnrollmentMetadataCompanion : BPMBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Enrollment metadata
 * @deprecated Part of legacy model
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) EnrollmentMetadataCompanion *shared __attribute__((swift_name("shared")));

/**
 * Enrollment metadata
 * @deprecated Part of legacy model
 */
- (id<BPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface ExcludeCredential : BPMBase
- (instancetype)initWithId:(NSString *)id type:(NSString *)type __attribute__((swift_name("init(id:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ExcludeCredentialCompanion *companion __attribute__((swift_name("companion")));
- (ExcludeCredential *)doCopyId:(NSString *)id type:(NSString *)type __attribute__((swift_name("doCopy(id:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExcludeCredential.Companion")))
@interface ExcludeCredentialCompanion : BPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ExcludeCredentialCompanion *shared __attribute__((swift_name("shared")));
- (id<BPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Callback interface for FIDO authentication operations
 */
@protocol FidoAuthenticationCallback
@required

/**
 * Called when authentication fails
 * @param error Error message
 */
- (void)onErrorError:(NSString *)error __attribute__((swift_name("onError(error:)")));

/**
 * Called when authentication is successful
 * @param response The assertion response containing both encoded strings and raw data
 */
- (void)onSuccessResponse:(AssertionResponse *)response __attribute__((swift_name("onSuccess(response:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface FidoAuthenticationOptions : BPMBase
- (instancetype)initWithChallenge:(NSString *)challenge rpId:(NSString *)rpId allowCredentials:(NSArray<SdkPublicKeyCredentialDescriptor *> * _Nullable)allowCredentials timeout:(BPMInt * _Nullable)timeout userVerification:(NSString * _Nullable)userVerification extensions:(NSDictionary<NSString *, NSString *> * _Nullable)extensions __attribute__((swift_name("init(challenge:rpId:allowCredentials:timeout:userVerification:extensions:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FidoAuthenticationOptionsCompanion *companion __attribute__((swift_name("companion")));
- (FidoAuthenticationOptions *)doCopyChallenge:(NSString *)challenge rpId:(NSString *)rpId allowCredentials:(NSArray<SdkPublicKeyCredentialDescriptor *> * _Nullable)allowCredentials timeout:(BPMInt * _Nullable)timeout userVerification:(NSString * _Nullable)userVerification extensions:(NSDictionary<NSString *, NSString *> * _Nullable)extensions __attribute__((swift_name("doCopy(challenge:rpId:allowCredentials:timeout:userVerification:extensions:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toJsonString __attribute__((swift_name("toJsonString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SdkPublicKeyCredentialDescriptor *> * _Nullable allowCredentials __attribute__((swift_name("allowCredentials")));
@property (readonly) NSString *challenge __attribute__((swift_name("challenge")));
@property (readonly) NSDictionary<NSString *, NSString *> * _Nullable extensions __attribute__((swift_name("extensions")));
@property (readonly) NSString *rpId __attribute__((swift_name("rpId")));
@property (readonly) BPMInt * _Nullable timeout __attribute__((swift_name("timeout")));
@property (readonly) NSString * _Nullable userVerification __attribute__((swift_name("userVerification")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FidoAuthenticationOptions.Companion")))
@interface FidoAuthenticationOptionsCompanion : BPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FidoAuthenticationOptionsCompanion *shared __attribute__((swift_name("shared")));
- (id<BPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Callback interface for FIDO registration operations
 */
@protocol FidoRegistrationCallback
@required

/**
 * Called when registration fails
 * @param error Error message
 */
- (void)onErrorError:(NSString *)error __attribute__((swift_name("onError(error:)")));

/**
 * Called when registration is successful
 * @param response The attestation response containing both encoded strings and raw data
 */
- (void)onSuccessResponse_:(AttestationResponse *)response __attribute__((swift_name("onSuccess(response_:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface FidoRegistrationOptions : BPMBase
- (instancetype)initWithRp:(RelyingParty *)rp user:(User *)user challenge:(NSString *)challenge pubKeyCredParams:(NSArray<PublicKeyCredentialParameters *> *)pubKeyCredParams timeout:(BPMInt * _Nullable)timeout excludeCredentials:(NSArray<ExcludeCredential *> * _Nullable)excludeCredentials authenticatorSelection:(AuthenticatorSelection * _Nullable)authenticatorSelection attestation:(NSString * _Nullable)attestation attestationFormats:(NSArray<NSString *> * _Nullable)attestationFormats extensions:(NSDictionary<NSString *, NSString *> * _Nullable)extensions __attribute__((swift_name("init(rp:user:challenge:pubKeyCredParams:timeout:excludeCredentials:authenticatorSelection:attestation:attestationFormats:extensions:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FidoRegistrationOptionsCompanion *companion __attribute__((swift_name("companion")));
- (FidoRegistrationOptions *)doCopyRp:(RelyingParty *)rp user:(User *)user challenge:(NSString *)challenge pubKeyCredParams:(NSArray<PublicKeyCredentialParameters *> *)pubKeyCredParams timeout:(BPMInt * _Nullable)timeout excludeCredentials:(NSArray<ExcludeCredential *> * _Nullable)excludeCredentials authenticatorSelection:(AuthenticatorSelection * _Nullable)authenticatorSelection attestation:(NSString * _Nullable)attestation attestationFormats:(NSArray<NSString *> * _Nullable)attestationFormats extensions:(NSDictionary<NSString *, NSString *> * _Nullable)extensions __attribute__((swift_name("doCopy(rp:user:challenge:pubKeyCredParams:timeout:excludeCredentials:authenticatorSelection:attestation:attestationFormats:extensions:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable attestation __attribute__((swift_name("attestation")));
@property (readonly) NSArray<NSString *> * _Nullable attestationFormats __attribute__((swift_name("attestationFormats")));
@property (readonly) AuthenticatorSelection * _Nullable authenticatorSelection __attribute__((swift_name("authenticatorSelection")));
@property (readonly) NSString *challenge __attribute__((swift_name("challenge")));
@property (readonly) NSArray<ExcludeCredential *> * _Nullable excludeCredentials __attribute__((swift_name("excludeCredentials")));
@property (readonly) NSDictionary<NSString *, NSString *> * _Nullable extensions __attribute__((swift_name("extensions")));
@property (readonly) NSArray<PublicKeyCredentialParameters *> *pubKeyCredParams __attribute__((swift_name("pubKeyCredParams")));
@property (readonly) RelyingParty *rp __attribute__((swift_name("rp")));
@property (readonly) BPMInt * _Nullable timeout __attribute__((swift_name("timeout")));
@property (readonly) User *user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FidoRegistrationOptions.Companion")))
@interface FidoRegistrationOptionsCompanion : BPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FidoRegistrationOptionsCompanion *shared __attribute__((swift_name("shared")));
- (id<BPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Data class representing geolocation information
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface Geolocation : BPMBase
- (instancetype)initWithLatitude:(double)latitude longitude:(double)longitude type:(NSString * _Nullable)type __attribute__((swift_name("init(latitude:longitude:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GeolocationCompanion *companion __attribute__((swift_name("companion")));
- (Geolocation *)doCopyLatitude:(double)latitude longitude:(double)longitude type:(NSString * _Nullable)type __attribute__((swift_name("doCopy(latitude:longitude:type:)")));

/**
 * Data class representing geolocation information
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Data class representing geolocation information
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Data class representing geolocation information
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double latitude __attribute__((swift_name("latitude")));
@property (readonly) double longitude __attribute__((swift_name("longitude")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@end


/**
 * Data class representing geolocation information
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Geolocation.Companion")))
@interface GeolocationCompanion : BPMBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Data class representing geolocation information
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GeolocationCompanion *shared __attribute__((swift_name("shared")));

/**
 * Data class representing geolocation information
 */
- (id<BPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Data class representing integrity information
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface Integrity : BPMBase
- (instancetype)initWithAppRecognitionVerdict:(NSString *)appRecognitionVerdict deviceRecognitionVerdict:(NSArray<NSString *> *)deviceRecognitionVerdict __attribute__((swift_name("init(appRecognitionVerdict:deviceRecognitionVerdict:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) IntegrityCompanion *companion __attribute__((swift_name("companion")));
- (Integrity *)doCopyAppRecognitionVerdict:(NSString *)appRecognitionVerdict deviceRecognitionVerdict:(NSArray<NSString *> *)deviceRecognitionVerdict __attribute__((swift_name("doCopy(appRecognitionVerdict:deviceRecognitionVerdict:)")));

/**
 * Data class representing integrity information
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Data class representing integrity information
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Data class representing integrity information
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *appRecognitionVerdict __attribute__((swift_name("appRecognitionVerdict")));
@property (readonly) NSArray<NSString *> *deviceRecognitionVerdict __attribute__((swift_name("deviceRecognitionVerdict")));
@end


/**
 * Data class representing integrity information
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Integrity.Companion")))
@interface IntegrityCompanion : BPMBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Data class representing integrity information
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) IntegrityCompanion *shared __attribute__((swift_name("shared")));

/**
 * Data class representing integrity information
 */
- (id<BPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Metadata containing hashed identifier
 * @deprecated Use TokenMetadata instead
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface Metadata : BPMBase
- (instancetype)initWithHashedIdentifier:(NSString *)hashedIdentifier __attribute__((swift_name("init(hashedIdentifier:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MetadataCompanion *companion __attribute__((swift_name("companion")));
- (Metadata *)doCopyHashedIdentifier:(NSString *)hashedIdentifier __attribute__((swift_name("doCopy(hashedIdentifier:)")));

/**
 * Metadata containing hashed identifier
 * @deprecated Use TokenMetadata instead
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Metadata containing hashed identifier
 * @deprecated Use TokenMetadata instead
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Metadata containing hashed identifier
 * @deprecated Use TokenMetadata instead
 */
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hashed_identifier")
*/
@property (readonly) NSString *hashedIdentifier __attribute__((swift_name("hashedIdentifier")));
@end


/**
 * Metadata containing hashed identifier
 * @deprecated Use TokenMetadata instead
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Metadata.Companion")))
@interface MetadataCompanion : BPMBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Metadata containing hashed identifier
 * @deprecated Use TokenMetadata instead
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MetadataCompanion *shared __attribute__((swift_name("shared")));

/**
 * Metadata containing hashed identifier
 * @deprecated Use TokenMetadata instead
 */
- (id<BPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Open Finance Biometric PIX configuration
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface OpenFinanceBiometricPix : BPMBase
- (instancetype)initWithBeneficiaryBankAccount:(NSString *)beneficiaryBankAccount enrollment:(NSString * _Nullable)enrollment __attribute__((swift_name("init(beneficiaryBankAccount:enrollment:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) OpenFinanceBiometricPixCompanion *companion __attribute__((swift_name("companion")));
- (OpenFinanceBiometricPix *)doCopyBeneficiaryBankAccount:(NSString *)beneficiaryBankAccount enrollment:(NSString * _Nullable)enrollment __attribute__((swift_name("doCopy(beneficiaryBankAccount:enrollment:)")));

/**
 * Open Finance Biometric PIX configuration
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Open Finance Biometric PIX configuration
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Open Finance Biometric PIX configuration
 */
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="beneficiary_bank_account")
*/
@property (readonly) NSString *beneficiaryBankAccount __attribute__((swift_name("beneficiaryBankAccount")));
@property (readonly) NSString * _Nullable enrollment __attribute__((swift_name("enrollment")));
@end


/**
 * Open Finance Biometric PIX configuration
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OpenFinanceBiometricPix.Companion")))
@interface OpenFinanceBiometricPixCompanion : BPMBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Open Finance Biometric PIX configuration
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) OpenFinanceBiometricPixCompanion *shared __attribute__((swift_name("shared")));

/**
 * Open Finance Biometric PIX configuration
 */
- (id<BPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Organization information
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface Organization : BPMBase
- (instancetype)initWithId:(NSString *)id countryCode:(NSString *)countryCode __attribute__((swift_name("init(id:countryCode:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) OrganizationCompanion *companion __attribute__((swift_name("companion")));
- (Organization *)doCopyId:(NSString *)id countryCode:(NSString *)countryCode __attribute__((swift_name("doCopy(id:countryCode:)")));

/**
 * Organization information
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Organization information
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Organization information
 */
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="country_code")
*/
@property (readonly) NSString *countryCode __attribute__((swift_name("countryCode")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@end


/**
 * Organization information
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Organization.Companion")))
@interface OrganizationCompanion : BPMBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Organization information
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) OrganizationCompanion *shared __attribute__((swift_name("shared")));

/**
 * Organization information
 */
- (id<BPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Generic data class representing a paginated API response
 *
 * @param T The type of items in the results list
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface PaginatedResponse<T> : BPMBase
- (instancetype)initWithCount:(int32_t)count next:(NSString * _Nullable)next previous:(NSString * _Nullable)previous results:(NSArray<id> *)results __attribute__((swift_name("init(count:next:previous:results:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaginatedResponseCompanion *companion __attribute__((swift_name("companion")));
- (PaginatedResponse<T> *)doCopyCount:(int32_t)count next:(NSString * _Nullable)next previous:(NSString * _Nullable)previous results:(NSArray<id> *)results __attribute__((swift_name("doCopy(count:next:previous:results:)")));

/**
 * Generic data class representing a paginated API response
 *
 * @param T The type of items in the results list
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Generic data class representing a paginated API response
 *
 * @param T The type of items in the results list
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Generic data class representing a paginated API response
 *
 * @param T The type of items in the results list
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t count __attribute__((swift_name("count")));
@property (readonly) NSString * _Nullable next __attribute__((swift_name("next")));
@property (readonly) NSString * _Nullable previous __attribute__((swift_name("previous")));
@property (readonly) NSArray<id> *results __attribute__((swift_name("results")));
@end


/**
 * Generic data class representing a paginated API response
 *
 * @param T The type of items in the results list
 */
__attribute__((objc_subclassing_restricted))
@interface PaginatedResponseCompanion : BPMBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Generic data class representing a paginated API response
 *
 * @param T The type of items in the results list
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaginatedResponseCompanion *shared __attribute__((swift_name("shared")));

/**
 * Generic data class representing a paginated API response
 *
 * @param T The type of items in the results list
 */
- (id<BPMKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(BPMKotlinArray<id<BPMKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));

/**
 * Generic data class representing a paginated API response
 *
 * @param T The type of items in the results list
 */
- (id<BPMKotlinx_serialization_coreKSerializer>)serializerTypeSerial0:(id<BPMKotlinx_serialization_coreKSerializer>)typeSerial0 __attribute__((swift_name("serializer(typeSerial0:)")));
@end


/**
 * Payment intent configuration
 * @deprecated Use PaymentIntentConfiguration instead
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface PaymentIntent_ : BPMBase
- (instancetype)initWithAllowedPaymentMethodTypes:(NSArray<NSString *> *)allowedPaymentMethodTypes amount:(NSString *)amount description:(NSString *)description metadata:(PaymentIntentMetadata *)metadata paymentMethodDetails:(PaymentMethodDetails *)paymentMethodDetails statementDescription:(NSString *)statementDescription __attribute__((swift_name("init(allowedPaymentMethodTypes:amount:description:metadata:paymentMethodDetails:statementDescription:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentIntent_Companion *companion __attribute__((swift_name("companion")));
- (PaymentIntent_ *)doCopyAllowedPaymentMethodTypes:(NSArray<NSString *> *)allowedPaymentMethodTypes amount:(NSString *)amount description:(NSString *)description metadata:(PaymentIntentMetadata *)metadata paymentMethodDetails:(PaymentMethodDetails *)paymentMethodDetails statementDescription:(NSString *)statementDescription __attribute__((swift_name("doCopy(allowedPaymentMethodTypes:amount:description:metadata:paymentMethodDetails:statementDescription:)")));

/**
 * Payment intent configuration
 * @deprecated Use PaymentIntentConfiguration instead
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Payment intent configuration
 * @deprecated Use PaymentIntentConfiguration instead
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Payment intent configuration
 * @deprecated Use PaymentIntentConfiguration instead
 */
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="allowed_payment_method_types")
*/
@property (readonly) NSArray<NSString *> *allowedPaymentMethodTypes __attribute__((swift_name("allowedPaymentMethodTypes")));
@property (readonly) NSString *amount __attribute__((swift_name("amount")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) PaymentIntentMetadata *metadata __attribute__((swift_name("metadata")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="payment_method_details")
*/
@property (readonly) PaymentMethodDetails *paymentMethodDetails __attribute__((swift_name("paymentMethodDetails")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="statement_description")
*/
@property (readonly) NSString *statementDescription __attribute__((swift_name("statementDescription")));
@end


/**
 * Payment intent configuration
 * @deprecated Use PaymentIntentConfiguration instead
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentIntent_.Companion")))
@interface PaymentIntent_Companion : BPMBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Payment intent configuration
 * @deprecated Use PaymentIntentConfiguration instead
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentIntent_Companion *shared __attribute__((swift_name("shared")));

/**
 * Payment intent configuration
 * @deprecated Use PaymentIntentConfiguration instead
 */
- (id<BPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Payment intent configuration
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface PaymentIntentConfiguration : BPMBase
- (instancetype)initWithAmount:(NSString *)amount description:(NSString *)description allowedPaymentMethodTypes:(NSArray<NSString *> *)allowedPaymentMethodTypes paymentMethodDetails:(PaymentMethodDetails *)paymentMethodDetails metadata:(NSDictionary<NSString *, BPMKotlinx_serialization_jsonJsonElement *> * _Nullable)metadata __attribute__((swift_name("init(amount:description:allowedPaymentMethodTypes:paymentMethodDetails:metadata:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentIntentConfigurationCompanion *companion __attribute__((swift_name("companion")));
- (PaymentIntentConfiguration *)doCopyAmount:(NSString *)amount description:(NSString *)description allowedPaymentMethodTypes:(NSArray<NSString *> *)allowedPaymentMethodTypes paymentMethodDetails:(PaymentMethodDetails *)paymentMethodDetails metadata:(NSDictionary<NSString *, BPMKotlinx_serialization_jsonJsonElement *> * _Nullable)metadata __attribute__((swift_name("doCopy(amount:description:allowedPaymentMethodTypes:paymentMethodDetails:metadata:)")));

/**
 * Payment intent configuration
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Payment intent configuration
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Payment intent configuration
 */
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="allowed_payment_method_types")
*/
@property (readonly) NSArray<NSString *> *allowedPaymentMethodTypes __attribute__((swift_name("allowedPaymentMethodTypes")));
@property (readonly) NSString *amount __attribute__((swift_name("amount")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) NSDictionary<NSString *, BPMKotlinx_serialization_jsonJsonElement *> * _Nullable metadata __attribute__((swift_name("metadata")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="payment_method_details")
*/
@property (readonly) PaymentMethodDetails *paymentMethodDetails __attribute__((swift_name("paymentMethodDetails")));
@end


/**
 * Payment intent configuration
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentIntentConfiguration.Companion")))
@interface PaymentIntentConfigurationCompanion : BPMBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Payment intent configuration
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentIntentConfigurationCompanion *shared __attribute__((swift_name("shared")));

/**
 * Payment intent configuration
 */
- (id<BPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Payment intent metadata
 * @deprecated Part of legacy model
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface PaymentIntentMetadata : BPMBase
- (instancetype)initWithWidgetSessionId:(NSString *)widgetSessionId __attribute__((swift_name("init(widgetSessionId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentIntentMetadataCompanion *companion __attribute__((swift_name("companion")));
- (PaymentIntentMetadata *)doCopyWidgetSessionId:(NSString *)widgetSessionId __attribute__((swift_name("doCopy(widgetSessionId:)")));

/**
 * Payment intent metadata
 * @deprecated Part of legacy model
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Payment intent metadata
 * @deprecated Part of legacy model
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Payment intent metadata
 * @deprecated Part of legacy model
 */
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="widget_session_id")
*/
@property (readonly) NSString *widgetSessionId __attribute__((swift_name("widgetSessionId")));
@end


/**
 * Payment intent metadata
 * @deprecated Part of legacy model
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentIntentMetadata.Companion")))
@interface PaymentIntentMetadataCompanion : BPMBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Payment intent metadata
 * @deprecated Part of legacy model
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentIntentMetadataCompanion *shared __attribute__((swift_name("shared")));

/**
 * Payment intent metadata
 * @deprecated Part of legacy model
 */
- (id<BPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Payment method details configuration
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface PaymentMethodDetails : BPMBase
- (instancetype)initWithOpenFinanceBiometricPix:(OpenFinanceBiometricPix *)openFinanceBiometricPix __attribute__((swift_name("init(openFinanceBiometricPix:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentMethodDetailsCompanion *companion __attribute__((swift_name("companion")));
- (PaymentMethodDetails *)doCopyOpenFinanceBiometricPix:(OpenFinanceBiometricPix *)openFinanceBiometricPix __attribute__((swift_name("doCopy(openFinanceBiometricPix:)")));

/**
 * Payment method details configuration
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Payment method details configuration
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Payment method details configuration
 */
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="open_finance_biometric_pix")
*/
@property (readonly) OpenFinanceBiometricPix *openFinanceBiometricPix __attribute__((swift_name("openFinanceBiometricPix")));
@end


/**
 * Payment method details configuration
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentMethodDetails.Companion")))
@interface PaymentMethodDetailsCompanion : BPMBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Payment method details configuration
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentMethodDetailsCompanion *shared __attribute__((swift_name("shared")));

/**
 * Payment method details configuration
 */
- (id<BPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface PublicKeyCredentialParameters : BPMBase
- (instancetype)initWithAlg:(int32_t)alg type:(NSString *)type __attribute__((swift_name("init(alg:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PublicKeyCredentialParametersCompanion *companion __attribute__((swift_name("companion")));
- (PublicKeyCredentialParameters *)doCopyAlg:(int32_t)alg type:(NSString *)type __attribute__((swift_name("doCopy(alg:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t alg __attribute__((swift_name("alg")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PublicKeyCredentialParameters.Companion")))
@interface PublicKeyCredentialParametersCompanion : BPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PublicKeyCredentialParametersCompanion *shared __attribute__((swift_name("shared")));
- (id<BPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface RelyingParty : BPMBase
- (instancetype)initWithId:(NSString *)id name:(NSString *)name __attribute__((swift_name("init(id:name:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) RelyingPartyCompanion *companion __attribute__((swift_name("companion")));
- (RelyingParty *)doCopyId:(NSString *)id name:(NSString *)name __attribute__((swift_name("doCopy(id:name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RelyingParty.Companion")))
@interface RelyingPartyCompanion : BPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) RelyingPartyCompanion *shared __attribute__((swift_name("shared")));
- (id<BPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Data class representing device risk signals
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface RiskSignals : BPMBase
- (instancetype)initWithDeviceId:(NSString *)deviceId isRootedDevice:(BOOL)isRootedDevice screenBrightness:(int32_t)screenBrightness elapsedTimeSinceBoot:(int64_t)elapsedTimeSinceBoot osVersion:(NSString *)osVersion userTimeZoneOffset:(NSString *)userTimeZoneOffset language:(NSString *)language screenDimensions:(ScreenDimensions *)screenDimensions geolocation:(Geolocation * _Nullable)geolocation accountTenure:(NSString *)accountTenure isCallInProgress:(BPMBoolean * _Nullable)isCallInProgress isDevModeEnabled:(BPMBoolean * _Nullable)isDevModeEnabled isMockGPS:(BPMBoolean * _Nullable)isMockGPS isEmulated:(BOOL)isEmulated isMonkeyRunner:(BPMBoolean * _Nullable)isMonkeyRunner isCharging:(BOOL)isCharging antennaInformation:(NSString * _Nullable)antennaInformation isUsbConnected:(BPMBoolean * _Nullable)isUsbConnected integrity:(Integrity *)integrity __attribute__((swift_name("init(deviceId:isRootedDevice:screenBrightness:elapsedTimeSinceBoot:osVersion:userTimeZoneOffset:language:screenDimensions:geolocation:accountTenure:isCallInProgress:isDevModeEnabled:isMockGPS:isEmulated:isMonkeyRunner:isCharging:antennaInformation:isUsbConnected:integrity:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) RiskSignalsCompanion *companion __attribute__((swift_name("companion")));
- (RiskSignals *)doCopyDeviceId:(NSString *)deviceId isRootedDevice:(BOOL)isRootedDevice screenBrightness:(int32_t)screenBrightness elapsedTimeSinceBoot:(int64_t)elapsedTimeSinceBoot osVersion:(NSString *)osVersion userTimeZoneOffset:(NSString *)userTimeZoneOffset language:(NSString *)language screenDimensions:(ScreenDimensions *)screenDimensions geolocation:(Geolocation * _Nullable)geolocation accountTenure:(NSString *)accountTenure isCallInProgress:(BPMBoolean * _Nullable)isCallInProgress isDevModeEnabled:(BPMBoolean * _Nullable)isDevModeEnabled isMockGPS:(BPMBoolean * _Nullable)isMockGPS isEmulated:(BOOL)isEmulated isMonkeyRunner:(BPMBoolean * _Nullable)isMonkeyRunner isCharging:(BOOL)isCharging antennaInformation:(NSString * _Nullable)antennaInformation isUsbConnected:(BPMBoolean * _Nullable)isUsbConnected integrity:(Integrity *)integrity __attribute__((swift_name("doCopy(deviceId:isRootedDevice:screenBrightness:elapsedTimeSinceBoot:osVersion:userTimeZoneOffset:language:screenDimensions:geolocation:accountTenure:isCallInProgress:isDevModeEnabled:isMockGPS:isEmulated:isMonkeyRunner:isCharging:antennaInformation:isUsbConnected:integrity:)")));

/**
 * Data class representing device risk signals
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Data class representing device risk signals
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Converts the RiskSignals object to a JSON string
 * @return JSON string containing all risk signals
 */
- (NSString *)toJsonString __attribute__((swift_name("toJsonString()")));

/**
 * Converts the RiskSignals object to a formatted JSON string
 * @return Pretty-printed JSON string containing all risk signals
 */
- (NSString *)toPrettyJsonString __attribute__((swift_name("toPrettyJsonString()")));

/**
 * Data class representing device risk signals
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *accountTenure __attribute__((swift_name("accountTenure")));
@property (readonly) NSString * _Nullable antennaInformation __attribute__((swift_name("antennaInformation")));
@property (readonly) NSString *deviceId __attribute__((swift_name("deviceId")));
@property (readonly) int64_t elapsedTimeSinceBoot __attribute__((swift_name("elapsedTimeSinceBoot")));
@property (readonly) Geolocation * _Nullable geolocation __attribute__((swift_name("geolocation")));
@property (readonly) Integrity *integrity __attribute__((swift_name("integrity")));
@property (readonly) BPMBoolean * _Nullable isCallInProgress __attribute__((swift_name("isCallInProgress")));
@property (readonly) BOOL isCharging __attribute__((swift_name("isCharging")));
@property (readonly) BPMBoolean * _Nullable isDevModeEnabled __attribute__((swift_name("isDevModeEnabled")));
@property (readonly) BOOL isEmulated __attribute__((swift_name("isEmulated")));
@property (readonly) BPMBoolean * _Nullable isMockGPS __attribute__((swift_name("isMockGPS")));
@property (readonly) BPMBoolean * _Nullable isMonkeyRunner __attribute__((swift_name("isMonkeyRunner")));
@property (readonly) BOOL isRootedDevice __attribute__((swift_name("isRootedDevice")));
@property (readonly) BPMBoolean * _Nullable isUsbConnected __attribute__((swift_name("isUsbConnected")));
@property (readonly) NSString *language __attribute__((swift_name("language")));
@property (readonly) NSString *osVersion __attribute__((swift_name("osVersion")));
@property (readonly) int32_t screenBrightness __attribute__((swift_name("screenBrightness")));
@property (readonly) ScreenDimensions *screenDimensions __attribute__((swift_name("screenDimensions")));
@property (readonly) NSString *userTimeZoneOffset __attribute__((swift_name("userTimeZoneOffset")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RiskSignals.Companion")))
@interface RiskSignalsCompanion : BPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) RiskSignalsCompanion *shared __attribute__((swift_name("shared")));
- (id<BPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Scope types for token access
 */
__attribute__((objc_subclassing_restricted))
@interface Scope : BPMKotlinEnum<Scope *>
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Scope types for token access
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) Scope *writeLinks __attribute__((swift_name("writeLinks")));
@property (class, readonly) Scope *writeConsents __attribute__((swift_name("writeConsents")));
@property (class, readonly) Scope *writeConsentCallback __attribute__((swift_name("writeConsentCallback")));
@property (class, readonly) Scope *readLinks __attribute__((swift_name("readLinks")));
@property (class, readonly) Scope *readInstitutions __attribute__((swift_name("readInstitutions")));
@property (class, readonly) Scope *readConsents __attribute__((swift_name("readConsents")));
@property (class, readonly) Scope *deleteConsents __attribute__((swift_name("deleteConsents")));
+ (BPMKotlinArray<Scope *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<Scope *> *entries __attribute__((swift_name("entries")));
@end


/**
 * Data class representing screen dimensions
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface ScreenDimensions : BPMBase
- (instancetype)initWithHeight:(int32_t)height width:(int32_t)width __attribute__((swift_name("init(height:width:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ScreenDimensionsCompanion *companion __attribute__((swift_name("companion")));
- (ScreenDimensions *)doCopyHeight:(int32_t)height width:(int32_t)width __attribute__((swift_name("doCopy(height:width:)")));

/**
 * Data class representing screen dimensions
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Data class representing screen dimensions
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Data class representing screen dimensions
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
@end


/**
 * Data class representing screen dimensions
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScreenDimensions.Companion")))
@interface ScreenDimensionsCompanion : BPMBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Data class representing screen dimensions
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ScreenDimensionsCompanion *shared __attribute__((swift_name("shared")));

/**
 * Data class representing screen dimensions
 */
- (id<BPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface SdkPublicKeyCredentialDescriptor : BPMBase
- (instancetype)initWithType:(NSString *)type id:(NSString *)id transports:(NSArray<NSString *> * _Nullable)transports __attribute__((swift_name("init(type:id:transports:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SdkPublicKeyCredentialDescriptorCompanion *companion __attribute__((swift_name("companion")));
- (SdkPublicKeyCredentialDescriptor *)doCopyType:(NSString *)type id:(NSString *)id transports:(NSArray<NSString *> * _Nullable)transports __attribute__((swift_name("doCopy(type:id:transports:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSArray<NSString *> * _Nullable transports __attribute__((swift_name("transports")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SdkPublicKeyCredentialDescriptor.Companion")))
@interface SdkPublicKeyCredentialDescriptorCompanion : BPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SdkPublicKeyCredentialDescriptorCompanion *shared __attribute__((swift_name("shared")));
- (id<BPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Theme customization with CSS variables
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface Theme : BPMBase
- (instancetype)initWithCssKey:(NSString *)cssKey value:(NSString *)value __attribute__((swift_name("init(cssKey:value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ThemeCompanion *companion __attribute__((swift_name("companion")));
- (Theme *)doCopyCssKey:(NSString *)cssKey value:(NSString *)value __attribute__((swift_name("doCopy(cssKey:value:)")));

/**
 * Theme customization with CSS variables
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Theme customization with CSS variables
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Theme customization with CSS variables
 */
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="css_key")
*/
@property (readonly) NSString *cssKey __attribute__((swift_name("cssKey")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end


/**
 * Theme customization with CSS variables
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Theme.Companion")))
@interface ThemeCompanion : BPMBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Theme customization with CSS variables
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ThemeCompanion *shared __attribute__((swift_name("shared")));

/**
 * Theme customization with CSS variables
 */
- (id<BPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * JWT token containing all authentication and configuration data
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface Token : BPMBase
- (instancetype)initWithTokenType:(NSString *)tokenType exp:(int64_t)exp iat:(int64_t)iat jti:(NSString *)jti userId:(NSString *)userId environment:(NSString *)environment iss:(NSString *)iss scopes:(NSArray<NSString *> *)scopes widget:(Widget * _Nullable)widget useCases:(NSArray<NSString *> *)useCases userData:(UserData *)userData metadata:(TokenMetadata * _Nullable)metadata __attribute__((swift_name("init(tokenType:exp:iat:jti:userId:environment:iss:scopes:widget:useCases:userData:metadata:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TokenCompanion *companion __attribute__((swift_name("companion")));
- (Token *)doCopyTokenType:(NSString *)tokenType exp:(int64_t)exp iat:(int64_t)iat jti:(NSString *)jti userId:(NSString *)userId environment:(NSString *)environment iss:(NSString *)iss scopes:(NSArray<NSString *> *)scopes widget:(Widget * _Nullable)widget useCases:(NSArray<NSString *> *)useCases userData:(UserData *)userData metadata:(TokenMetadata * _Nullable)metadata __attribute__((swift_name("doCopy(tokenType:exp:iat:jti:userId:environment:iss:scopes:widget:useCases:userData:metadata:)")));

/**
 * JWT token containing all authentication and configuration data
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * JWT token containing all authentication and configuration data
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * JWT token containing all authentication and configuration data
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *environment __attribute__((swift_name("environment")));
@property (readonly) int64_t exp __attribute__((swift_name("exp")));
@property (readonly) int64_t iat __attribute__((swift_name("iat")));
@property (readonly) NSString *iss __attribute__((swift_name("iss")));
@property (readonly) NSString *jti __attribute__((swift_name("jti")));
@property (readonly) TokenMetadata * _Nullable metadata __attribute__((swift_name("metadata")));
@property (readonly) NSArray<NSString *> *scopes __attribute__((swift_name("scopes")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="token_type")
*/
@property (readonly) NSString *tokenType __attribute__((swift_name("tokenType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="use_cases")
*/
@property (readonly) NSArray<NSString *> *useCases __attribute__((swift_name("useCases")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="user_data")
*/
@property (readonly) UserData *userData __attribute__((swift_name("userData")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="user_id")
*/
@property (readonly) NSString *userId __attribute__((swift_name("userId")));
@property (readonly) Widget * _Nullable widget __attribute__((swift_name("widget")));
@end


/**
 * JWT token containing all authentication and configuration data
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Token.Companion")))
@interface TokenCompanion : BPMBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * JWT token containing all authentication and configuration data
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TokenCompanion *shared __attribute__((swift_name("shared")));

/**
 * JWT token containing all authentication and configuration data
 */
- (id<BPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Token metadata containing hashed identifier
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface TokenMetadata : BPMBase
- (instancetype)initWithHashedIdentifier:(NSString *)hashedIdentifier __attribute__((swift_name("init(hashedIdentifier:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TokenMetadataCompanion *companion __attribute__((swift_name("companion")));
- (TokenMetadata *)doCopyHashedIdentifier:(NSString *)hashedIdentifier __attribute__((swift_name("doCopy(hashedIdentifier:)")));

/**
 * Token metadata containing hashed identifier
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Token metadata containing hashed identifier
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Token metadata containing hashed identifier
 */
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hashed_identifier")
*/
@property (readonly) NSString *hashedIdentifier __attribute__((swift_name("hashedIdentifier")));
@end


/**
 * Token metadata containing hashed identifier
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TokenMetadata.Companion")))
@interface TokenMetadataCompanion : BPMBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Token metadata containing hashed identifier
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TokenMetadataCompanion *shared __attribute__((swift_name("shared")));

/**
 * Token metadata containing hashed identifier
 */
- (id<BPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Use case types
 */
__attribute__((objc_subclassing_restricted))
@interface UseCase : BPMKotlinEnum<UseCase *>
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Use case types
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) UseCase *enrollment __attribute__((swift_name("enrollment")));
@property (class, readonly) UseCase *paymentIntent __attribute__((swift_name("paymentIntent")));
+ (BPMKotlinArray<UseCase *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<UseCase *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface User : BPMBase
- (instancetype)initWithId:(NSString *)id name:(NSString *)name displayName:(NSString *)displayName __attribute__((swift_name("init(id:name:displayName:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) UserCompanion *companion __attribute__((swift_name("companion")));
- (User *)doCopyId:(NSString *)id name:(NSString *)name displayName:(NSString *)displayName __attribute__((swift_name("doCopy(id:name:displayName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *displayName __attribute__((swift_name("displayName")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("User.Companion")))
@interface UserCompanion : BPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UserCompanion *shared __attribute__((swift_name("shared")));
- (id<BPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * User data containing user information and organization
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface UserData : BPMBase
- (instancetype)initWithId:(NSString *)id username:(NSString *)username email:(NSString *)email certificationState:(NSString *)certificationState organization:(Organization *)organization __attribute__((swift_name("init(id:username:email:certificationState:organization:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) UserDataCompanion *companion __attribute__((swift_name("companion")));
- (UserData *)doCopyId:(NSString *)id username:(NSString *)username email:(NSString *)email certificationState:(NSString *)certificationState organization:(Organization *)organization __attribute__((swift_name("doCopy(id:username:email:certificationState:organization:)")));

/**
 * User data containing user information and organization
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * User data containing user information and organization
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * User data containing user information and organization
 */
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="certification_state")
*/
@property (readonly) NSString *certificationState __attribute__((swift_name("certificationState")));
@property (readonly) NSString *email __attribute__((swift_name("email")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) Organization *organization __attribute__((swift_name("organization")));
@property (readonly) NSString *username __attribute__((swift_name("username")));
@end


/**
 * User data containing user information and organization
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserData.Companion")))
@interface UserDataCompanion : BPMBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * User data containing user information and organization
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UserDataCompanion *shared __attribute__((swift_name("shared")));

/**
 * User data containing user information and organization
 */
- (id<BPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Widget configuration for the token
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface Widget : BPMBase
- (instancetype)initWithTopTierInstitutions:(NSArray<NSString *> * _Nullable)topTierInstitutions branding:(Branding * _Nullable)branding theme:(NSArray<Theme *> * _Nullable)theme callbackUrls:(CallbackUrls * _Nullable)callbackUrls enrollment:(EnrollmentConfiguration * _Nullable)enrollment paymentIntent:(PaymentIntentConfiguration * _Nullable)paymentIntent __attribute__((swift_name("init(topTierInstitutions:branding:theme:callbackUrls:enrollment:paymentIntent:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) WidgetCompanion *companion __attribute__((swift_name("companion")));
- (Widget *)doCopyTopTierInstitutions:(NSArray<NSString *> * _Nullable)topTierInstitutions branding:(Branding * _Nullable)branding theme:(NSArray<Theme *> * _Nullable)theme callbackUrls:(CallbackUrls * _Nullable)callbackUrls enrollment:(EnrollmentConfiguration * _Nullable)enrollment paymentIntent:(PaymentIntentConfiguration * _Nullable)paymentIntent __attribute__((swift_name("doCopy(topTierInstitutions:branding:theme:callbackUrls:enrollment:paymentIntent:)")));

/**
 * Widget configuration for the token
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Widget configuration for the token
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Widget configuration for the token
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Branding * _Nullable branding __attribute__((swift_name("branding")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="callback_urls")
*/
@property (readonly) CallbackUrls * _Nullable callbackUrls __attribute__((swift_name("callbackUrls")));
@property (readonly) EnrollmentConfiguration * _Nullable enrollment __attribute__((swift_name("enrollment")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="payment_intent")
*/
@property (readonly) PaymentIntentConfiguration * _Nullable paymentIntent __attribute__((swift_name("paymentIntent")));
@property (readonly) NSArray<Theme *> * _Nullable theme __attribute__((swift_name("theme")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="top_tier_institutions")
*/
@property (readonly) NSArray<NSString *> * _Nullable topTierInstitutions __attribute__((swift_name("topTierInstitutions")));
@end


/**
 * Widget configuration for the token
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Widget.Companion")))
@interface WidgetCompanion : BPMBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Widget configuration for the token
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WidgetCompanion *shared __attribute__((swift_name("shared")));

/**
 * Widget configuration for the token
 */
- (id<BPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Widget configuration containing branding, callbacks, enrollment, and payment intent
 * @deprecated Use Widget instead
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface WidgetConfig : BPMBase
- (instancetype)initWithCallbackUrls:(CallbackUrls *)callbackUrls enrollment:(EnrollmentData *)enrollment paymentIntent:(PaymentIntent_ *)paymentIntent __attribute__((swift_name("init(callbackUrls:enrollment:paymentIntent:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) WidgetConfigCompanion *companion __attribute__((swift_name("companion")));
- (WidgetConfig *)doCopyCallbackUrls:(CallbackUrls *)callbackUrls enrollment:(EnrollmentData *)enrollment paymentIntent:(PaymentIntent_ *)paymentIntent __attribute__((swift_name("doCopy(callbackUrls:enrollment:paymentIntent:)")));

/**
 * Widget configuration containing branding, callbacks, enrollment, and payment intent
 * @deprecated Use Widget instead
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Widget configuration containing branding, callbacks, enrollment, and payment intent
 * @deprecated Use Widget instead
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Widget configuration containing branding, callbacks, enrollment, and payment intent
 * @deprecated Use Widget instead
 */
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="callback_urls")
*/
@property (readonly) CallbackUrls *callbackUrls __attribute__((swift_name("callbackUrls")));
@property (readonly) EnrollmentData *enrollment __attribute__((swift_name("enrollment")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="payment_intent")
*/
@property (readonly) PaymentIntent_ *paymentIntent __attribute__((swift_name("paymentIntent")));
@end


/**
 * Widget configuration containing branding, callbacks, enrollment, and payment intent
 * @deprecated Use Widget instead
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WidgetConfig.Companion")))
@interface WidgetConfigCompanion : BPMBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Widget configuration containing branding, callbacks, enrollment, and payment intent
 * @deprecated Use Widget instead
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WidgetConfigCompanion *shared __attribute__((swift_name("shared")));

/**
 * Widget configuration containing branding, callbacks, enrollment, and payment intent
 * @deprecated Use Widget instead
 */
- (id<BPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Data class representing a bank account in Brazil
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface BankAccount : BPMBase
- (instancetype)initWithId:(NSString *)id accountNumber:(NSString * _Nullable)accountNumber accountType:(NSString * _Nullable)accountType bankName:(NSString * _Nullable)bankName branchNumber:(NSString * _Nullable)branchNumber holderName:(NSString * _Nullable)holderName holderType:(NSString * _Nullable)holderType institution:(NSString * _Nullable)institution institutionName:(NSString * _Nullable)institutionName createdAt:(NSString * _Nullable)createdAt updatedAt:(NSString * _Nullable)updatedAt __attribute__((swift_name("init(id:accountNumber:accountType:bankName:branchNumber:holderName:holderType:institution:institutionName:createdAt:updatedAt:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BankAccountCompanion *companion __attribute__((swift_name("companion")));
- (BankAccount *)doCopyId:(NSString *)id accountNumber:(NSString * _Nullable)accountNumber accountType:(NSString * _Nullable)accountType bankName:(NSString * _Nullable)bankName branchNumber:(NSString * _Nullable)branchNumber holderName:(NSString * _Nullable)holderName holderType:(NSString * _Nullable)holderType institution:(NSString * _Nullable)institution institutionName:(NSString * _Nullable)institutionName createdAt:(NSString * _Nullable)createdAt updatedAt:(NSString * _Nullable)updatedAt __attribute__((swift_name("doCopy(id:accountNumber:accountType:bankName:branchNumber:holderName:holderType:institution:institutionName:createdAt:updatedAt:)")));

/**
 * Data class representing a bank account in Brazil
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Data class representing a bank account in Brazil
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Data class representing a bank account in Brazil
 */
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="account_number")
*/
@property (readonly) NSString * _Nullable accountNumber __attribute__((swift_name("accountNumber")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="account_type")
*/
@property (readonly) NSString * _Nullable accountType __attribute__((swift_name("accountType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="bank_name")
*/
@property (readonly) NSString * _Nullable bankName __attribute__((swift_name("bankName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="branch_number")
*/
@property (readonly) NSString * _Nullable branchNumber __attribute__((swift_name("branchNumber")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="created_at")
*/
@property (readonly) NSString * _Nullable createdAt __attribute__((swift_name("createdAt")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="holder_name")
*/
@property (readonly) NSString * _Nullable holderName __attribute__((swift_name("holderName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="holder_type")
*/
@property (readonly) NSString * _Nullable holderType __attribute__((swift_name("holderType")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable institution __attribute__((swift_name("institution")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="institution_name")
*/
@property (readonly) NSString * _Nullable institutionName __attribute__((swift_name("institutionName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="updated_at")
*/
@property (readonly) NSString * _Nullable updatedAt __attribute__((swift_name("updatedAt")));
@end


/**
 * Data class representing a bank account in Brazil
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BankAccount.Companion")))
@interface BankAccountCompanion : BPMBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Data class representing a bank account in Brazil
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BankAccountCompanion *shared __attribute__((swift_name("shared")));

/**
 * Data class representing a bank account in Brazil
 */
- (id<BPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Data class representing customer information
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface Customer : BPMBase
- (instancetype)initWithIdentifier:(NSString *)identifier name:(NSString * _Nullable)name externalId:(NSString * _Nullable)externalId email:(NSString * _Nullable)email phone:(NSString * _Nullable)phone address:(NSString * _Nullable)address id:(NSString * _Nullable)id createdAt:(NSString * _Nullable)createdAt updatedAt:(NSString * _Nullable)updatedAt __attribute__((swift_name("init(identifier:name:externalId:email:phone:address:id:createdAt:updatedAt:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CustomerCompanion *companion __attribute__((swift_name("companion")));
- (Customer *)doCopyIdentifier:(NSString *)identifier name:(NSString * _Nullable)name externalId:(NSString * _Nullable)externalId email:(NSString * _Nullable)email phone:(NSString * _Nullable)phone address:(NSString * _Nullable)address id:(NSString * _Nullable)id createdAt:(NSString * _Nullable)createdAt updatedAt:(NSString * _Nullable)updatedAt __attribute__((swift_name("doCopy(identifier:name:externalId:email:phone:address:id:createdAt:updatedAt:)")));

/**
 * Data class representing customer information
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Data class representing customer information
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Data class representing customer information
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable address __attribute__((swift_name("address")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="created_at")
*/
@property (readonly) NSString * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property (readonly) NSString * _Nullable email __attribute__((swift_name("email")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="external_id")
*/
@property (readonly) NSString * _Nullable externalId __attribute__((swift_name("externalId")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString *identifier __attribute__((swift_name("identifier")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable phone __attribute__((swift_name("phone")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="updated_at")
*/
@property (readonly) NSString * _Nullable updatedAt __attribute__((swift_name("updatedAt")));
@end


/**
 * Data class representing customer information
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Customer.Companion")))
@interface CustomerCompanion : BPMBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Data class representing customer information
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CustomerCompanion *shared __attribute__((swift_name("shared")));

/**
 * Data class representing customer information
 */
- (id<BPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Data class representing the payload for completing enrollment after redirection
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface CompleteEnrollmentPayload : BPMBase
- (instancetype)initWithState:(NSString *)state code:(NSString *)code idToken:(NSString *)idToken __attribute__((swift_name("init(state:code:idToken:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CompleteEnrollmentPayloadCompanion *companion __attribute__((swift_name("companion")));
- (CompleteEnrollmentPayload *)doCopyState:(NSString *)state code:(NSString *)code idToken:(NSString *)idToken __attribute__((swift_name("doCopy(state:code:idToken:)")));

/**
 * Data class representing the payload for completing enrollment after redirection
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Data class representing the payload for completing enrollment after redirection
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Data class representing the payload for completing enrollment after redirection
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *code __attribute__((swift_name("code")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id_token")
*/
@property (readonly) NSString *idToken __attribute__((swift_name("idToken")));
@property (readonly) NSString *state __attribute__((swift_name("state")));
@end


/**
 * Data class representing the payload for completing enrollment after redirection
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CompleteEnrollmentPayload.Companion")))
@interface CompleteEnrollmentPayloadCompanion : BPMBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Data class representing the payload for completing enrollment after redirection
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CompleteEnrollmentPayloadCompanion *shared __attribute__((swift_name("shared")));

/**
 * Data class representing the payload for completing enrollment after redirection
 */
- (id<BPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Data class representing the confirmation data for enrollment
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface ConfirmationData : BPMBase
- (instancetype)initWithAuthenticatorAttachment:(NSString *)authenticatorAttachment id:(NSString *)id rawId:(NSString *)rawId response:(ConfirmationResponse *)response type:(NSString *)type clientExtensionResults:(NSDictionary<NSString *, BPMKotlinx_serialization_jsonJsonElement *> *)clientExtensionResults __attribute__((swift_name("init(authenticatorAttachment:id:rawId:response:type:clientExtensionResults:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ConfirmationDataCompanion *companion __attribute__((swift_name("companion")));
- (ConfirmationData *)doCopyAuthenticatorAttachment:(NSString *)authenticatorAttachment id:(NSString *)id rawId:(NSString *)rawId response:(ConfirmationResponse *)response type:(NSString *)type clientExtensionResults:(NSDictionary<NSString *, BPMKotlinx_serialization_jsonJsonElement *> *)clientExtensionResults __attribute__((swift_name("doCopy(authenticatorAttachment:id:rawId:response:type:clientExtensionResults:)")));

/**
 * Data class representing the confirmation data for enrollment
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Data class representing the confirmation data for enrollment
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Data class representing the confirmation data for enrollment
 */
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="authenticatorAttachment")
*/
@property (readonly) NSString *authenticatorAttachment __attribute__((swift_name("authenticatorAttachment")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="clientExtensionResults")
*/
@property (readonly) NSDictionary<NSString *, BPMKotlinx_serialization_jsonJsonElement *> *clientExtensionResults __attribute__((swift_name("clientExtensionResults")));
@property (readonly) NSString *id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="rawId")
*/
@property (readonly) NSString *rawId __attribute__((swift_name("rawId")));
@property (readonly) ConfirmationResponse *response __attribute__((swift_name("response")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end


/**
 * Data class representing the confirmation data for enrollment
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfirmationData.Companion")))
@interface ConfirmationDataCompanion : BPMBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Data class representing the confirmation data for enrollment
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ConfirmationDataCompanion *shared __attribute__((swift_name("shared")));

/**
 * Data class representing the confirmation data for enrollment
 */
- (id<BPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Data class representing the response data in confirmation
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface ConfirmationResponse : BPMBase
- (instancetype)initWithAttestationObject:(NSString *)attestationObject clientDataJSON:(NSString *)clientDataJSON __attribute__((swift_name("init(attestationObject:clientDataJSON:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ConfirmationResponseCompanion *companion __attribute__((swift_name("companion")));
- (ConfirmationResponse *)doCopyAttestationObject:(NSString *)attestationObject clientDataJSON:(NSString *)clientDataJSON __attribute__((swift_name("doCopy(attestationObject:clientDataJSON:)")));

/**
 * Data class representing the response data in confirmation
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Data class representing the response data in confirmation
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Data class representing the response data in confirmation
 */
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="attestationObject")
*/
@property (readonly) NSString *attestationObject __attribute__((swift_name("attestationObject")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="clientDataJSON")
*/
@property (readonly) NSString *clientDataJSON __attribute__((swift_name("clientDataJSON")));
@end


/**
 * Data class representing the response data in confirmation
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfirmationResponse.Companion")))
@interface ConfirmationResponseCompanion : BPMBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Data class representing the response data in confirmation
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ConfirmationResponseCompanion *shared __attribute__((swift_name("shared")));

/**
 * Data class representing the response data in confirmation
 */
- (id<BPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
@interface Enrollment : BPMBase
- (instancetype)initWithId:(NSString *)id name:(NSString *)name status:(NSString *)status enrollmentId:(NSString *)enrollmentId createdAt:(NSString *)createdAt institution:(Institution *)institution __attribute__((swift_name("init(id:name:status:enrollmentId:createdAt:institution:)"))) __attribute__((objc_designated_initializer));
- (Enrollment *)doCopyId:(NSString *)id name:(NSString *)name status:(NSString *)status enrollmentId:(NSString *)enrollmentId createdAt:(NSString *)createdAt institution:(Institution *)institution __attribute__((swift_name("doCopy(id:name:status:enrollmentId:createdAt:institution:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *createdAt __attribute__((swift_name("createdAt")));
@property (readonly) NSString *enrollmentId __attribute__((swift_name("enrollmentId")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) Institution *institution __attribute__((swift_name("institution")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *status __attribute__((swift_name("status")));
@end


/**
 * Data class representing the payload for confirming enrollment
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface EnrollmentConfirmationPayload : BPMBase
- (instancetype)initWithConfirmationData:(ConfirmationData *)confirmationData __attribute__((swift_name("init(confirmationData:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) EnrollmentConfirmationPayloadCompanion *companion __attribute__((swift_name("companion")));
- (EnrollmentConfirmationPayload *)doCopyConfirmationData:(ConfirmationData *)confirmationData __attribute__((swift_name("doCopy(confirmationData:)")));

/**
 * Data class representing the payload for confirming enrollment
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Data class representing the payload for confirming enrollment
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Data class representing the payload for confirming enrollment
 */
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="confirmation_data")
*/
@property (readonly) ConfirmationData *confirmationData __attribute__((swift_name("confirmationData")));
@end


/**
 * Data class representing the payload for confirming enrollment
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EnrollmentConfirmationPayload.Companion")))
@interface EnrollmentConfirmationPayloadCompanion : BPMBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Data class representing the payload for confirming enrollment
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) EnrollmentConfirmationPayloadCompanion *shared __attribute__((swift_name("shared")));

/**
 * Data class representing the payload for confirming enrollment
 */
- (id<BPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Enum representing the possible enrollment details status values
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface EnrollmentDetailsStatus : BPMKotlinEnum<EnrollmentDetailsStatus *>
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Enum representing the possible enrollment details status values
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) EnrollmentDetailsStatusCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) EnrollmentDetailsStatus *awaitingAccountHolderValidation __attribute__((swift_name("awaitingAccountHolderValidation")));
@property (class, readonly) EnrollmentDetailsStatus *awaitingEnrollment __attribute__((swift_name("awaitingEnrollment")));
@property (class, readonly) EnrollmentDetailsStatus *authorized __attribute__((swift_name("authorized")));
@property (class, readonly) EnrollmentDetailsStatus *rejected __attribute__((swift_name("rejected")));
@property (class, readonly) EnrollmentDetailsStatus *revoked __attribute__((swift_name("revoked")));
@property (class, readonly) EnrollmentDetailsStatus *error __attribute__((swift_name("error")));
+ (BPMKotlinArray<EnrollmentDetailsStatus *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<EnrollmentDetailsStatus *> *entries __attribute__((swift_name("entries")));
@end


/**
 * Enum representing the possible enrollment details status values
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EnrollmentDetailsStatus.Companion")))
@interface EnrollmentDetailsStatusCompanion : BPMBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Enum representing the possible enrollment details status values
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) EnrollmentDetailsStatusCompanion *shared __attribute__((swift_name("shared")));

/**
 * Enum representing the possible enrollment details status values
 */
- (id<BPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));

/**
 * Enum representing the possible enrollment details status values
 */
- (id<BPMKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(BPMKotlinArray<id<BPMKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * Data class representing the enrollment payload
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface EnrollmentPayload : BPMBase
- (instancetype)initWithType:(NSString *)type externalId:(NSString * _Nullable)externalId details:(EnrollmentPayloadDetails *)details __attribute__((swift_name("init(type:externalId:details:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) EnrollmentPayloadCompanion *companion __attribute__((swift_name("companion")));
- (EnrollmentPayload *)doCopyType:(NSString *)type externalId:(NSString * _Nullable)externalId details:(EnrollmentPayloadDetails *)details __attribute__((swift_name("doCopy(type:externalId:details:)")));

/**
 * Data class representing the enrollment payload
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Data class representing the enrollment payload
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Data class representing the enrollment payload
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) EnrollmentPayloadDetails *details __attribute__((swift_name("details")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="external_id")
*/
@property (readonly) NSString * _Nullable externalId __attribute__((swift_name("externalId")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end


/**
 * Data class representing the enrollment payload
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EnrollmentPayload.Companion")))
@interface EnrollmentPayloadCompanion : BPMBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Data class representing the enrollment payload
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) EnrollmentPayloadCompanion *shared __attribute__((swift_name("shared")));

/**
 * Data class representing the enrollment payload
 */
- (id<BPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Data class representing enrollment details
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface EnrollmentPayloadDetails : BPMBase
- (instancetype)initWithName:(NSString * _Nullable)name customer:(Customer *)customer institution:(NSString *)institution platform:(NSString *)platform callbackUrl:(NSString *)callbackUrl riskSignals:(RiskSignals *)riskSignals __attribute__((swift_name("init(name:customer:institution:platform:callbackUrl:riskSignals:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) EnrollmentPayloadDetailsCompanion *companion __attribute__((swift_name("companion")));
- (EnrollmentPayloadDetails *)doCopyName:(NSString * _Nullable)name customer:(Customer *)customer institution:(NSString *)institution platform:(NSString *)platform callbackUrl:(NSString *)callbackUrl riskSignals:(RiskSignals *)riskSignals __attribute__((swift_name("doCopy(name:customer:institution:platform:callbackUrl:riskSignals:)")));

/**
 * Data class representing enrollment details
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Data class representing enrollment details
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Data class representing enrollment details
 */
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="callback_url")
*/
@property (readonly) NSString *callbackUrl __attribute__((swift_name("callbackUrl")));
@property (readonly) Customer *customer __attribute__((swift_name("customer")));
@property (readonly) NSString *institution __attribute__((swift_name("institution")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString *platform __attribute__((swift_name("platform")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="risk_signals")
*/
@property (readonly) RiskSignals *riskSignals __attribute__((swift_name("riskSignals")));
@end


/**
 * Data class representing enrollment details
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EnrollmentPayloadDetails.Companion")))
@interface EnrollmentPayloadDetailsCompanion : BPMBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Data class representing enrollment details
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) EnrollmentPayloadDetailsCompanion *shared __attribute__((swift_name("shared")));

/**
 * Data class representing enrollment details
 */
- (id<BPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Data class representing the enrollment response
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface EnrollmentResponse : BPMBase
- (instancetype)initWithId:(NSString *)id type:(NSString *)type status:(EnrollmentStatus *)status details:(EnrollmentResponseDetails *)details externalId:(NSString * _Nullable)externalId metadata:(NSDictionary<NSString *, BPMKotlinx_serialization_jsonJsonElement *> * _Nullable)metadata statusReasonCode:(EnrollmentStatusReasonCode * _Nullable)statusReasonCode statusReasonMessage:(NSString * _Nullable)statusReasonMessage createdBy:(NSString *)createdBy createdAt:(NSString *)createdAt updatedAt:(NSString *)updatedAt __attribute__((swift_name("init(id:type:status:details:externalId:metadata:statusReasonCode:statusReasonMessage:createdBy:createdAt:updatedAt:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) EnrollmentResponseCompanion *companion __attribute__((swift_name("companion")));
- (EnrollmentResponse *)doCopyId:(NSString *)id type:(NSString *)type status:(EnrollmentStatus *)status details:(EnrollmentResponseDetails *)details externalId:(NSString * _Nullable)externalId metadata:(NSDictionary<NSString *, BPMKotlinx_serialization_jsonJsonElement *> * _Nullable)metadata statusReasonCode:(EnrollmentStatusReasonCode * _Nullable)statusReasonCode statusReasonMessage:(NSString * _Nullable)statusReasonMessage createdBy:(NSString *)createdBy createdAt:(NSString *)createdAt updatedAt:(NSString *)updatedAt __attribute__((swift_name("doCopy(id:type:status:details:externalId:metadata:statusReasonCode:statusReasonMessage:createdBy:createdAt:updatedAt:)")));

/**
 * Data class representing the enrollment response
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Data class representing the enrollment response
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Data class representing the enrollment response
 */
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="created_at")
*/
@property (readonly) NSString *createdAt __attribute__((swift_name("createdAt")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="created_by")
*/
@property (readonly) NSString *createdBy __attribute__((swift_name("createdBy")));
@property (readonly) EnrollmentResponseDetails *details __attribute__((swift_name("details")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="external_id")
*/
@property (readonly) NSString * _Nullable externalId __attribute__((swift_name("externalId")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSDictionary<NSString *, BPMKotlinx_serialization_jsonJsonElement *> * _Nullable metadata __attribute__((swift_name("metadata")));
@property (readonly) EnrollmentStatus *status __attribute__((swift_name("status")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="status_reason_code")
*/
@property (readonly) EnrollmentStatusReasonCode * _Nullable statusReasonCode __attribute__((swift_name("statusReasonCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="status_reason_message")
*/
@property (readonly) NSString * _Nullable statusReasonMessage __attribute__((swift_name("statusReasonMessage")));
@property (readonly) NSString *type __attribute__((swift_name("type")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="updated_at")
*/
@property (readonly) NSString *updatedAt __attribute__((swift_name("updatedAt")));
@end


/**
 * Data class representing the enrollment response
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EnrollmentResponse.Companion")))
@interface EnrollmentResponseCompanion : BPMBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Data class representing the enrollment response
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) EnrollmentResponseCompanion *shared __attribute__((swift_name("shared")));

/**
 * Data class representing the enrollment response
 */
- (id<BPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Data class representing enrollment response details
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface EnrollmentResponseDetails : BPMBase
- (instancetype)initWithCallbackUrl:(NSString *)callbackUrl customer:(NSString *)customer expiresAt:(NSString * _Nullable)expiresAt institution:(NSString *)institution name:(NSString * _Nullable)name platform:(NSString *)platform redirectUrl:(NSString * _Nullable)redirectUrl riskSignals:(NSString *)riskSignals status:(EnrollmentDetailsStatus *)status __attribute__((swift_name("init(callbackUrl:customer:expiresAt:institution:name:platform:redirectUrl:riskSignals:status:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) EnrollmentResponseDetailsCompanion *companion __attribute__((swift_name("companion")));
- (EnrollmentResponseDetails *)doCopyCallbackUrl:(NSString *)callbackUrl customer:(NSString *)customer expiresAt:(NSString * _Nullable)expiresAt institution:(NSString *)institution name:(NSString * _Nullable)name platform:(NSString *)platform redirectUrl:(NSString * _Nullable)redirectUrl riskSignals:(NSString *)riskSignals status:(EnrollmentDetailsStatus *)status __attribute__((swift_name("doCopy(callbackUrl:customer:expiresAt:institution:name:platform:redirectUrl:riskSignals:status:)")));

/**
 * Data class representing enrollment response details
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Data class representing enrollment response details
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Data class representing enrollment response details
 */
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="callback_url")
*/
@property (readonly) NSString *callbackUrl __attribute__((swift_name("callbackUrl")));
@property (readonly) NSString *customer __attribute__((swift_name("customer")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="expires_at")
*/
@property (readonly) NSString * _Nullable expiresAt __attribute__((swift_name("expiresAt")));
@property (readonly) NSString *institution __attribute__((swift_name("institution")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString *platform __attribute__((swift_name("platform")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="redirect_url")
*/
@property (readonly) NSString * _Nullable redirectUrl __attribute__((swift_name("redirectUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="risk_signals")
*/
@property (readonly) NSString *riskSignals __attribute__((swift_name("riskSignals")));
@property (readonly) EnrollmentDetailsStatus *status __attribute__((swift_name("status")));
@end


/**
 * Data class representing enrollment response details
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EnrollmentResponseDetails.Companion")))
@interface EnrollmentResponseDetailsCompanion : BPMBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Data class representing enrollment response details
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) EnrollmentResponseDetailsCompanion *shared __attribute__((swift_name("shared")));

/**
 * Data class representing enrollment response details
 */
- (id<BPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Enum representing the possible enrollment status values
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface EnrollmentStatus : BPMKotlinEnum<EnrollmentStatus *>
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Enum representing the possible enrollment status values
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) EnrollmentStatusCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) EnrollmentStatus *pending __attribute__((swift_name("pending")));
@property (class, readonly) EnrollmentStatus *succeeded __attribute__((swift_name("succeeded")));
@property (class, readonly) EnrollmentStatus *canceled __attribute__((swift_name("canceled")));
@property (class, readonly) EnrollmentStatus *failed __attribute__((swift_name("failed")));
+ (BPMKotlinArray<EnrollmentStatus *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<EnrollmentStatus *> *entries __attribute__((swift_name("entries")));
@end


/**
 * Enum representing the possible enrollment status values
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EnrollmentStatus.Companion")))
@interface EnrollmentStatusCompanion : BPMBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Enum representing the possible enrollment status values
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) EnrollmentStatusCompanion *shared __attribute__((swift_name("shared")));

/**
 * Enum representing the possible enrollment status values
 */
- (id<BPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));

/**
 * Enum representing the possible enrollment status values
 */
- (id<BPMKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(BPMKotlinArray<id<BPMKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * Enum representing the possible enrollment status reason code values
 * Based on Belvo API documentation: https://developers.belvo.com/apis/belvoopenapispec/enrollments-(brazil)/completeenrollmentredirectionbrazil
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface EnrollmentStatusReasonCode : BPMKotlinEnum<EnrollmentStatusReasonCode *>
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Enum representing the possible enrollment status reason code values
 * Based on Belvo API documentation: https://developers.belvo.com/apis/belvoopenapispec/enrollments-(brazil)/completeenrollmentredirectionbrazil
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) EnrollmentStatusReasonCodeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) EnrollmentStatusReasonCode *sendRiskSignalsFailed __attribute__((swift_name("sendRiskSignalsFailed")));
@property (class, readonly) EnrollmentStatusReasonCode *redirectionToInstitutionFailed __attribute__((swift_name("redirectionToInstitutionFailed")));
@property (class, readonly) EnrollmentStatusReasonCode *biometricRegistrationFailed __attribute__((swift_name("biometricRegistrationFailed")));
@property (class, readonly) EnrollmentStatusReasonCode *tooManyDeviceRegistrationAttempts __attribute__((swift_name("tooManyDeviceRegistrationAttempts")));
@property (class, readonly) EnrollmentStatusReasonCode *rejectedByUser __attribute__((swift_name("rejectedByUser")));
@property (class, readonly) EnrollmentStatusReasonCode *deviceNotSupportsBiometricAuthentication __attribute__((swift_name("deviceNotSupportsBiometricAuthentication")));
@property (class, readonly) EnrollmentStatusReasonCode *institutionInfraFailed __attribute__((swift_name("institutionInfraFailed")));
@property (class, readonly) EnrollmentStatusReasonCode *blockedByInstitutionSecurityPolicy __attribute__((swift_name("blockedByInstitutionSecurityPolicy")));
@property (class, readonly) EnrollmentStatusReasonCode *redirectionBackFromInstitutionFailed __attribute__((swift_name("redirectionBackFromInstitutionFailed")));
@property (class, readonly) EnrollmentStatusReasonCode *biometricValidationError __attribute__((swift_name("biometricValidationError")));
@property (class, readonly) EnrollmentStatusReasonCode *rejectedOther __attribute__((swift_name("rejectedOther")));
@property (class, readonly) EnrollmentStatusReasonCode *canceledDueToExpiration __attribute__((swift_name("canceledDueToExpiration")));
@property (class, readonly) EnrollmentStatusReasonCode *unexpected __attribute__((swift_name("unexpected")));
+ (BPMKotlinArray<EnrollmentStatusReasonCode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<EnrollmentStatusReasonCode *> *entries __attribute__((swift_name("entries")));
@end


/**
 * Enum representing the possible enrollment status reason code values
 * Based on Belvo API documentation: https://developers.belvo.com/apis/belvoopenapispec/enrollments-(brazil)/completeenrollmentredirectionbrazil
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EnrollmentStatusReasonCode.Companion")))
@interface EnrollmentStatusReasonCodeCompanion : BPMBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Enum representing the possible enrollment status reason code values
 * Based on Belvo API documentation: https://developers.belvo.com/apis/belvoopenapispec/enrollments-(brazil)/completeenrollmentredirectionbrazil
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) EnrollmentStatusReasonCodeCompanion *shared __attribute__((swift_name("shared")));

/**
 * Enum representing the possible enrollment status reason code values
 * Based on Belvo API documentation: https://developers.belvo.com/apis/belvoopenapispec/enrollments-(brazil)/completeenrollmentredirectionbrazil
 */
- (id<BPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));

/**
 * Enum representing the possible enrollment status reason code values
 * Based on Belvo API documentation: https://developers.belvo.com/apis/belvoopenapispec/enrollments-(brazil)/completeenrollmentredirectionbrazil
 */
- (id<BPMKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(BPMKotlinArray<id<BPMKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * Data class representing a payment institution in Brazil
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface Institution : BPMBase
- (instancetype)initWithId:(NSString *)id active:(BOOL)active country:(NSString *)country description:(NSString * _Nullable)description displayName:(NSString *)displayName iconLogo:(NSString *)iconLogo institutionType:(NSString * _Nullable)institutionType legalEntityName:(NSString * _Nullable)legalEntityName logo:(NSString * _Nullable)logo name:(NSString *)name paymentMethods:(NSDictionary<NSString *, PaymentMethodStatus *> * _Nullable)paymentMethods primaryColor:(NSString * _Nullable)primaryColor sortPriority:(BPMInt * _Nullable)sortPriority textLogo:(NSString * _Nullable)textLogo website:(NSString * _Nullable)website __attribute__((swift_name("init(id:active:country:description:displayName:iconLogo:institutionType:legalEntityName:logo:name:paymentMethods:primaryColor:sortPriority:textLogo:website:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) InstitutionCompanion *companion __attribute__((swift_name("companion")));
- (Institution *)doCopyId:(NSString *)id active:(BOOL)active country:(NSString *)country description:(NSString * _Nullable)description displayName:(NSString *)displayName iconLogo:(NSString *)iconLogo institutionType:(NSString * _Nullable)institutionType legalEntityName:(NSString * _Nullable)legalEntityName logo:(NSString * _Nullable)logo name:(NSString *)name paymentMethods:(NSDictionary<NSString *, PaymentMethodStatus *> * _Nullable)paymentMethods primaryColor:(NSString * _Nullable)primaryColor sortPriority:(BPMInt * _Nullable)sortPriority textLogo:(NSString * _Nullable)textLogo website:(NSString * _Nullable)website __attribute__((swift_name("doCopy(id:active:country:description:displayName:iconLogo:institutionType:legalEntityName:logo:name:paymentMethods:primaryColor:sortPriority:textLogo:website:)")));

/**
 * Data class representing a payment institution in Brazil
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Data class representing a payment institution in Brazil
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Data class representing a payment institution in Brazil
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL active __attribute__((swift_name("active")));
@property (readonly) NSString *country __attribute__((swift_name("country")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="display_name")
*/
@property (readonly) NSString *displayName __attribute__((swift_name("displayName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="icon_logo")
*/
@property (readonly) NSString *iconLogo __attribute__((swift_name("iconLogo")));
@property (readonly) NSString *id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="institution_type")
*/
@property (readonly) NSString * _Nullable institutionType __attribute__((swift_name("institutionType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="legal_entity_name")
*/
@property (readonly) NSString * _Nullable legalEntityName __attribute__((swift_name("legalEntityName")));
@property (readonly) NSString * _Nullable logo __attribute__((swift_name("logo")));
@property (readonly) NSString *name __attribute__((swift_name("name")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="payment_methods")
*/
@property (readonly) NSDictionary<NSString *, PaymentMethodStatus *> * _Nullable paymentMethods __attribute__((swift_name("paymentMethods")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="primary_color")
*/
@property (readonly) NSString * _Nullable primaryColor __attribute__((swift_name("primaryColor")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="sort_priority")
*/
@property (readonly) BPMInt * _Nullable sortPriority __attribute__((swift_name("sortPriority")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="text_logo")
*/
@property (readonly) NSString * _Nullable textLogo __attribute__((swift_name("textLogo")));
@property (readonly) NSString * _Nullable website __attribute__((swift_name("website")));
@end


/**
 * Data class representing a payment institution in Brazil
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Institution.Companion")))
@interface InstitutionCompanion : BPMBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Data class representing a payment institution in Brazil
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) InstitutionCompanion *shared __attribute__((swift_name("shared")));

/**
 * Data class representing a payment institution in Brazil
 */
- (id<BPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Query parameters for listing payment institutions
 *
 * @param page A page number within the paginated result set
 * @param pageSize Indicates how many results to return per page (1-1000, default: 100)
 * @param name Return an institution with this Belvo-designated name (supports partial search, minimum 3 characters)
 * @param institutionType Return results only for this institution type
 * @param idIn Return information for these institution IDs
 */
__attribute__((objc_subclassing_restricted))
@interface InstitutionQueryParameters : BPMBase
- (instancetype)initWithPage:(BPMInt * _Nullable)page pageSize:(BPMInt * _Nullable)pageSize name:(NSString * _Nullable)name institutionType:(InstitutionQueryParametersInstitutionType * _Nullable)institutionType idIn:(NSArray<NSString *> * _Nullable)idIn __attribute__((swift_name("init(page:pageSize:name:institutionType:idIn:)"))) __attribute__((objc_designated_initializer));
- (InstitutionQueryParameters *)doCopyPage:(BPMInt * _Nullable)page pageSize:(BPMInt * _Nullable)pageSize name:(NSString * _Nullable)name institutionType:(InstitutionQueryParametersInstitutionType * _Nullable)institutionType idIn:(NSArray<NSString *> * _Nullable)idIn __attribute__((swift_name("doCopy(page:pageSize:name:institutionType:idIn:)")));

/**
 * Query parameters for listing payment institutions
 *
 * @param page A page number within the paginated result set
 * @param pageSize Indicates how many results to return per page (1-1000, default: 100)
 * @param name Return an institution with this Belvo-designated name (supports partial search, minimum 3 characters)
 * @param institutionType Return results only for this institution type
 * @param idIn Return information for these institution IDs
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Query parameters for listing payment institutions
 *
 * @param page A page number within the paginated result set
 * @param pageSize Indicates how many results to return per page (1-1000, default: 100)
 * @param name Return an institution with this Belvo-designated name (supports partial search, minimum 3 characters)
 * @param institutionType Return results only for this institution type
 * @param idIn Return information for these institution IDs
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Query parameters for listing payment institutions
 *
 * @param page A page number within the paginated result set
 * @param pageSize Indicates how many results to return per page (1-1000, default: 100)
 * @param name Return an institution with this Belvo-designated name (supports partial search, minimum 3 characters)
 * @param institutionType Return results only for this institution type
 * @param idIn Return information for these institution IDs
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> * _Nullable idIn __attribute__((swift_name("idIn")));
@property (readonly) InstitutionQueryParametersInstitutionType * _Nullable institutionType __attribute__((swift_name("institutionType")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) BPMInt * _Nullable page __attribute__((swift_name("page")));
@property (readonly) BPMInt * _Nullable pageSize __attribute__((swift_name("pageSize")));
@end


/**
 * Institution type enum
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstitutionQueryParameters.InstitutionType")))
@interface InstitutionQueryParametersInstitutionType : BPMKotlinEnum<InstitutionQueryParametersInstitutionType *>
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Institution type enum
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) InstitutionQueryParametersInstitutionType *individual __attribute__((swift_name("individual")));
@property (class, readonly) InstitutionQueryParametersInstitutionType *business __attribute__((swift_name("business")));
+ (BPMKotlinArray<InstitutionQueryParametersInstitutionType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<InstitutionQueryParametersInstitutionType *> *entries __attribute__((swift_name("entries")));
@end


/**
 * Data class representing payment method status information
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface PaymentMethodStatus : BPMBase
- (instancetype)initWithStatus:(NSString *)status statusReason:(NSString * _Nullable)statusReason phase:(NSString * _Nullable)phase __attribute__((swift_name("init(status:statusReason:phase:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentMethodStatusCompanion *companion __attribute__((swift_name("companion")));
- (PaymentMethodStatus *)doCopyStatus:(NSString *)status statusReason:(NSString * _Nullable)statusReason phase:(NSString * _Nullable)phase __attribute__((swift_name("doCopy(status:statusReason:phase:)")));

/**
 * Data class representing payment method status information
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Data class representing payment method status information
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Data class representing payment method status information
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable phase __attribute__((swift_name("phase")));
@property (readonly) NSString *status __attribute__((swift_name("status")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="status_reason")
*/
@property (readonly) NSString * _Nullable statusReason __attribute__((swift_name("statusReason")));
@end


/**
 * Data class representing payment method status information
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentMethodStatus.Companion")))
@interface PaymentMethodStatusCompanion : BPMBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Data class representing payment method status information
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentMethodStatusCompanion *shared __attribute__((swift_name("shared")));

/**
 * Data class representing payment method status information
 */
- (id<BPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Data class representing the authorize payment intent payload
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface AuthorizePaymentIntentPayload : BPMBase
- (instancetype)initWithPlatform:(NSString *)platform riskSignals:(RiskSignals *)riskSignals assertion:(PaymentIntentAssertion *)assertion __attribute__((swift_name("init(platform:riskSignals:assertion:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AuthorizePaymentIntentPayloadCompanion *companion __attribute__((swift_name("companion")));
- (AuthorizePaymentIntentPayload *)doCopyPlatform:(NSString *)platform riskSignals:(RiskSignals *)riskSignals assertion:(PaymentIntentAssertion *)assertion __attribute__((swift_name("doCopy(platform:riskSignals:assertion:)")));

/**
 * Data class representing the authorize payment intent payload
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Data class representing the authorize payment intent payload
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Data class representing the authorize payment intent payload
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PaymentIntentAssertion *assertion __attribute__((swift_name("assertion")));
@property (readonly) NSString *platform __attribute__((swift_name("platform")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="risk_signals")
*/
@property (readonly) RiskSignals *riskSignals __attribute__((swift_name("riskSignals")));
@end


/**
 * Data class representing the authorize payment intent payload
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthorizePaymentIntentPayload.Companion")))
@interface AuthorizePaymentIntentPayloadCompanion : BPMBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Data class representing the authorize payment intent payload
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AuthorizePaymentIntentPayloadCompanion *shared __attribute__((swift_name("shared")));

/**
 * Data class representing the authorize payment intent payload
 */
- (id<BPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Data class representing a charge in a payment intent
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface Charge : BPMBase
- (instancetype)initWithId:(NSString *)id amount:(NSString *)amount createdAt:(NSString *)createdAt createdBy:(NSString *)createdBy currency:(NSString *)currency customer:(NSString *)customer description:(NSString * _Nullable)description statementDescription:(NSString * _Nullable)statementDescription failureCode:(NSString * _Nullable)failureCode failureMessage:(NSString * _Nullable)failureMessage metadata:(NSDictionary<NSString *, BPMKotlinx_serialization_jsonJsonElement *> * _Nullable)metadata paymentIntent:(NSString *)paymentIntent paymentMethodDetails:(PaymentMethodDetails_ * _Nullable)paymentMethodDetails paymentMethodInformation:(PaymentMethodInformation * _Nullable)paymentMethodInformation paymentMethodType:(NSString * _Nullable)paymentMethodType payerInformation:(NSDictionary<NSString *, BPMKotlinx_serialization_jsonJsonElement *> * _Nullable)payerInformation provider:(NSString * _Nullable)provider status:(ChargeStatus *)status updatedAt:(NSString *)updatedAt transactions:(NSArray<NSDictionary<NSString *, BPMKotlinx_serialization_jsonJsonElement *> *> * _Nullable)transactions __attribute__((swift_name("init(id:amount:createdAt:createdBy:currency:customer:description:statementDescription:failureCode:failureMessage:metadata:paymentIntent:paymentMethodDetails:paymentMethodInformation:paymentMethodType:payerInformation:provider:status:updatedAt:transactions:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ChargeCompanion *companion __attribute__((swift_name("companion")));
- (Charge *)doCopyId:(NSString *)id amount:(NSString *)amount createdAt:(NSString *)createdAt createdBy:(NSString *)createdBy currency:(NSString *)currency customer:(NSString *)customer description:(NSString * _Nullable)description statementDescription:(NSString * _Nullable)statementDescription failureCode:(NSString * _Nullable)failureCode failureMessage:(NSString * _Nullable)failureMessage metadata:(NSDictionary<NSString *, BPMKotlinx_serialization_jsonJsonElement *> * _Nullable)metadata paymentIntent:(NSString *)paymentIntent paymentMethodDetails:(PaymentMethodDetails_ * _Nullable)paymentMethodDetails paymentMethodInformation:(PaymentMethodInformation * _Nullable)paymentMethodInformation paymentMethodType:(NSString * _Nullable)paymentMethodType payerInformation:(NSDictionary<NSString *, BPMKotlinx_serialization_jsonJsonElement *> * _Nullable)payerInformation provider:(NSString * _Nullable)provider status:(ChargeStatus *)status updatedAt:(NSString *)updatedAt transactions:(NSArray<NSDictionary<NSString *, BPMKotlinx_serialization_jsonJsonElement *> *> * _Nullable)transactions __attribute__((swift_name("doCopy(id:amount:createdAt:createdBy:currency:customer:description:statementDescription:failureCode:failureMessage:metadata:paymentIntent:paymentMethodDetails:paymentMethodInformation:paymentMethodType:payerInformation:provider:status:updatedAt:transactions:)")));

/**
 * Data class representing a charge in a payment intent
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Data class representing a charge in a payment intent
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Data class representing a charge in a payment intent
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *amount __attribute__((swift_name("amount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="created_at")
*/
@property (readonly) NSString *createdAt __attribute__((swift_name("createdAt")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="created_by")
*/
@property (readonly) NSString *createdBy __attribute__((swift_name("createdBy")));
@property (readonly) NSString *currency __attribute__((swift_name("currency")));
@property (readonly) NSString *customer __attribute__((swift_name("customer")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="failure_code")
*/
@property (readonly) NSString * _Nullable failureCode __attribute__((swift_name("failureCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="failure_message")
*/
@property (readonly) NSString * _Nullable failureMessage __attribute__((swift_name("failureMessage")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSDictionary<NSString *, BPMKotlinx_serialization_jsonJsonElement *> * _Nullable metadata __attribute__((swift_name("metadata")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="payer_information")
*/
@property (readonly) NSDictionary<NSString *, BPMKotlinx_serialization_jsonJsonElement *> * _Nullable payerInformation __attribute__((swift_name("payerInformation")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="payment_intent")
*/
@property (readonly) NSString *paymentIntent __attribute__((swift_name("paymentIntent")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="payment_method_details")
*/
@property (readonly) PaymentMethodDetails_ * _Nullable paymentMethodDetails __attribute__((swift_name("paymentMethodDetails")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="payment_method_information")
*/
@property (readonly) PaymentMethodInformation * _Nullable paymentMethodInformation __attribute__((swift_name("paymentMethodInformation")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="payment_method_type")
*/
@property (readonly) NSString * _Nullable paymentMethodType __attribute__((swift_name("paymentMethodType")));
@property (readonly) NSString * _Nullable provider __attribute__((swift_name("provider")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="statement_description")
*/
@property (readonly) NSString * _Nullable statementDescription __attribute__((swift_name("statementDescription")));
@property (readonly) ChargeStatus *status __attribute__((swift_name("status")));
@property (readonly) NSArray<NSDictionary<NSString *, BPMKotlinx_serialization_jsonJsonElement *> *> * _Nullable transactions __attribute__((swift_name("transactions")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="updated_at")
*/
@property (readonly) NSString *updatedAt __attribute__((swift_name("updatedAt")));
@end


/**
 * Data class representing a charge in a payment intent
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Charge.Companion")))
@interface ChargeCompanion : BPMBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Data class representing a charge in a payment intent
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ChargeCompanion *shared __attribute__((swift_name("shared")));

/**
 * Data class representing a charge in a payment intent
 */
- (id<BPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Charge status enum
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface ChargeStatus : BPMKotlinEnum<ChargeStatus *>
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Charge status enum
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) ChargeStatusCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) ChargeStatus *pending __attribute__((swift_name("pending")));
@property (class, readonly) ChargeStatus *succeeded __attribute__((swift_name("succeeded")));
@property (class, readonly) ChargeStatus *failed __attribute__((swift_name("failed")));
@property (class, readonly) ChargeStatus *processing __attribute__((swift_name("processing")));
+ (BPMKotlinArray<ChargeStatus *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ChargeStatus *> *entries __attribute__((swift_name("entries")));
@end


/**
 * Charge status enum
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChargeStatus.Companion")))
@interface ChargeStatusCompanion : BPMBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Charge status enum
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ChargeStatusCompanion *shared __attribute__((swift_name("shared")));

/**
 * Charge status enum
 */
- (id<BPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));

/**
 * Charge status enum
 */
- (id<BPMKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(BPMKotlinArray<id<BPMKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * Data class representing the create payment intent payload
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface CreatePaymentIntentPayload : BPMBase
- (instancetype)initWithAmount:(double)amount customer:(Customer *)customer externalId:(NSString * _Nullable)externalId description:(NSString *)description allowedPaymentMethodTypes:(NSArray<NSString *> *)allowedPaymentMethodTypes paymentMethodDetails:(PaymentMethodDetails_ *)paymentMethodDetails confirm:(BPMBoolean * _Nullable)confirm __attribute__((swift_name("init(amount:customer:externalId:description:allowedPaymentMethodTypes:paymentMethodDetails:confirm:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CreatePaymentIntentPayloadCompanion *companion __attribute__((swift_name("companion")));
- (CreatePaymentIntentPayload *)doCopyAmount:(double)amount customer:(Customer *)customer externalId:(NSString * _Nullable)externalId description:(NSString *)description allowedPaymentMethodTypes:(NSArray<NSString *> *)allowedPaymentMethodTypes paymentMethodDetails:(PaymentMethodDetails_ *)paymentMethodDetails confirm:(BPMBoolean * _Nullable)confirm __attribute__((swift_name("doCopy(amount:customer:externalId:description:allowedPaymentMethodTypes:paymentMethodDetails:confirm:)")));

/**
 * Data class representing the create payment intent payload
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Data class representing the create payment intent payload
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Data class representing the create payment intent payload
 */
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="allowed_payment_method_types")
*/
@property (readonly) NSArray<NSString *> *allowedPaymentMethodTypes __attribute__((swift_name("allowedPaymentMethodTypes")));
@property (readonly) double amount __attribute__((swift_name("amount")));
@property (readonly) BPMBoolean * _Nullable confirm __attribute__((swift_name("confirm")));
@property (readonly) Customer *customer __attribute__((swift_name("customer")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="external_id")
*/
@property (readonly) NSString * _Nullable externalId __attribute__((swift_name("externalId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="payment_method_details")
*/
@property (readonly) PaymentMethodDetails_ *paymentMethodDetails __attribute__((swift_name("paymentMethodDetails")));
@end


/**
 * Data class representing the create payment intent payload
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreatePaymentIntentPayload.Companion")))
@interface CreatePaymentIntentPayloadCompanion : BPMBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Data class representing the create payment intent payload
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CreatePaymentIntentPayloadCompanion *shared __attribute__((swift_name("shared")));

/**
 * Data class representing the create payment intent payload
 */
- (id<BPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Open Finance Biometric PIX payment method details
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface OpenFinanceBiometricPixPaymentMethodDetails : BPMBase
- (instancetype)initWithBeneficiaryBankAccount:(NSString *)beneficiaryBankAccount enrollment:(NSString * _Nullable)enrollment __attribute__((swift_name("init(beneficiaryBankAccount:enrollment:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) OpenFinanceBiometricPixPaymentMethodDetailsCompanion *companion __attribute__((swift_name("companion")));
- (OpenFinanceBiometricPixPaymentMethodDetails *)doCopyBeneficiaryBankAccount:(NSString *)beneficiaryBankAccount enrollment:(NSString * _Nullable)enrollment __attribute__((swift_name("doCopy(beneficiaryBankAccount:enrollment:)")));

/**
 * Open Finance Biometric PIX payment method details
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Open Finance Biometric PIX payment method details
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Open Finance Biometric PIX payment method details
 */
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="beneficiary_bank_account")
*/
@property (readonly) NSString *beneficiaryBankAccount __attribute__((swift_name("beneficiaryBankAccount")));
@property (readonly) NSString * _Nullable enrollment __attribute__((swift_name("enrollment")));
@end


/**
 * Open Finance Biometric PIX payment method details
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OpenFinanceBiometricPixPaymentMethodDetails.Companion")))
@interface OpenFinanceBiometricPixPaymentMethodDetailsCompanion : BPMBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Open Finance Biometric PIX payment method details
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) OpenFinanceBiometricPixPaymentMethodDetailsCompanion *shared __attribute__((swift_name("shared")));

/**
 * Open Finance Biometric PIX payment method details
 */
- (id<BPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Open Finance Biometric PIX payment method information
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface OpenFinanceBiometricPixPaymentMethodInformation : BPMBase
- (instancetype)initWithFidoOptions:(FidoAuthenticationOptions * _Nullable)fidoOptions endToEndId:(NSString * _Nullable)endToEndId providerRequestId:(NSString * _Nullable)providerRequestId __attribute__((swift_name("init(fidoOptions:endToEndId:providerRequestId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) OpenFinanceBiometricPixPaymentMethodInformationCompanion *companion __attribute__((swift_name("companion")));
- (OpenFinanceBiometricPixPaymentMethodInformation *)doCopyFidoOptions:(FidoAuthenticationOptions * _Nullable)fidoOptions endToEndId:(NSString * _Nullable)endToEndId providerRequestId:(NSString * _Nullable)providerRequestId __attribute__((swift_name("doCopy(fidoOptions:endToEndId:providerRequestId:)")));

/**
 * Open Finance Biometric PIX payment method information
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Open Finance Biometric PIX payment method information
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Open Finance Biometric PIX payment method information
 */
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="end_to_end_id")
*/
@property (readonly) NSString * _Nullable endToEndId __attribute__((swift_name("endToEndId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="fido_options")
*/
@property (readonly) FidoAuthenticationOptions * _Nullable fidoOptions __attribute__((swift_name("fidoOptions")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="provider_request_id")
*/
@property (readonly) NSString * _Nullable providerRequestId __attribute__((swift_name("providerRequestId")));
@end


/**
 * Open Finance Biometric PIX payment method information
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OpenFinanceBiometricPixPaymentMethodInformation.Companion")))
@interface OpenFinanceBiometricPixPaymentMethodInformationCompanion : BPMBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Open Finance Biometric PIX payment method information
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) OpenFinanceBiometricPixPaymentMethodInformationCompanion *shared __attribute__((swift_name("shared")));

/**
 * Open Finance Biometric PIX payment method information
 */
- (id<BPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Data class representing a payment intent
 * Used for both create and list payment intents endpoints
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface PaymentIntent : BPMBase
- (instancetype)initWithId:(NSString *)id customer:(NSString *)customer externalId:(NSString * _Nullable)externalId createdAt:(NSString *)createdAt createdBy:(NSString *)createdBy updatedAt:(NSString *)updatedAt status:(PaymentIntentStatus *)status amount:(NSString *)amount currency:(NSString *)currency description:(NSString * _Nullable)description statementDescription:(NSString * _Nullable)statementDescription selectedPaymentMethodType:(NSString * _Nullable)selectedPaymentMethodType allowedPaymentMethodTypes:(NSArray<NSString *> * _Nullable)allowedPaymentMethodTypes paymentMethodDetails:(PaymentMethodDetails_ * _Nullable)paymentMethodDetails paymentMethodInformation:(PaymentMethodInformation * _Nullable)paymentMethodInformation metadata:(NSDictionary<NSString *, BPMKotlinx_serialization_jsonJsonElement *> * _Nullable)metadata provider:(NSString * _Nullable)provider charges:(NSArray<Charge *> * _Nullable)charges failureCode:(NSString * _Nullable)failureCode failureMessage:(NSString * _Nullable)failureMessage nextStep:(NSDictionary<NSString *, BPMKotlinx_serialization_jsonJsonElement *> * _Nullable)nextStep lastError:(NSDictionary<NSString *, BPMKotlinx_serialization_jsonJsonElement *> * _Nullable)lastError __attribute__((swift_name("init(id:customer:externalId:createdAt:createdBy:updatedAt:status:amount:currency:description:statementDescription:selectedPaymentMethodType:allowedPaymentMethodTypes:paymentMethodDetails:paymentMethodInformation:metadata:provider:charges:failureCode:failureMessage:nextStep:lastError:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentIntentCompanion *companion __attribute__((swift_name("companion")));
- (PaymentIntent *)doCopyId:(NSString *)id customer:(NSString *)customer externalId:(NSString * _Nullable)externalId createdAt:(NSString *)createdAt createdBy:(NSString *)createdBy updatedAt:(NSString *)updatedAt status:(PaymentIntentStatus *)status amount:(NSString *)amount currency:(NSString *)currency description:(NSString * _Nullable)description statementDescription:(NSString * _Nullable)statementDescription selectedPaymentMethodType:(NSString * _Nullable)selectedPaymentMethodType allowedPaymentMethodTypes:(NSArray<NSString *> * _Nullable)allowedPaymentMethodTypes paymentMethodDetails:(PaymentMethodDetails_ * _Nullable)paymentMethodDetails paymentMethodInformation:(PaymentMethodInformation * _Nullable)paymentMethodInformation metadata:(NSDictionary<NSString *, BPMKotlinx_serialization_jsonJsonElement *> * _Nullable)metadata provider:(NSString * _Nullable)provider charges:(NSArray<Charge *> * _Nullable)charges failureCode:(NSString * _Nullable)failureCode failureMessage:(NSString * _Nullable)failureMessage nextStep:(NSDictionary<NSString *, BPMKotlinx_serialization_jsonJsonElement *> * _Nullable)nextStep lastError:(NSDictionary<NSString *, BPMKotlinx_serialization_jsonJsonElement *> * _Nullable)lastError __attribute__((swift_name("doCopy(id:customer:externalId:createdAt:createdBy:updatedAt:status:amount:currency:description:statementDescription:selectedPaymentMethodType:allowedPaymentMethodTypes:paymentMethodDetails:paymentMethodInformation:metadata:provider:charges:failureCode:failureMessage:nextStep:lastError:)")));

/**
 * Data class representing a payment intent
 * Used for both create and list payment intents endpoints
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Data class representing a payment intent
 * Used for both create and list payment intents endpoints
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Data class representing a payment intent
 * Used for both create and list payment intents endpoints
 */
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="allowed_payment_method_types")
*/
@property (readonly) NSArray<NSString *> * _Nullable allowedPaymentMethodTypes __attribute__((swift_name("allowedPaymentMethodTypes")));
@property (readonly) NSString *amount __attribute__((swift_name("amount")));
@property (readonly) NSArray<Charge *> * _Nullable charges __attribute__((swift_name("charges")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="created_at")
*/
@property (readonly) NSString *createdAt __attribute__((swift_name("createdAt")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="created_by")
*/
@property (readonly) NSString *createdBy __attribute__((swift_name("createdBy")));
@property (readonly) NSString *currency __attribute__((swift_name("currency")));
@property (readonly) NSString *customer __attribute__((swift_name("customer")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="external_id")
*/
@property (readonly) NSString * _Nullable externalId __attribute__((swift_name("externalId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="failure_code")
*/
@property (readonly) NSString * _Nullable failureCode __attribute__((swift_name("failureCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="failure_message")
*/
@property (readonly) NSString * _Nullable failureMessage __attribute__((swift_name("failureMessage")));
@property (readonly) NSString *id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="last_error")
*/
@property (readonly) NSDictionary<NSString *, BPMKotlinx_serialization_jsonJsonElement *> * _Nullable lastError __attribute__((swift_name("lastError")));
@property (readonly) NSDictionary<NSString *, BPMKotlinx_serialization_jsonJsonElement *> * _Nullable metadata __attribute__((swift_name("metadata")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="next_step")
*/
@property (readonly) NSDictionary<NSString *, BPMKotlinx_serialization_jsonJsonElement *> * _Nullable nextStep __attribute__((swift_name("nextStep")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="payment_method_details")
*/
@property (readonly) PaymentMethodDetails_ * _Nullable paymentMethodDetails __attribute__((swift_name("paymentMethodDetails")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="payment_method_information")
*/
@property (readonly) PaymentMethodInformation * _Nullable paymentMethodInformation __attribute__((swift_name("paymentMethodInformation")));
@property (readonly) NSString * _Nullable provider __attribute__((swift_name("provider")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="selected_payment_method_type")
*/
@property (readonly) NSString * _Nullable selectedPaymentMethodType __attribute__((swift_name("selectedPaymentMethodType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="statement_description")
*/
@property (readonly) NSString * _Nullable statementDescription __attribute__((swift_name("statementDescription")));
@property (readonly) PaymentIntentStatus *status __attribute__((swift_name("status")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="updated_at")
*/
@property (readonly) NSString *updatedAt __attribute__((swift_name("updatedAt")));
@end


/**
 * Data class representing a payment intent
 * Used for both create and list payment intents endpoints
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentIntent.Companion")))
@interface PaymentIntentCompanion : BPMBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Data class representing a payment intent
 * Used for both create and list payment intents endpoints
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentIntentCompanion *shared __attribute__((swift_name("shared")));

/**
 * Data class representing a payment intent
 * Used for both create and list payment intents endpoints
 */
- (id<BPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * FIDO assertion for payment intent authorization
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface PaymentIntentAssertion : BPMBase
- (instancetype)initWithAuthenticatorAttachment:(NSString *)authenticatorAttachment id:(NSString *)id rawId:(NSString *)rawId response:(PaymentIntentAssertionResponse *)response type:(NSString *)type __attribute__((swift_name("init(authenticatorAttachment:id:rawId:response:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentIntentAssertionCompanion *companion __attribute__((swift_name("companion")));
- (PaymentIntentAssertion *)doCopyAuthenticatorAttachment:(NSString *)authenticatorAttachment id:(NSString *)id rawId:(NSString *)rawId response:(PaymentIntentAssertionResponse *)response type:(NSString *)type __attribute__((swift_name("doCopy(authenticatorAttachment:id:rawId:response:type:)")));

/**
 * FIDO assertion for payment intent authorization
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * FIDO assertion for payment intent authorization
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * FIDO assertion for payment intent authorization
 */
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="authenticatorAttachment")
*/
@property (readonly) NSString *authenticatorAttachment __attribute__((swift_name("authenticatorAttachment")));
@property (readonly) NSString *id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="rawId")
*/
@property (readonly) NSString *rawId __attribute__((swift_name("rawId")));
@property (readonly) PaymentIntentAssertionResponse *response __attribute__((swift_name("response")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end


/**
 * FIDO assertion for payment intent authorization
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentIntentAssertion.Companion")))
@interface PaymentIntentAssertionCompanion : BPMBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * FIDO assertion for payment intent authorization
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentIntentAssertionCompanion *shared __attribute__((swift_name("shared")));

/**
 * FIDO assertion for payment intent authorization
 */
- (id<BPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Assertion response data
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface PaymentIntentAssertionResponse : BPMBase
- (instancetype)initWithAuthenticatorData:(NSString *)authenticatorData clientDataJSON:(NSString *)clientDataJSON signature:(NSString *)signature userHandle:(NSString * _Nullable)userHandle __attribute__((swift_name("init(authenticatorData:clientDataJSON:signature:userHandle:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentIntentAssertionResponseCompanion *companion __attribute__((swift_name("companion")));
- (PaymentIntentAssertionResponse *)doCopyAuthenticatorData:(NSString *)authenticatorData clientDataJSON:(NSString *)clientDataJSON signature:(NSString *)signature userHandle:(NSString * _Nullable)userHandle __attribute__((swift_name("doCopy(authenticatorData:clientDataJSON:signature:userHandle:)")));

/**
 * Assertion response data
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Assertion response data
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Assertion response data
 */
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="authenticatorData")
*/
@property (readonly) NSString *authenticatorData __attribute__((swift_name("authenticatorData")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="clientDataJSON")
*/
@property (readonly) NSString *clientDataJSON __attribute__((swift_name("clientDataJSON")));
@property (readonly) NSString *signature __attribute__((swift_name("signature")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="userHandle")
*/
@property (readonly) NSString * _Nullable userHandle __attribute__((swift_name("userHandle")));
@end


/**
 * Assertion response data
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentIntentAssertionResponse.Companion")))
@interface PaymentIntentAssertionResponseCompanion : BPMBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Assertion response data
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentIntentAssertionResponseCompanion *shared __attribute__((swift_name("shared")));

/**
 * Assertion response data
 */
- (id<BPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Query parameters for listing payment intents
 *
 * @param page A page number within the paginated result set
 * @param pageSize Indicates how many results to return per page (1-1000, default: 100)
 * @param status Filter payment intents by status
 * @param externalId Filter payment intents by external ID
 * @param createdAfter Return payment intents created after this date (ISO 8601 format)
 * @param createdBefore Return payment intents created before this date (ISO 8601 format)
 */
__attribute__((objc_subclassing_restricted))
@interface PaymentIntentQueryParameters : BPMBase
- (instancetype)initWithPage:(BPMInt * _Nullable)page pageSize:(BPMInt * _Nullable)pageSize status:(PaymentIntentStatus * _Nullable)status externalId:(NSString * _Nullable)externalId createdAfter:(NSString * _Nullable)createdAfter createdBefore:(NSString * _Nullable)createdBefore __attribute__((swift_name("init(page:pageSize:status:externalId:createdAfter:createdBefore:)"))) __attribute__((objc_designated_initializer));
- (PaymentIntentQueryParameters *)doCopyPage:(BPMInt * _Nullable)page pageSize:(BPMInt * _Nullable)pageSize status:(PaymentIntentStatus * _Nullable)status externalId:(NSString * _Nullable)externalId createdAfter:(NSString * _Nullable)createdAfter createdBefore:(NSString * _Nullable)createdBefore __attribute__((swift_name("doCopy(page:pageSize:status:externalId:createdAfter:createdBefore:)")));

/**
 * Query parameters for listing payment intents
 *
 * @param page A page number within the paginated result set
 * @param pageSize Indicates how many results to return per page (1-1000, default: 100)
 * @param status Filter payment intents by status
 * @param externalId Filter payment intents by external ID
 * @param createdAfter Return payment intents created after this date (ISO 8601 format)
 * @param createdBefore Return payment intents created before this date (ISO 8601 format)
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Query parameters for listing payment intents
 *
 * @param page A page number within the paginated result set
 * @param pageSize Indicates how many results to return per page (1-1000, default: 100)
 * @param status Filter payment intents by status
 * @param externalId Filter payment intents by external ID
 * @param createdAfter Return payment intents created after this date (ISO 8601 format)
 * @param createdBefore Return payment intents created before this date (ISO 8601 format)
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Query parameters for listing payment intents
 *
 * @param page A page number within the paginated result set
 * @param pageSize Indicates how many results to return per page (1-1000, default: 100)
 * @param status Filter payment intents by status
 * @param externalId Filter payment intents by external ID
 * @param createdAfter Return payment intents created after this date (ISO 8601 format)
 * @param createdBefore Return payment intents created before this date (ISO 8601 format)
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable createdAfter __attribute__((swift_name("createdAfter")));
@property (readonly) NSString * _Nullable createdBefore __attribute__((swift_name("createdBefore")));
@property (readonly) NSString * _Nullable externalId __attribute__((swift_name("externalId")));
@property (readonly) BPMInt * _Nullable page __attribute__((swift_name("page")));
@property (readonly) BPMInt * _Nullable pageSize __attribute__((swift_name("pageSize")));
@property (readonly) PaymentIntentStatus * _Nullable status __attribute__((swift_name("status")));
@end


/**
 * Payment intent status enum
 * Based on Belvo API documentation - current values only
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface PaymentIntentStatus : BPMKotlinEnum<PaymentIntentStatus *>
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Payment intent status enum
 * Based on Belvo API documentation - current values only
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PaymentIntentStatusCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PaymentIntentStatus *requiresPaymentMethod __attribute__((swift_name("requiresPaymentMethod")));
@property (class, readonly) PaymentIntentStatus *requiresAction __attribute__((swift_name("requiresAction")));
@property (class, readonly) PaymentIntentStatus *succeeded __attribute__((swift_name("succeeded")));
@property (class, readonly) PaymentIntentStatus *processing __attribute__((swift_name("processing")));
@property (class, readonly) PaymentIntentStatus *failed __attribute__((swift_name("failed")));
@property (class, readonly) PaymentIntentStatus *pending __attribute__((swift_name("pending")));
+ (BPMKotlinArray<PaymentIntentStatus *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PaymentIntentStatus *> *entries __attribute__((swift_name("entries")));
@end


/**
 * Payment intent status enum
 * Based on Belvo API documentation - current values only
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentIntentStatus.Companion")))
@interface PaymentIntentStatusCompanion : BPMBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Payment intent status enum
 * Based on Belvo API documentation - current values only
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentIntentStatusCompanion *shared __attribute__((swift_name("shared")));

/**
 * Payment intent status enum
 * Based on Belvo API documentation - current values only
 */
- (id<BPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));

/**
 * Payment intent status enum
 * Based on Belvo API documentation - current values only
 */
- (id<BPMKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(BPMKotlinArray<id<BPMKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * Payment method details
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface PaymentMethodDetails_ : BPMBase
- (instancetype)initWithOpenFinanceBiometricPix:(OpenFinanceBiometricPixPaymentMethodDetails * _Nullable)openFinanceBiometricPix __attribute__((swift_name("init(openFinanceBiometricPix:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentMethodDetails_Companion *companion __attribute__((swift_name("companion")));
- (PaymentMethodDetails_ *)doCopyOpenFinanceBiometricPix:(OpenFinanceBiometricPixPaymentMethodDetails * _Nullable)openFinanceBiometricPix __attribute__((swift_name("doCopy(openFinanceBiometricPix:)")));

/**
 * Payment method details
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Payment method details
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Payment method details
 */
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="open_finance_biometric_pix")
*/
@property (readonly) OpenFinanceBiometricPixPaymentMethodDetails * _Nullable openFinanceBiometricPix __attribute__((swift_name("openFinanceBiometricPix")));
@end


/**
 * Payment method details
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentMethodDetails_.Companion")))
@interface PaymentMethodDetails_Companion : BPMBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Payment method details
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentMethodDetails_Companion *shared __attribute__((swift_name("shared")));

/**
 * Payment method details
 */
- (id<BPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Payment method information
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface PaymentMethodInformation : BPMBase
- (instancetype)initWithOpenFinanceBiometricPix:(OpenFinanceBiometricPixPaymentMethodInformation * _Nullable)openFinanceBiometricPix __attribute__((swift_name("init(openFinanceBiometricPix:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentMethodInformationCompanion *companion __attribute__((swift_name("companion")));
- (PaymentMethodInformation *)doCopyOpenFinanceBiometricPix:(OpenFinanceBiometricPixPaymentMethodInformation * _Nullable)openFinanceBiometricPix __attribute__((swift_name("doCopy(openFinanceBiometricPix:)")));

/**
 * Payment method information
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Payment method information
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Payment method information
 */
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="open_finance_biometric_pix")
*/
@property (readonly) OpenFinanceBiometricPixPaymentMethodInformation * _Nullable openFinanceBiometricPix __attribute__((swift_name("openFinanceBiometricPix")));
@end


/**
 * Payment method information
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentMethodInformation.Companion")))
@interface PaymentMethodInformationCompanion : BPMBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Payment method information
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentMethodInformationCompanion *shared __attribute__((swift_name("shared")));

/**
 * Payment method information
 */
- (id<BPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Utility object for JSON parsing operations
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonParser")))
@interface BPMJsonParser : BPMBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Utility object for JSON parsing operations
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)jsonParser __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BPMJsonParser *shared __attribute__((swift_name("shared")));

/**
 * Generic function to serialize any serializable data class to JSON string
 *
 * @param T The type to serialize (must be @Serializable)
 * @param value The object to serialize
 * @return JSON string representation
 * @throws kotlinx.serialization.SerializationException if serialization fails
 *
 * Usage example:
 * ```
 * val jsonString = JsonParser.encodeToString(fidoOptions)
 * ```
 */
- (NSString *)encodeToStringValue:(id _Nullable)value __attribute__((swift_name("encodeToString(value:)")));

/**
 * Generic function to parse a JSON string into any serializable data class
 *
 * @param T The type to deserialize to (must be @Serializable)
 * @param jsonString The JSON string to parse
 * @return Object of type T
 * @throws kotlinx.serialization.SerializationException if parsing fails
 *
 * Usage example:
 * ```
 * val options = JsonParser.parse<FidoRegistrationOptions>(jsonString)
 * val user = JsonParser.parse<User>(userJsonString)
 * ```
 */
- (id _Nullable)parseJsonString:(NSString *)jsonString __attribute__((swift_name("parse(jsonString:)")));

/**
 * JSON configuration for parsing
 * - ignoreUnknownKeys: Ignores JSON fields that don't exist in the data class
 * - isLenient: Allows relaxed JSON parsing
 */
@property (readonly) BPMKotlinx_serialization_jsonJson *json __attribute__((swift_name("json")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol BPMKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<BPMKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<BPMKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol BPMKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<BPMKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<BPMKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol BPMKotlinx_serialization_coreKSerializer <BPMKotlinx_serialization_coreSerializationStrategy, BPMKotlinx_serialization_coreDeserializationStrategy>
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/serialization/json/JsonElementSerializer))
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface BPMKotlinx_serialization_jsonJsonElement : BPMBase
@property (class, readonly, getter=companion) BPMKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface BPMKotlinEnumCompanion : BPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BPMKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface BPMKotlinArray<T> : BPMBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(BPMInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<BPMKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialFormat")))
@protocol BPMKotlinx_serialization_coreSerialFormat
@required
@property (readonly) BPMKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreStringFormat")))
@protocol BPMKotlinx_serialization_coreStringFormat <BPMKotlinx_serialization_coreSerialFormat>
@required
- (id _Nullable)decodeFromStringDeserializer:(id<BPMKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (NSString *)encodeToStringSerializer:(id<BPMKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_jsonJson")))
@interface BPMKotlinx_serialization_jsonJson : BPMBase <BPMKotlinx_serialization_coreStringFormat>
@property (class, readonly, getter=companion) BPMKotlinx_serialization_jsonJsonDefault *companion __attribute__((swift_name("companion")));
- (id _Nullable)decodeFromJsonElementDeserializer:(id<BPMKotlinx_serialization_coreDeserializationStrategy>)deserializer element:(BPMKotlinx_serialization_jsonJsonElement *)element __attribute__((swift_name("decodeFromJsonElement(deserializer:element:)")));
- (id _Nullable)decodeFromStringString:(NSString *)string __attribute__((swift_name("decodeFromString(string:)")));
- (id _Nullable)decodeFromStringDeserializer:(id<BPMKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (BPMKotlinx_serialization_jsonJsonElement *)encodeToJsonElementSerializer:(id<BPMKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToJsonElement(serializer:value:)")));
- (NSString *)encodeToStringValue:(id _Nullable)value __attribute__((swift_name("encodeToString(value:)")));
- (NSString *)encodeToStringSerializer:(id<BPMKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
- (BPMKotlinx_serialization_jsonJsonElement *)parseToJsonElementString:(NSString *)string __attribute__((swift_name("parseToJsonElement(string:)")));
@property (readonly) BPMKotlinx_serialization_jsonJsonConfiguration *configuration __attribute__((swift_name("configuration")));
@property (readonly) BPMKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol BPMKotlinx_serialization_coreEncoder
@required
- (id<BPMKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<BPMKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<BPMKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<BPMKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<BPMKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<BPMKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<BPMKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
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
- (void)encodeNullableSerializableValueSerializer:(id<BPMKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<BPMKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) BPMKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol BPMKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<BPMKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<BPMKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<BPMKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) BPMKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol BPMKotlinx_serialization_coreDecoder
@required
- (id<BPMKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<BPMKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<BPMKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<BPMKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<BPMKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
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
- (BPMKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<BPMKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<BPMKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) BPMKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement.Companion")))
@interface BPMKotlinx_serialization_jsonJsonElementCompanion : BPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BPMKotlinx_serialization_jsonJsonElementCompanion *shared __attribute__((swift_name("shared")));
- (id<BPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol BPMKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface BPMKotlinx_serialization_coreSerializersModule : BPMBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<BPMKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<BPMKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<BPMKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<BPMKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<BPMKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<BPMKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<BPMKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<BPMKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJson.Default")))
@interface BPMKotlinx_serialization_jsonJsonDefault : BPMKotlinx_serialization_jsonJson
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)default_ __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BPMKotlinx_serialization_jsonJsonDefault *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonConfiguration")))
@interface BPMKotlinx_serialization_jsonJsonConfiguration : BPMBase
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
@property BPMKotlinx_serialization_jsonClassDiscriminatorMode *classDiscriminatorMode __attribute__((swift_name("classDiscriminatorMode")));
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
@property (readonly) id<BPMKotlinx_serialization_jsonJsonNamingStrategy> _Nullable namingStrategy __attribute__((swift_name("namingStrategy")));
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
@protocol BPMKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<BPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<BPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<BPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<BPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<BPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<BPMKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<BPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<BPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<BPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<BPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<BPMKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<BPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<BPMKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<BPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<BPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<BPMKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<BPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) BPMKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol BPMKotlinAnnotation
@required
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface BPMKotlinx_serialization_coreSerialKind : BPMBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol BPMKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<BPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<BPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<BPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<BPMKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<BPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<BPMKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<BPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<BPMKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<BPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<BPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<BPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<BPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<BPMKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<BPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<BPMKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<BPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<BPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<BPMKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) BPMKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface BPMKotlinNothing : BPMBase
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol BPMKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<BPMKotlinKClass>)kClass provider:(id<BPMKotlinx_serialization_coreKSerializer> (^)(NSArray<id<BPMKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<BPMKotlinKClass>)kClass serializer:(id<BPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<BPMKotlinKClass>)baseClass actualClass:(id<BPMKotlinKClass>)actualClass actualSerializer:(id<BPMKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<BPMKotlinKClass>)baseClass defaultDeserializerProvider:(id<BPMKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<BPMKotlinKClass>)baseClass defaultDeserializerProvider:(id<BPMKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<BPMKotlinKClass>)baseClass defaultSerializerProvider:(id<BPMKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol BPMKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol BPMKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol BPMKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol BPMKotlinKClass <BPMKotlinKDeclarationContainer, BPMKotlinKAnnotatedElement, BPMKotlinKClassifier>
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
__attribute__((swift_name("Kotlinx_serialization_jsonClassDiscriminatorMode")))
@interface BPMKotlinx_serialization_jsonClassDiscriminatorMode : BPMKotlinEnum<BPMKotlinx_serialization_jsonClassDiscriminatorMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) BPMKotlinx_serialization_jsonClassDiscriminatorMode *none __attribute__((swift_name("none")));
@property (class, readonly) BPMKotlinx_serialization_jsonClassDiscriminatorMode *allJsonObjects __attribute__((swift_name("allJsonObjects")));
@property (class, readonly) BPMKotlinx_serialization_jsonClassDiscriminatorMode *polymorphic __attribute__((swift_name("polymorphic")));
+ (BPMKotlinArray<BPMKotlinx_serialization_jsonClassDiscriminatorMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<BPMKotlinx_serialization_jsonClassDiscriminatorMode *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonNamingStrategy")))
@protocol BPMKotlinx_serialization_jsonJsonNamingStrategy
@required
- (NSString *)serialNameForJsonDescriptor:(id<BPMKotlinx_serialization_coreSerialDescriptor>)descriptor elementIndex:(int32_t)elementIndex serialName:(NSString *)serialName __attribute__((swift_name("serialNameForJson(descriptor:elementIndex:serialName:)")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
