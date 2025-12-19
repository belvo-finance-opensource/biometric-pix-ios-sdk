#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class AssertionResponse, AttestationResponse, AuthenticatorSelection, AuthenticatorSelectionCompanion, AuthorizePaymentIntentPayload, AuthorizePaymentIntentPayloadCompanion, BPSDKBankAccountService, BPSDKBelvoApiExceptionCompanion, BPSDKBiometricPixSDKBase, BPSDKCustomerService, BPSDKDDActions, BPSDKDatadogLogger, BPSDKEnrollmentService, BPSDKEnrollmentServiceCompanion, BPSDKInstitutionService, BPSDKKotlinAbstractCoroutineContextElement, BPSDKKotlinAbstractCoroutineContextKey<B, E>, BPSDKKotlinArray<T>, BPSDKKotlinByteArray, BPSDKKotlinByteIterator, BPSDKKotlinCancellationException, BPSDKKotlinEnum<E>, BPSDKKotlinEnumCompanion, BPSDKKotlinException, BPSDKKotlinIllegalStateException, BPSDKKotlinKTypeProjection, BPSDKKotlinKTypeProjectionCompanion, BPSDKKotlinKVariance, BPSDKKotlinNothing, BPSDKKotlinRuntimeException, BPSDKKotlinThrowable, BPSDKKotlinUnit, BPSDKKotlinx_coroutines_coreCoroutineDispatcher, BPSDKKotlinx_coroutines_coreCoroutineDispatcherKey, BPSDKKotlinx_io_coreBuffer, BPSDKKotlinx_serialization_coreSerialKind, BPSDKKotlinx_serialization_coreSerializersModule, BPSDKKotlinx_serialization_jsonJsonElement, BPSDKKotlinx_serialization_jsonJsonElementCompanion, BPSDKKtor_client_coreHttpClient, BPSDKKtor_client_coreHttpClientCall, BPSDKKtor_client_coreHttpClientCallCompanion, BPSDKKtor_client_coreHttpClientConfig<T>, BPSDKKtor_client_coreHttpClientEngineConfig, BPSDKKtor_client_coreHttpReceivePipeline, BPSDKKtor_client_coreHttpReceivePipelinePhases, BPSDKKtor_client_coreHttpRequestBuilder, BPSDKKtor_client_coreHttpRequestBuilderCompanion, BPSDKKtor_client_coreHttpRequestData, BPSDKKtor_client_coreHttpRequestPipeline, BPSDKKtor_client_coreHttpRequestPipelinePhases, BPSDKKtor_client_coreHttpResponse, BPSDKKtor_client_coreHttpResponseContainer, BPSDKKtor_client_coreHttpResponseData, BPSDKKtor_client_coreHttpResponsePipeline, BPSDKKtor_client_coreHttpResponsePipelinePhases, BPSDKKtor_client_coreHttpSendPipeline, BPSDKKtor_client_coreHttpSendPipelinePhases, BPSDKKtor_client_coreProxyConfig, BPSDKKtor_eventsEventDefinition<T>, BPSDKKtor_eventsEvents, BPSDKKtor_httpContentType, BPSDKKtor_httpContentTypeCompanion, BPSDKKtor_httpHeaderValueParam, BPSDKKtor_httpHeaderValueWithParameters, BPSDKKtor_httpHeaderValueWithParametersCompanion, BPSDKKtor_httpHeadersBuilder, BPSDKKtor_httpHttpMethod, BPSDKKtor_httpHttpMethodCompanion, BPSDKKtor_httpHttpProtocolVersion, BPSDKKtor_httpHttpProtocolVersionCompanion, BPSDKKtor_httpHttpStatusCode, BPSDKKtor_httpHttpStatusCodeCompanion, BPSDKKtor_httpOutgoingContent, BPSDKKtor_httpURLBuilder, BPSDKKtor_httpURLBuilderCompanion, BPSDKKtor_httpURLProtocol, BPSDKKtor_httpURLProtocolCompanion, BPSDKKtor_httpUrl, BPSDKKtor_httpUrlCompanion, BPSDKKtor_utilsAttributeKey<T>, BPSDKKtor_utilsGMTDate, BPSDKKtor_utilsGMTDateCompanion, BPSDKKtor_utilsMonth, BPSDKKtor_utilsMonthCompanion, BPSDKKtor_utilsPipeline<TSubject, TContext>, BPSDKKtor_utilsPipelinePhase, BPSDKKtor_utilsStringValuesBuilderImpl, BPSDKKtor_utilsTypeInfo, BPSDKKtor_utilsWeekDay, BPSDKKtor_utilsWeekDayCompanion, BPSDKPaymentIntentService, BPSDKPaymentIntentServiceCompanion, BPSDKServices, BPSDKServicesBase, BPSDKTokenRepository, BankAccount, BankAccountCompanion, BelvoApiErrorItem, BelvoApiErrorItemCompanion, Charge, ChargeCompanion, ChargeStatus, ChargeStatusCompanion, CompleteEnrollmentPayload, CompleteEnrollmentPayloadCompanion, ConfirmationData, ConfirmationDataCompanion, ConfirmationResponse, ConfirmationResponseCompanion, CreatePaymentIntentPayload, CreatePaymentIntentPayloadCompanion, Customer, CustomerCompanion, Enrollment, EnrollmentConfirmationPayload, EnrollmentConfirmationPayloadCompanion, EnrollmentDetailsStatus, EnrollmentDetailsStatusCompanion, EnrollmentPayload, EnrollmentPayloadCompanion, EnrollmentPayloadDetails, EnrollmentPayloadDetailsCompanion, EnrollmentResponse, EnrollmentResponseCompanion, EnrollmentResponseDetails, EnrollmentResponseDetailsCompanion, EnrollmentStatus, EnrollmentStatusCompanion, EnrollmentStatusReasonCode, EnrollmentStatusReasonCodeCompanion, ExcludeCredential, ExcludeCredentialCompanion, FidoAuthenticationOptions, FidoAuthenticationOptionsCompanion, FidoRegistrationOptions, FidoRegistrationOptionsCompanion, Geolocation, GeolocationCompanion, Institution, InstitutionCompanion, InstitutionQueryParameters, InstitutionQueryParametersInstitutionType, Integrity, IntegrityCompanion, NSData, OpenFinanceBiometricPixPaymentMethodDetails, OpenFinanceBiometricPixPaymentMethodDetailsCompanion, OpenFinanceBiometricPixPaymentMethodInformation, OpenFinanceBiometricPixPaymentMethodInformationCompanion, PaginatedResponse<T>, PaginatedResponseCompanion, PaymentIntent, PaymentIntentAssertion, PaymentIntentAssertionCompanion, PaymentIntentAssertionResponse, PaymentIntentAssertionResponseCompanion, PaymentIntentCompanion, PaymentIntentQueryParameters, PaymentIntentStatus, PaymentIntentStatusCompanion, PaymentMethodDetails, PaymentMethodDetailsCompanion, PaymentMethodInformation, PaymentMethodInformationCompanion, PaymentMethodStatus, PaymentMethodStatusCompanion, PublicKeyCredentialParameters, PublicKeyCredentialParametersCompanion, RelyingParty, RelyingPartyCompanion, RiskSignals, RiskSignalsCompanion, ScreenDimensions, ScreenDimensionsCompanion, SdkPublicKeyCredentialDescriptor, SdkPublicKeyCredentialDescriptorCompanion, User, UserCompanion;

@protocol BPSDKKotlinAnnotation, BPSDKKotlinAutoCloseable, BPSDKKotlinComparable, BPSDKKotlinContinuation, BPSDKKotlinContinuationInterceptor, BPSDKKotlinCoroutineContext, BPSDKKotlinCoroutineContextElement, BPSDKKotlinCoroutineContextKey, BPSDKKotlinFunction, BPSDKKotlinIterator, BPSDKKotlinKAnnotatedElement, BPSDKKotlinKClass, BPSDKKotlinKClassifier, BPSDKKotlinKDeclarationContainer, BPSDKKotlinKType, BPSDKKotlinMapEntry, BPSDKKotlinSequence, BPSDKKotlinSuspendFunction1, BPSDKKotlinSuspendFunction2, BPSDKKotlinx_coroutines_coreChildHandle, BPSDKKotlinx_coroutines_coreChildJob, BPSDKKotlinx_coroutines_coreCompletableJob, BPSDKKotlinx_coroutines_coreCoroutineScope, BPSDKKotlinx_coroutines_coreDisposableHandle, BPSDKKotlinx_coroutines_coreJob, BPSDKKotlinx_coroutines_coreParentJob, BPSDKKotlinx_coroutines_coreRunnable, BPSDKKotlinx_coroutines_coreSelectClause, BPSDKKotlinx_coroutines_coreSelectClause0, BPSDKKotlinx_coroutines_coreSelectInstance, BPSDKKotlinx_io_coreRawSink, BPSDKKotlinx_io_coreRawSource, BPSDKKotlinx_io_coreSink, BPSDKKotlinx_io_coreSource, BPSDKKotlinx_serialization_coreCompositeDecoder, BPSDKKotlinx_serialization_coreCompositeEncoder, BPSDKKotlinx_serialization_coreDecoder, BPSDKKotlinx_serialization_coreDeserializationStrategy, BPSDKKotlinx_serialization_coreEncoder, BPSDKKotlinx_serialization_coreKSerializer, BPSDKKotlinx_serialization_coreSerialDescriptor, BPSDKKotlinx_serialization_coreSerializationStrategy, BPSDKKotlinx_serialization_coreSerializersModuleCollector, BPSDKKtor_client_coreHttpClientEngine, BPSDKKtor_client_coreHttpClientEngineCapability, BPSDKKtor_client_coreHttpClientPlugin, BPSDKKtor_client_coreHttpRequest, BPSDKKtor_httpHeaders, BPSDKKtor_httpHttpMessage, BPSDKKtor_httpHttpMessageBuilder, BPSDKKtor_httpParameters, BPSDKKtor_httpParametersBuilder, BPSDKKtor_ioByteReadChannel, BPSDKKtor_ioCloseable, BPSDKKtor_ioJvmSerializable, BPSDKKtor_utilsAttributes, BPSDKKtor_utilsStringValues, BPSDKKtor_utilsStringValuesBuilder, FidoAuthenticationCallback, FidoRegistrationCallback;

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


/**
 * Abstract base class for BiometricPixSDK implementations
 *
 * Platform-specific implementations should extend this class and implement the abstract methods.
 *
 * @param accessToken The access token for the BiometricPixSDK
 * @param context The context for the BiometricPixSDK
 */
__attribute__((swift_name("BiometricPixSDKBase")))
@interface BPSDKBiometricPixSDKBase : BPSDKBase
- (instancetype)initWithAccessToken:(NSString *)accessToken context:(id _Nullable)context __attribute__((swift_name("init(accessToken:context:)"))) __attribute__((objc_designated_initializer));

/**
 * Authorizes a payment intent with risk signals and biometric assertion
 *
 * @param paymentIntentId The payment intent identifier
 * @param payload The authorization payload containing risk signals and assertion
 * @return true if authorization was successful
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)authorizePaymentIntentPaymentIntentId:(NSString *)paymentIntentId payload:(AuthorizePaymentIntentPayload *)payload completionHandler:(void (^)(BPSDKBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("authorizePaymentIntent(paymentIntentId:payload:completionHandler:)")));
- (RiskSignals *)collectRiskSignalsAccountTenure:(NSString *)accountTenure __attribute__((swift_name("collectRiskSignals(accountTenure:)")));

/**
 * Completes an enrollment after redirection
 * Parses the callback URL to extract state, code, and id_token parameters
 *
 * @param callbackUrl The callback URL received from the redirect, containing query parameters
 * @return The enrollment response
 * @throws IllegalArgumentException if required parameters (state, code, id_token) are missing from the URL
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)completeEnrollmentAfterRedirectionCallbackUrl:(NSString *)callbackUrl completionHandler:(void (^)(EnrollmentResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("completeEnrollmentAfterRedirection(callbackUrl:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)completeEnrollmentAfterRedirectionState:(NSString *)state code:(NSString *)code idToken:(NSString *)idToken completionHandler:(void (^)(EnrollmentResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("completeEnrollmentAfterRedirection(state:code:idToken:completionHandler:)")));

/**
 * Creates an enrollment using the enrollment service
 *
 * @param institution The institution identifier
 * @param accountTenure Customer account creation date in ISO format (YYYY-MM-DD)
 * @return The enrollment response
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)createEnrollmentCpf:(NSString *)cpf institution:(NSString *)institution accountTenure:(NSString *)accountTenure callbackUrl:(NSString *)callbackUrl completionHandler:(void (^)(EnrollmentResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("createEnrollment(cpf:institution:accountTenure:callbackUrl:completionHandler:)")));

/**
 * Creates a new payment intent
 *
 * @param payload The payment intent creation payload
 * @return The created payment intent
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)createPaymentIntentPayload:(CreatePaymentIntentPayload *)payload completionHandler:(void (^)(PaymentIntent * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("createPaymentIntent(payload:completionHandler:)")));

/**
 * Platform-specific DatadogLogger initialization
 * Implement this method in platform-specific classes
 *
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id _Nullable)getApplicationContextContext:(id _Nullable)context __attribute__((swift_name("getApplicationContext(context:)")));

/**
 * Gets a specific bank account by ID
 *
 * @param bankAccountId The bank account identifier
 * @return The bank account details
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getBankAccountBankAccountId:(NSString *)bankAccountId completionHandler:(void (^)(BankAccount * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getBankAccount(bankAccountId:completionHandler:)")));

/**
 * Gets detailed customer information
 *
 * @param customerId The customer identifier
 * @return Detailed customer information
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getCustomerDetailsCustomerId:(NSString *)customerId completionHandler:(void (^)(Customer * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getCustomerDetails(customerId:completionHandler:)")));

/**
 * Gets details about a specific enrollment
 *
 * @param enrollmentId The enrollment identifier
 * @return The enrollment response
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getEnrollmentEnrollmentId:(NSString *)enrollmentId completionHandler:(void (^)(EnrollmentResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getEnrollment(enrollmentId:completionHandler:)")));

/**
 * Gets FIDO registration options for an enrollment using polling
 * Polls the API until the registration options are ready (challenge is available)
 *
 * @param enrollmentId The enrollment identifier
 * @return The FIDO registration options, or null if polling fails or times out
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getFidoRegistrationOptionsEnrollmentId:(NSString *)enrollmentId completionHandler:(void (^)(FidoRegistrationOptions * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getFidoRegistrationOptions(enrollmentId:completionHandler:)")));

/**
 * Gets all payment institutions
 *
 * @param queryParameters Optional query parameters for filtering and pagination
 * @return List of payment institutions
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPaymentInstitutionsQueryParameters:(InstitutionQueryParameters * _Nullable)queryParameters completionHandler:(void (^)(NSArray<Institution *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPaymentInstitutions(queryParameters:completionHandler:)")));

/**
 * Gets a specific payment intent by ID
 *
 * @param paymentIntentId The payment intent identifier
 * @return The payment intent details
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPaymentIntentPaymentIntentId:(NSString *)paymentIntentId completionHandler:(void (^)(PaymentIntent * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPaymentIntent(paymentIntentId:completionHandler:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)initializeRepositories __attribute__((swift_name("initializeRepositories()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)initializeServices __attribute__((swift_name("initializeServices()")));

/**
 * Lists all bank accounts
 *
 * @return List of bank accounts
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)listBankAccountsWithCompletionHandler:(void (^)(NSArray<BankAccount *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("listBankAccounts(completionHandler:)")));

/**
 * Lists all enrollments
 *
 * @return List of enrollments with full institution details
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)listEnrollmentsDeviceId:(NSString *)deviceId completionHandler:(void (^)(NSArray<Enrollment *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("listEnrollments(deviceId:completionHandler:)")));

/**
 * Lists all payment intents
 *
 * @param queryParameters Optional query parameters for filtering and pagination
 * @return List of payment intents
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)listPaymentIntentsQueryParameters:(PaymentIntentQueryParameters * _Nullable)queryParameters completionHandler:(void (^)(NSArray<PaymentIntent *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("listPaymentIntents(queryParameters:completionHandler:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) id<BPSDKKotlinx_coroutines_coreCoroutineScope> coroutineScope __attribute__((swift_name("coroutineScope")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property BPSDKServices *services __attribute__((swift_name("services")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) id<BPSDKKotlinx_coroutines_coreCompletableJob> supervisorJob __attribute__((swift_name("supervisorJob")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BPSDKTokenRepository *tokenRepository __attribute__((swift_name("tokenRepository")));
@end


/**
 * iOS implementation of BiometricPixSDK
 *
 * @param accessToken The access token for the BiometricPixSDK
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BiometricPixSDK")))
@interface BPSDKBiometricPixSDK : BPSDKBiometricPixSDKBase
- (instancetype)initWithAccessToken:(NSString *)accessToken __attribute__((swift_name("init(accessToken:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAccessToken:(NSString *)accessToken context:(id _Nullable)context __attribute__((swift_name("init(accessToken:context:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * Clean up resources to prevent memory leaks
 */
- (void)cleanup __attribute__((swift_name("cleanup()")));

/**
 * iOS implementation of risk signals collection
 */
- (RiskSignals *)collectRiskSignalsAccountTenure:(NSString *)accountTenure __attribute__((swift_name("collectRiskSignals(accountTenure:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id _Nullable)getApplicationContextContext:(id _Nullable)context __attribute__((swift_name("getApplicationContext(context:)")));

/**
 * Method to get the device ID
 * This method returns a unique identifier for the device
 *
 * @return The device ID string (SHA3-256 hashed vendor identifier)
 */
- (NSString *)getDeviceId __attribute__((swift_name("getDeviceId()")));

/**
 * iOS implementation for permission request
 */
- (void)requestPermissionOnResult:(void (^)(BPSDKBoolean *))onResult __attribute__((swift_name("requestPermission(onResult:)")));

/**
 * iOS implementation of FIDO registration
 * Uses iOS AuthenticationServices framework via FidoRepository
 */
- (void)startRegistrationFidoResponseString:(NSString *)fidoResponseString callback:(id<FidoRegistrationCallback>)callback __attribute__((swift_name("startRegistration(fidoResponseString:callback:)")));

/**
 * iOS implementation of FIDO authentication
 * Uses iOS AuthenticationServices framework via FidoRepository
 */
- (void)startSigningFidoResponseString:(NSString *)fidoResponseString fallbackCredential:(NSString * _Nullable)fallbackCredential callback:(id<FidoAuthenticationCallback>)callback __attribute__((swift_name("startSigning(fidoResponseString:fallbackCredential:callback:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DDActions")))
@interface BPSDKDDActions : BPSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)dDActions __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BPSDKDDActions *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *COLLECT_RISK_SIGNALS __attribute__((swift_name("COLLECT_RISK_SIGNALS")));
@property (readonly) NSString *COMPLETE_ENROLLMENT_AFTER_REDIRECTION_ERROR __attribute__((swift_name("COMPLETE_ENROLLMENT_AFTER_REDIRECTION_ERROR")));
@property (readonly) NSString *COMPLETE_ENROLLMENT_AFTER_REDIRECTION_SUCCESS __attribute__((swift_name("COMPLETE_ENROLLMENT_AFTER_REDIRECTION_SUCCESS")));
@property (readonly) NSString *COMPLETE_ENROLLMENT_AFTER_REDIRECTION_TENTATIVE __attribute__((swift_name("COMPLETE_ENROLLMENT_AFTER_REDIRECTION_TENTATIVE")));
@property (readonly) NSString *ENROLLMENT_CONFIRMATION_ERROR __attribute__((swift_name("ENROLLMENT_CONFIRMATION_ERROR")));
@property (readonly) NSString *ENROLLMENT_CONFIRMATION_SUCCESS __attribute__((swift_name("ENROLLMENT_CONFIRMATION_SUCCESS")));
@property (readonly) NSString *ENROLLMENT_CONFIRMATION_TENTATIVE __attribute__((swift_name("ENROLLMENT_CONFIRMATION_TENTATIVE")));
@property (readonly) NSString *ENROLLMENT_CREATION_ERROR __attribute__((swift_name("ENROLLMENT_CREATION_ERROR")));
@property (readonly) NSString *ENROLLMENT_CREATION_SUCCESS __attribute__((swift_name("ENROLLMENT_CREATION_SUCCESS")));
@property (readonly) NSString *ENROLLMENT_CREATION_TENTATIVE __attribute__((swift_name("ENROLLMENT_CREATION_TENTATIVE")));
@property (readonly) NSString *ENROLLMENT_REDIRECTION_ACTION_ERROR __attribute__((swift_name("ENROLLMENT_REDIRECTION_ACTION_ERROR")));
@property (readonly) NSString *ENROLLMENT_REDIRECTION_ACTION_SUCCESS __attribute__((swift_name("ENROLLMENT_REDIRECTION_ACTION_SUCCESS")));
@property (readonly) NSString *ENROLLMENT_REDIRECTION_ACTION_TENTATIVE __attribute__((swift_name("ENROLLMENT_REDIRECTION_ACTION_TENTATIVE")));
@property (readonly) NSString *FIDO_REGISTRATION_ERROR __attribute__((swift_name("FIDO_REGISTRATION_ERROR")));
@property (readonly) NSString *FIDO_REGISTRATION_FAILED __attribute__((swift_name("FIDO_REGISTRATION_FAILED")));
@property (readonly) NSString *FIDO_REGISTRATION_SUCCESS __attribute__((swift_name("FIDO_REGISTRATION_SUCCESS")));
@property (readonly) NSString *FIDO_SIGNING_ERROR __attribute__((swift_name("FIDO_SIGNING_ERROR")));
@property (readonly) NSString *FIDO_SIGNING_FAILED __attribute__((swift_name("FIDO_SIGNING_FAILED")));
@property (readonly) NSString *FIDO_SIGNING_SUCCESS __attribute__((swift_name("FIDO_SIGNING_SUCCESS")));
@property (readonly) NSString *GET_FIDO_OPTIONS_ERROR __attribute__((swift_name("GET_FIDO_OPTIONS_ERROR")));
@property (readonly) NSString *GET_FIDO_OPTIONS_SUCCESS __attribute__((swift_name("GET_FIDO_OPTIONS_SUCCESS")));
@property (readonly) NSString *GET_FIDO_OPTIONS_TENTATIVE __attribute__((swift_name("GET_FIDO_OPTIONS_TENTATIVE")));
@property (readonly) NSString *PAYMENT_AUTHORIZE_ERROR __attribute__((swift_name("PAYMENT_AUTHORIZE_ERROR")));
@property (readonly) NSString *PAYMENT_AUTHORIZE_SUCCESS __attribute__((swift_name("PAYMENT_AUTHORIZE_SUCCESS")));
@property (readonly) NSString *PAYMENT_AUTHORIZE_TENTATIVE __attribute__((swift_name("PAYMENT_AUTHORIZE_TENTATIVE")));
@property (readonly) NSString *PAYMENT_INTENT_CREATION_ERROR __attribute__((swift_name("PAYMENT_INTENT_CREATION_ERROR")));
@property (readonly) NSString *PAYMENT_INTENT_CREATION_SUCCESS __attribute__((swift_name("PAYMENT_INTENT_CREATION_SUCCESS")));
@property (readonly) NSString *PAYMENT_INTENT_CREATION_TENTATIVE __attribute__((swift_name("PAYMENT_INTENT_CREATION_TENTATIVE")));
@property (readonly) NSString *PAYMENT_POLLING_ERROR __attribute__((swift_name("PAYMENT_POLLING_ERROR")));
@property (readonly) NSString *PAYMENT_POLLING_SUCCESS __attribute__((swift_name("PAYMENT_POLLING_SUCCESS")));
@property (readonly) NSString *PAYMENT_POLLING_TENTATIVE __attribute__((swift_name("PAYMENT_POLLING_TENTATIVE")));
@property (readonly) NSString *PROCESSING_FIDO_REGISTRATION __attribute__((swift_name("PROCESSING_FIDO_REGISTRATION")));
@property (readonly) NSString *PROCESSING_FIDO_SIGNING __attribute__((swift_name("PROCESSING_FIDO_SIGNING")));
@property (readonly) NSString *RISK_SIGNALS_COLLECTION_ERROR __attribute__((swift_name("RISK_SIGNALS_COLLECTION_ERROR")));
@property (readonly) NSString *RISK_SIGNALS_COLLECTION_SUCCESS __attribute__((swift_name("RISK_SIGNALS_COLLECTION_SUCCESS")));
@property (readonly) NSString *START_FIDO_REGISTRATION __attribute__((swift_name("START_FIDO_REGISTRATION")));
@property (readonly) NSString *START_FIDO_SIGNING __attribute__((swift_name("START_FIDO_SIGNING")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface BPSDKKotlinThrowable : BPSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(BPSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(BPSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (BPSDKKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BPSDKKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface BPSDKKotlinException : BPSDKKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(BPSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(BPSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * Exception thrown when an API request fails
 *
 * @param statusCode The HTTP status code
 * @param errors List of error items from the API response
 * @param message Optional custom error message
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BelvoApiException")))
@interface BPSDKBelvoApiException : BPSDKKotlinException
- (instancetype)initWithStatusCode:(int32_t)statusCode errors:(NSArray<BelvoApiErrorItem *> *)errors message:(NSString * _Nullable)message __attribute__((swift_name("init(statusCode:errors:message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(BPSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(BPSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) BPSDKBelvoApiExceptionCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSArray<BelvoApiErrorItem *> *errors __attribute__((swift_name("errors")));
@property (readonly) int32_t statusCode __attribute__((swift_name("statusCode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BelvoApiException.Companion")))
@interface BPSDKBelvoApiExceptionCompanion : BPSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BPSDKBelvoApiExceptionCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TokenRepository")))
@interface BPSDKTokenRepository : BPSDKBase
- (instancetype)initWithAccessToken:(NSString *)accessToken __attribute__((swift_name("init(accessToken:)"))) __attribute__((objc_designated_initializer));
- (void)decode __attribute__((swift_name("decode()")));
@property (readonly) NSString *accessToken __attribute__((swift_name("accessToken")));
@end

__attribute__((swift_name("ServicesBase")))
@interface BPSDKServicesBase : BPSDKBase
- (instancetype)initWithClient:(BPSDKKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));

/**
 * Processes the HTTP response, checking for errors and returning the parsed body
 *
 * @param response The HTTP response to process
 * @return The parsed response body of type T
 * @throws BelvoApiException if the response status is not successful or if response is not JSON
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)processResponseResponse:(BPSDKKtor_client_coreHttpResponse *)response completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("processResponse(response:completionHandler:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BPSDKKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BankAccountService")))
@interface BPSDKBankAccountService : BPSDKServicesBase
- (instancetype)initWithClient:(BPSDKKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));

/**
 * Gets a specific bank account by ID
 *
 * @param bankAccountId The bank account identifier
 * @return The bank account details
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getBankAccountBankAccountId:(NSString *)bankAccountId completionHandler:(void (^)(BankAccount * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getBankAccount(bankAccountId:completionHandler:)")));

/**
 * Lists all bank accounts in Brazil
 *
 * @return Paginated response containing bank accounts
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)listBankAccountsWithCompletionHandler:(void (^)(PaginatedResponse<BankAccount *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("listBankAccounts(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CustomerService")))
@interface BPSDKCustomerService : BPSDKServicesBase
- (instancetype)initWithClient:(BPSDKKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));

/**
 * Gets detailed customer information in Brazil
 *
 * @param customerId The customer identifier
 * @return Detailed customer information
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getCustomerDetailsCustomerId:(NSString *)customerId completionHandler:(void (^)(Customer * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getCustomerDetails(customerId:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EnrollmentService")))
@interface BPSDKEnrollmentService : BPSDKServicesBase
- (instancetype)initWithClient:(BPSDKKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BPSDKEnrollmentServiceCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)completeEnrollmentAfterRedirectionPayload:(CompleteEnrollmentPayload *)payload completionHandler:(void (^)(EnrollmentResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("completeEnrollmentAfterRedirection(payload:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)confirmEnrollmentEnrollmentId:(NSString *)enrollmentId payload:(EnrollmentConfirmationPayload *)payload completionHandler:(void (^)(BPSDKBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("confirmEnrollment(enrollmentId:payload:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)createEnrollmentPayload:(EnrollmentPayload *)payload completionHandler:(void (^)(EnrollmentResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("createEnrollment(payload:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getEnrollmentEnrollmentId:(NSString *)enrollmentId completionHandler:(void (^)(EnrollmentResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getEnrollment(enrollmentId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getFidoRegistrationOptionsId:(NSString *)id completionHandler:(void (^)(FidoRegistrationOptions * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getFidoRegistrationOptions(id:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)listEnrollmentsDeviceId:(NSString *)deviceId completionHandler:(void (^)(NSArray<EnrollmentResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("listEnrollments(deviceId:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EnrollmentService.Companion")))
@interface BPSDKEnrollmentServiceCompanion : BPSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BPSDKEnrollmentServiceCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstitutionService")))
@interface BPSDKInstitutionService : BPSDKServicesBase
- (instancetype)initWithClient:(BPSDKKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));

/**
 * Gets all payment institutions in Brazil
 *
 * @param queryParameters Optional query parameters for filtering and pagination
 * @return Paginated response containing payment institutions
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPaymentInstitutionsQueryParameters:(InstitutionQueryParameters * _Nullable)queryParameters completionHandler:(void (^)(PaginatedResponse<Institution *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPaymentInstitutions(queryParameters:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentIntentService")))
@interface BPSDKPaymentIntentService : BPSDKServicesBase
- (instancetype)initWithClient:(BPSDKKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BPSDKPaymentIntentServiceCompanion *companion __attribute__((swift_name("companion")));

/**
 * Authorizes a payment intent with risk signals and biometric assertion
 *
 * @param paymentIntentId The payment intent identifier
 * @param payload The authorization payload containing risk signals and assertion
 * @return true if authorization was successful (204 No Content)
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)authorizePaymentIntentPaymentIntentId:(NSString *)paymentIntentId payload:(AuthorizePaymentIntentPayload *)payload completionHandler:(void (^)(BPSDKBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("authorizePaymentIntent(paymentIntentId:payload:completionHandler:)")));

/**
 * Creates a new payment intent
 *
 * @param payload The payment intent creation payload
 * @return The created payment intent
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)createPaymentIntentPayload:(CreatePaymentIntentPayload *)payload completionHandler:(void (^)(PaymentIntent * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("createPaymentIntent(payload:completionHandler:)")));

/**
 * Gets a specific payment intent by ID
 *
 * @param paymentIntentId The payment intent identifier
 * @return The payment intent details
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPaymentIntentPaymentIntentId:(NSString *)paymentIntentId completionHandler:(void (^)(PaymentIntent * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPaymentIntent(paymentIntentId:completionHandler:)")));

/**
 * Lists all payment intents
 *
 * @param queryParameters Optional query parameters for filtering and pagination
 * @return Paginated response containing payment intents
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)listPaymentIntentsQueryParameters:(PaymentIntentQueryParameters * _Nullable)queryParameters completionHandler:(void (^)(PaginatedResponse<PaymentIntent *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("listPaymentIntents(queryParameters:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentIntentService.Companion")))
@interface BPSDKPaymentIntentServiceCompanion : BPSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BPSDKPaymentIntentServiceCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Services")))
@interface BPSDKServices : BPSDKBase
- (instancetype)initWithTokenRepository:(BPSDKTokenRepository *)tokenRepository __attribute__((swift_name("init(tokenRepository:)"))) __attribute__((objc_designated_initializer));
@property (readonly) BPSDKBankAccountService *bankAccount __attribute__((swift_name("bankAccount")));
@property (readonly) BPSDKCustomerService *customer __attribute__((swift_name("customer")));
@property (readonly) BPSDKEnrollmentService *enrollment __attribute__((swift_name("enrollment")));
@property (readonly) BPSDKInstitutionService *institution __attribute__((swift_name("institution")));
@property (readonly) BPSDKPaymentIntentService *paymentIntent __attribute__((swift_name("paymentIntent")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DatadogLogger")))
@interface BPSDKDatadogLogger : BPSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)datadogLogger __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BPSDKDatadogLogger *shared __attribute__((swift_name("shared")));

/**
 * Log an error message
 * @param message The message to log
 * @param throwable Optional throwable to include with the log
 * @param attributes Optional attributes to include with the log
 */
- (void)errorMessage:(NSString *)message throwable:(BPSDKKotlinThrowable * _Nullable)throwable attributes:(NSDictionary<NSString *, id> *)attributes __attribute__((swift_name("error(message:throwable:attributes:)")));
- (void)initializeContext:(id _Nullable)context __attribute__((swift_name("initialize(context:)")));

/**
 * Log a general message
 * @param message The message to log
 * @param attributes Optional attributes to include with the log
 */
- (void)logMessage:(NSString *)message attributes:(NSDictionary<NSString *, id> *)attributes __attribute__((swift_name("log(message:attributes:)")));

/**
 * Set global context property that will be included in all logs
 * @param key The attribute key
 * @param value The attribute value (can be complex objects, maps, etc.)
 */
- (void)setGlobalContextPropertyKey:(NSString *)key value:(id _Nullable)value __attribute__((swift_name("setGlobalContextProperty(key:value:)")));
@property (readonly) BOOL isInitialized __attribute__((swift_name("isInitialized")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CryptoUtilsKt")))
@interface BPSDKCryptoUtilsKt : BPSDKBase
+ (NSString *)sha_256Input:(NSString *)input __attribute__((swift_name("sha_256(input:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HttpClientFactory_iosKt")))
@interface BPSDKHttpClientFactory_iosKt : BPSDKBase

/**
 * iOS actual implementation using Darwin engine
 */
+ (id<BPSDKKtor_client_coreHttpClientEngine>)createHttpClientEngine __attribute__((swift_name("createHttpClientEngine()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HttpClientFactoryKt")))
@interface BPSDKHttpClientFactoryKt : BPSDKBase

/**
 * Creates an HttpClient with platform-specific engine
 *
 * @param baseUrl The base URL for all requests
 * @param configure Optional function to configure the client
 *
 */
+ (BPSDKKtor_client_coreHttpClient *)createHttpClientBaseUrl:(NSString *)baseUrl configure:(void (^)(BPSDKKtor_client_coreHttpClientConfig<id> *))configure __attribute__((swift_name("createHttpClient(baseUrl:configure:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NSDataExtensionsKt")))
@interface BPSDKNSDataExtensionsKt : BPSDKBase

/**
 * Extension function to encode NSData to a base64 string
 * @return String containing the base64-encoded data
 */
+ (NSString *)toBase64String:(NSData *)receiver __attribute__((swift_name("toBase64String(_:)")));

/**
 * Extension function to encode NSData to a base64url string
 * @return String containing the base64url-encoded data
 */
+ (NSString *)toBase64UrlString:(NSData *)receiver __attribute__((swift_name("toBase64UrlString(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform_iosKt")))
@interface BPSDKPlatform_iosKt : BPSDKBase
+ (NSString *)getPlatformName __attribute__((swift_name("getPlatformName()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PollingKt")))
@interface BPSDKPollingKt : BPSDKBase

/**
 * Polls a fetch function until a condition is met or max attempts are reached
 *
 * @param fetchFn A suspend function that fetches data, receiving isLastAttempt flag
 * @param conditionFn A function that checks if the fetched data meets the condition
 * @param interval Time in milliseconds between polling attempts (default: 1000)
 * @param maxAttempts Maximum number of polling attempts (default: 10)
 * @return The data if condition is met, or the last fetched data if available when max attempts reached, null if token_not_valid error occurs
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)pollFetchFn:(id<BPSDKKotlinSuspendFunction1>)fetchFn conditionFn:(BPSDKBoolean *(^)(id _Nullable))conditionFn interval:(int64_t)interval maxAttempts:(int32_t)maxAttempts completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("poll(fetchFn:conditionFn:interval:maxAttempts:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StringExtensionsKt")))
@interface BPSDKStringExtensionsKt : BPSDKBase

/**
 * Extension function to decode a base64 string to NSData
 * @return NSData containing the decoded bytes
 */
+ (NSData *)fromBase64ToNSData:(NSString *)receiver __attribute__((swift_name("fromBase64ToNSData(_:)")));

/**
 * Extension function to decode a base64url string to NSData
 * Handles base64url format (with - and _ instead of + and /)
 * @return NSData containing the decoded bytes
 */
+ (NSData *)fromBase64UrlToNSData:(NSString *)receiver __attribute__((swift_name("fromBase64UrlToNSData(_:)")));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface BPSDKKotlinRuntimeException : BPSDKKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(BPSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(BPSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface BPSDKKotlinIllegalStateException : BPSDKKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(BPSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(BPSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface BPSDKKotlinCancellationException : BPSDKKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(BPSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(BPSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * Data class representing the authorize payment intent payload
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface AuthorizePaymentIntentPayload : BPSDKBase
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
 * Data class representing device risk signals
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface RiskSignals : BPSDKBase
- (instancetype)initWithDeviceId:(NSString *)deviceId isRootedDevice:(BOOL)isRootedDevice screenBrightness:(int32_t)screenBrightness elapsedTimeSinceBoot:(int64_t)elapsedTimeSinceBoot osVersion:(NSString *)osVersion userTimeZoneOffset:(NSString *)userTimeZoneOffset language:(NSString *)language screenDimensions:(ScreenDimensions *)screenDimensions geolocation:(Geolocation * _Nullable)geolocation accountTenure:(NSString *)accountTenure isCallInProgress:(BPSDKBoolean * _Nullable)isCallInProgress isDevModeEnabled:(BPSDKBoolean * _Nullable)isDevModeEnabled isMockGPS:(BPSDKBoolean * _Nullable)isMockGPS isEmulated:(BOOL)isEmulated isMonkeyRunner:(BPSDKBoolean * _Nullable)isMonkeyRunner isCharging:(BOOL)isCharging antennaInformation:(NSString * _Nullable)antennaInformation isUsbConnected:(BPSDKBoolean * _Nullable)isUsbConnected integrity:(Integrity *)integrity __attribute__((swift_name("init(deviceId:isRootedDevice:screenBrightness:elapsedTimeSinceBoot:osVersion:userTimeZoneOffset:language:screenDimensions:geolocation:accountTenure:isCallInProgress:isDevModeEnabled:isMockGPS:isEmulated:isMonkeyRunner:isCharging:antennaInformation:isUsbConnected:integrity:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) RiskSignalsCompanion *companion __attribute__((swift_name("companion")));
- (RiskSignals *)doCopyDeviceId:(NSString *)deviceId isRootedDevice:(BOOL)isRootedDevice screenBrightness:(int32_t)screenBrightness elapsedTimeSinceBoot:(int64_t)elapsedTimeSinceBoot osVersion:(NSString *)osVersion userTimeZoneOffset:(NSString *)userTimeZoneOffset language:(NSString *)language screenDimensions:(ScreenDimensions *)screenDimensions geolocation:(Geolocation * _Nullable)geolocation accountTenure:(NSString *)accountTenure isCallInProgress:(BPSDKBoolean * _Nullable)isCallInProgress isDevModeEnabled:(BPSDKBoolean * _Nullable)isDevModeEnabled isMockGPS:(BPSDKBoolean * _Nullable)isMockGPS isEmulated:(BOOL)isEmulated isMonkeyRunner:(BPSDKBoolean * _Nullable)isMonkeyRunner isCharging:(BOOL)isCharging antennaInformation:(NSString * _Nullable)antennaInformation isUsbConnected:(BPSDKBoolean * _Nullable)isUsbConnected integrity:(Integrity *)integrity __attribute__((swift_name("doCopy(deviceId:isRootedDevice:screenBrightness:elapsedTimeSinceBoot:osVersion:userTimeZoneOffset:language:screenDimensions:geolocation:accountTenure:isCallInProgress:isDevModeEnabled:isMockGPS:isEmulated:isMonkeyRunner:isCharging:antennaInformation:isUsbConnected:integrity:)")));

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
@property (readonly) ScreenDimensions *screenDimensions __attribute__((swift_name("screenDimensions")));
@property (readonly) NSString *userTimeZoneOffset __attribute__((swift_name("userTimeZoneOffset")));
@end


/**
 * Data class representing the enrollment response
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface EnrollmentResponse : BPSDKBase
- (instancetype)initWithId:(NSString *)id type:(NSString *)type status:(EnrollmentStatus *)status details:(EnrollmentResponseDetails *)details externalId:(NSString * _Nullable)externalId metadata:(NSDictionary<NSString *, BPSDKKotlinx_serialization_jsonJsonElement *> * _Nullable)metadata statusReasonCode:(EnrollmentStatusReasonCode * _Nullable)statusReasonCode statusReasonMessage:(NSString * _Nullable)statusReasonMessage createdBy:(NSString *)createdBy createdAt:(NSString *)createdAt updatedAt:(NSString *)updatedAt __attribute__((swift_name("init(id:type:status:details:externalId:metadata:statusReasonCode:statusReasonMessage:createdBy:createdAt:updatedAt:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) EnrollmentResponseCompanion *companion __attribute__((swift_name("companion")));
- (EnrollmentResponse *)doCopyId:(NSString *)id type:(NSString *)type status:(EnrollmentStatus *)status details:(EnrollmentResponseDetails *)details externalId:(NSString * _Nullable)externalId metadata:(NSDictionary<NSString *, BPSDKKotlinx_serialization_jsonJsonElement *> * _Nullable)metadata statusReasonCode:(EnrollmentStatusReasonCode * _Nullable)statusReasonCode statusReasonMessage:(NSString * _Nullable)statusReasonMessage createdBy:(NSString *)createdBy createdAt:(NSString *)createdAt updatedAt:(NSString *)updatedAt __attribute__((swift_name("doCopy(id:type:status:details:externalId:metadata:statusReasonCode:statusReasonMessage:createdBy:createdAt:updatedAt:)")));

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
@property (readonly) NSDictionary<NSString *, BPSDKKotlinx_serialization_jsonJsonElement *> * _Nullable metadata __attribute__((swift_name("metadata")));
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
 * Data class representing the create payment intent payload
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface CreatePaymentIntentPayload : BPSDKBase
- (instancetype)initWithAmount:(double)amount customer:(Customer *)customer externalId:(NSString * _Nullable)externalId description:(NSString *)description allowedPaymentMethodTypes:(NSArray<NSString *> *)allowedPaymentMethodTypes paymentMethodDetails:(PaymentMethodDetails *)paymentMethodDetails confirm:(BPSDKBoolean * _Nullable)confirm __attribute__((swift_name("init(amount:customer:externalId:description:allowedPaymentMethodTypes:paymentMethodDetails:confirm:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CreatePaymentIntentPayloadCompanion *companion __attribute__((swift_name("companion")));
- (CreatePaymentIntentPayload *)doCopyAmount:(double)amount customer:(Customer *)customer externalId:(NSString * _Nullable)externalId description:(NSString *)description allowedPaymentMethodTypes:(NSArray<NSString *> *)allowedPaymentMethodTypes paymentMethodDetails:(PaymentMethodDetails *)paymentMethodDetails confirm:(BPSDKBoolean * _Nullable)confirm __attribute__((swift_name("doCopy(amount:customer:externalId:description:allowedPaymentMethodTypes:paymentMethodDetails:confirm:)")));

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
@property (readonly) BPSDKBoolean * _Nullable confirm __attribute__((swift_name("confirm")));
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
@property (readonly) PaymentMethodDetails *paymentMethodDetails __attribute__((swift_name("paymentMethodDetails")));
@end


/**
 * Data class representing a payment intent
 * Used for both create and list payment intents endpoints
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface PaymentIntent : BPSDKBase
- (instancetype)initWithId:(NSString *)id customer:(NSString *)customer externalId:(NSString * _Nullable)externalId createdAt:(NSString *)createdAt createdBy:(NSString *)createdBy updatedAt:(NSString *)updatedAt status:(PaymentIntentStatus *)status amount:(NSString *)amount currency:(NSString *)currency description:(NSString * _Nullable)description statementDescription:(NSString * _Nullable)statementDescription selectedPaymentMethodType:(NSString * _Nullable)selectedPaymentMethodType allowedPaymentMethodTypes:(NSArray<NSString *> * _Nullable)allowedPaymentMethodTypes paymentMethodDetails:(PaymentMethodDetails * _Nullable)paymentMethodDetails paymentMethodInformation:(PaymentMethodInformation * _Nullable)paymentMethodInformation metadata:(NSDictionary<NSString *, BPSDKKotlinx_serialization_jsonJsonElement *> * _Nullable)metadata provider:(NSString * _Nullable)provider charges:(NSArray<Charge *> * _Nullable)charges failureCode:(NSString * _Nullable)failureCode failureMessage:(NSString * _Nullable)failureMessage nextStep:(NSDictionary<NSString *, BPSDKKotlinx_serialization_jsonJsonElement *> * _Nullable)nextStep lastError:(NSDictionary<NSString *, BPSDKKotlinx_serialization_jsonJsonElement *> * _Nullable)lastError __attribute__((swift_name("init(id:customer:externalId:createdAt:createdBy:updatedAt:status:amount:currency:description:statementDescription:selectedPaymentMethodType:allowedPaymentMethodTypes:paymentMethodDetails:paymentMethodInformation:metadata:provider:charges:failureCode:failureMessage:nextStep:lastError:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentIntentCompanion *companion __attribute__((swift_name("companion")));
- (PaymentIntent *)doCopyId:(NSString *)id customer:(NSString *)customer externalId:(NSString * _Nullable)externalId createdAt:(NSString *)createdAt createdBy:(NSString *)createdBy updatedAt:(NSString *)updatedAt status:(PaymentIntentStatus *)status amount:(NSString *)amount currency:(NSString *)currency description:(NSString * _Nullable)description statementDescription:(NSString * _Nullable)statementDescription selectedPaymentMethodType:(NSString * _Nullable)selectedPaymentMethodType allowedPaymentMethodTypes:(NSArray<NSString *> * _Nullable)allowedPaymentMethodTypes paymentMethodDetails:(PaymentMethodDetails * _Nullable)paymentMethodDetails paymentMethodInformation:(PaymentMethodInformation * _Nullable)paymentMethodInformation metadata:(NSDictionary<NSString *, BPSDKKotlinx_serialization_jsonJsonElement *> * _Nullable)metadata provider:(NSString * _Nullable)provider charges:(NSArray<Charge *> * _Nullable)charges failureCode:(NSString * _Nullable)failureCode failureMessage:(NSString * _Nullable)failureMessage nextStep:(NSDictionary<NSString *, BPSDKKotlinx_serialization_jsonJsonElement *> * _Nullable)nextStep lastError:(NSDictionary<NSString *, BPSDKKotlinx_serialization_jsonJsonElement *> * _Nullable)lastError __attribute__((swift_name("doCopy(id:customer:externalId:createdAt:createdBy:updatedAt:status:amount:currency:description:statementDescription:selectedPaymentMethodType:allowedPaymentMethodTypes:paymentMethodDetails:paymentMethodInformation:metadata:provider:charges:failureCode:failureMessage:nextStep:lastError:)")));

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
@property (readonly) NSDictionary<NSString *, BPSDKKotlinx_serialization_jsonJsonElement *> * _Nullable lastError __attribute__((swift_name("lastError")));
@property (readonly) NSDictionary<NSString *, BPSDKKotlinx_serialization_jsonJsonElement *> * _Nullable metadata __attribute__((swift_name("metadata")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="next_step")
*/
@property (readonly) NSDictionary<NSString *, BPSDKKotlinx_serialization_jsonJsonElement *> * _Nullable nextStep __attribute__((swift_name("nextStep")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="payment_method_details")
*/
@property (readonly) PaymentMethodDetails * _Nullable paymentMethodDetails __attribute__((swift_name("paymentMethodDetails")));

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
 * Data class representing a bank account in Brazil
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface BankAccount : BPSDKBase
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
 * Data class representing customer information
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface Customer : BPSDKBase
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
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface FidoRegistrationOptions : BPSDKBase
- (instancetype)initWithRp:(RelyingParty *)rp user:(User *)user challenge:(NSString *)challenge pubKeyCredParams:(NSArray<PublicKeyCredentialParameters *> *)pubKeyCredParams timeout:(BPSDKInt * _Nullable)timeout excludeCredentials:(NSArray<ExcludeCredential *> * _Nullable)excludeCredentials authenticatorSelection:(AuthenticatorSelection * _Nullable)authenticatorSelection attestation:(NSString * _Nullable)attestation attestationFormats:(NSArray<NSString *> * _Nullable)attestationFormats extensions:(NSDictionary<NSString *, NSString *> * _Nullable)extensions __attribute__((swift_name("init(rp:user:challenge:pubKeyCredParams:timeout:excludeCredentials:authenticatorSelection:attestation:attestationFormats:extensions:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FidoRegistrationOptionsCompanion *companion __attribute__((swift_name("companion")));
- (FidoRegistrationOptions *)doCopyRp:(RelyingParty *)rp user:(User *)user challenge:(NSString *)challenge pubKeyCredParams:(NSArray<PublicKeyCredentialParameters *> *)pubKeyCredParams timeout:(BPSDKInt * _Nullable)timeout excludeCredentials:(NSArray<ExcludeCredential *> * _Nullable)excludeCredentials authenticatorSelection:(AuthenticatorSelection * _Nullable)authenticatorSelection attestation:(NSString * _Nullable)attestation attestationFormats:(NSArray<NSString *> * _Nullable)attestationFormats extensions:(NSDictionary<NSString *, NSString *> * _Nullable)extensions __attribute__((swift_name("doCopy(rp:user:challenge:pubKeyCredParams:timeout:excludeCredentials:authenticatorSelection:attestation:attestationFormats:extensions:)")));
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
@property (readonly) BPSDKInt * _Nullable timeout __attribute__((swift_name("timeout")));
@property (readonly) User *user __attribute__((swift_name("user")));
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
@interface InstitutionQueryParameters : BPSDKBase
- (instancetype)initWithPage:(BPSDKInt * _Nullable)page pageSize:(BPSDKInt * _Nullable)pageSize name:(NSString * _Nullable)name institutionType:(InstitutionQueryParametersInstitutionType * _Nullable)institutionType idIn:(NSArray<NSString *> * _Nullable)idIn __attribute__((swift_name("init(page:pageSize:name:institutionType:idIn:)"))) __attribute__((objc_designated_initializer));
- (InstitutionQueryParameters *)doCopyPage:(BPSDKInt * _Nullable)page pageSize:(BPSDKInt * _Nullable)pageSize name:(NSString * _Nullable)name institutionType:(InstitutionQueryParametersInstitutionType * _Nullable)institutionType idIn:(NSArray<NSString *> * _Nullable)idIn __attribute__((swift_name("doCopy(page:pageSize:name:institutionType:idIn:)")));

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
@property (readonly) BPSDKInt * _Nullable page __attribute__((swift_name("page")));
@property (readonly) BPSDKInt * _Nullable pageSize __attribute__((swift_name("pageSize")));
@end


/**
 * Data class representing a payment institution in Brazil
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface Institution : BPSDKBase
- (instancetype)initWithId:(NSString *)id active:(BOOL)active country:(NSString *)country description:(NSString * _Nullable)description displayName:(NSString *)displayName iconLogo:(NSString *)iconLogo institutionType:(NSString * _Nullable)institutionType legalEntityName:(NSString * _Nullable)legalEntityName logo:(NSString * _Nullable)logo name:(NSString *)name paymentMethods:(NSDictionary<NSString *, PaymentMethodStatus *> * _Nullable)paymentMethods primaryColor:(NSString * _Nullable)primaryColor sortPriority:(BPSDKInt * _Nullable)sortPriority textLogo:(NSString * _Nullable)textLogo website:(NSString * _Nullable)website __attribute__((swift_name("init(id:active:country:description:displayName:iconLogo:institutionType:legalEntityName:logo:name:paymentMethods:primaryColor:sortPriority:textLogo:website:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) InstitutionCompanion *companion __attribute__((swift_name("companion")));
- (Institution *)doCopyId:(NSString *)id active:(BOOL)active country:(NSString *)country description:(NSString * _Nullable)description displayName:(NSString *)displayName iconLogo:(NSString *)iconLogo institutionType:(NSString * _Nullable)institutionType legalEntityName:(NSString * _Nullable)legalEntityName logo:(NSString * _Nullable)logo name:(NSString *)name paymentMethods:(NSDictionary<NSString *, PaymentMethodStatus *> * _Nullable)paymentMethods primaryColor:(NSString * _Nullable)primaryColor sortPriority:(BPSDKInt * _Nullable)sortPriority textLogo:(NSString * _Nullable)textLogo website:(NSString * _Nullable)website __attribute__((swift_name("doCopy(id:active:country:description:displayName:iconLogo:institutionType:legalEntityName:logo:name:paymentMethods:primaryColor:sortPriority:textLogo:website:)")));

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
@property (readonly) BPSDKInt * _Nullable sortPriority __attribute__((swift_name("sortPriority")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="text_logo")
*/
@property (readonly) NSString * _Nullable textLogo __attribute__((swift_name("textLogo")));
@property (readonly) NSString * _Nullable website __attribute__((swift_name("website")));
@end

__attribute__((objc_subclassing_restricted))
@interface Enrollment : BPSDKBase
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
@interface PaymentIntentQueryParameters : BPSDKBase
- (instancetype)initWithPage:(BPSDKInt * _Nullable)page pageSize:(BPSDKInt * _Nullable)pageSize status:(PaymentIntentStatus * _Nullable)status externalId:(NSString * _Nullable)externalId createdAfter:(NSString * _Nullable)createdAfter createdBefore:(NSString * _Nullable)createdBefore __attribute__((swift_name("init(page:pageSize:status:externalId:createdAfter:createdBefore:)"))) __attribute__((objc_designated_initializer));
- (PaymentIntentQueryParameters *)doCopyPage:(BPSDKInt * _Nullable)page pageSize:(BPSDKInt * _Nullable)pageSize status:(PaymentIntentStatus * _Nullable)status externalId:(NSString * _Nullable)externalId createdAfter:(NSString * _Nullable)createdAfter createdBefore:(NSString * _Nullable)createdBefore __attribute__((swift_name("doCopy(page:pageSize:status:externalId:createdAfter:createdBefore:)")));

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
@property (readonly) BPSDKInt * _Nullable page __attribute__((swift_name("page")));
@property (readonly) BPSDKInt * _Nullable pageSize __attribute__((swift_name("pageSize")));
@property (readonly) PaymentIntentStatus * _Nullable status __attribute__((swift_name("status")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol BPSDKKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<BPSDKKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol BPSDKKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<BPSDKKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<BPSDKKotlinCoroutineContextElement> _Nullable)getKey:(id<BPSDKKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<BPSDKKotlinCoroutineContext>)minusKeyKey:(id<BPSDKKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<BPSDKKotlinCoroutineContext>)plusContext:(id<BPSDKKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol BPSDKKotlinCoroutineContextElement <BPSDKKotlinCoroutineContext>
@required
@property (readonly) id<BPSDKKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol BPSDKKotlinx_coroutines_coreJob <BPSDKKotlinCoroutineContextElement>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (id<BPSDKKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<BPSDKKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(BPSDKKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (BPSDKKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<BPSDKKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(BPSDKKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (id<BPSDKKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(BPSDKKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<BPSDKKotlinx_coroutines_coreJob>)plusOther:(id<BPSDKKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<BPSDKKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<BPSDKKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
@property (readonly) id<BPSDKKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCompletableJob")))
@protocol BPSDKKotlinx_coroutines_coreCompletableJob <BPSDKKotlinx_coroutines_coreJob>
@required
- (BOOL)complete __attribute__((swift_name("complete()")));
- (BOOL)completeExceptionallyException:(BPSDKKotlinThrowable *)exception __attribute__((swift_name("completeExceptionally(exception:)")));
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
- (void)onSuccessResponse:(AttestationResponse *)response __attribute__((swift_name("onSuccess(response:)")));
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
- (void)onSuccessResponse_:(AssertionResponse *)response __attribute__((swift_name("onSuccess(response_:)")));
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


/**
 * Represents a single API error item
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface BelvoApiErrorItem : BPSDKBase
- (instancetype)initWithCode:(NSString * _Nullable)code message:(BPSDKKotlinx_serialization_jsonJsonElement * _Nullable)message requestId:(NSString * _Nullable)requestId detail:(NSString * _Nullable)detail field:(NSString * _Nullable)field __attribute__((swift_name("init(code:message:requestId:detail:field:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BelvoApiErrorItemCompanion *companion __attribute__((swift_name("companion")));
- (BelvoApiErrorItem *)doCopyCode:(NSString * _Nullable)code message:(BPSDKKotlinx_serialization_jsonJsonElement * _Nullable)message requestId:(NSString * _Nullable)requestId detail:(NSString * _Nullable)detail field:(NSString * _Nullable)field __attribute__((swift_name("doCopy(code:message:requestId:detail:field:)")));

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
@property (readonly) BPSDKKotlinx_serialization_jsonJsonElement * _Nullable message __attribute__((swift_name("message")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="request_id")
*/
@property (readonly) NSString * _Nullable requestId __attribute__((swift_name("requestId")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="2.0")
*/
__attribute__((swift_name("KotlinAutoCloseable")))
@protocol BPSDKKotlinAutoCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol BPSDKKtor_ioCloseable <BPSDKKotlinAutoCloseable>
@required
@end


/**
 * A multiplatform asynchronous HTTP client that allows you to make requests, handle responses,
 * and extend its functionality with plugins such as authentication, JSON serialization, and more.
 *
 * # Creating client
 * To create a new client, you can call:
 * ```kotlin
 * val client = HttpClient()
 * ```
 * You can create as many clients as you need.
 *
 * If you no longer need the client, please consider closing it to release resources:
 * ```
 * client.close()
 * ```
 *
 * To learn more on how to create and configure an [HttpClient] see the tutorial page:
 * [Creating and configuring a client](https://ktor.io/docs/create-client.html).
 *
 * # Making API Requests
 * For every HTTP method (GET, POST, PUT, etc.), there is a corresponding function:
 * ```kotlin
 * val response: HttpResponse = client.get("https://ktor.io/")
 * val body = response.bodyAsText()
 * ```
 * See [Making HTTP requests](https://ktor.io/docs/client-requests.html) for more details.
 *
 * # Query Parameters
 * Add query parameters to your request using the `parameter` function:
 * ```kotlin
 * val response = client.get("https://google.com/search") {
 *     url {
 *         parameter("q", "REST API with Ktor")
 *     }
 * }
 * ```
 * For more information, refer to [Passing request parameters](https://ktor.io/docs/client-requests.html#parameters).
 *
 * # Adding Headers
 * Include headers in your request using the `headers` builder or the `header` function:
 * ```kotlin
 * val response = client.get("https://httpbin.org/bearer") {
 *     headers {
 *         append("Authorization", "Bearer your_token_here")
 *         append("Accept", "application/json")
 *     }
 * }
 * ```
 * Learn more at [Adding headers to a request](https://ktor.io/docs/client-requests.html#headers).
 *
 * # JSON Serialization
 * Add dependencies:
 * - io.ktor:ktor-client-content-negotiation:3.+
 * - io.ktor:ktor-serialization-kotlinx-json:3.+
 * Add Gradle plugin:
 * ```
 * plugins {
 *     kotlin("plugin.serialization")
 * }
 * ```
 *
 * Send and receive JSON data by installing the `ContentNegotiation` plugin with `kotlinx.serialization`:
 * ```kotlin
 * val client = HttpClient {
 *     install(ContentNegotiation) {
 *         json()
 *     }
 * }
 *
 * @Serializable
 * data class MyRequestType(val someData: String)
 *
 * @Serializable
 * data class MyResponseType(val someResponseData: String)
 *
 * val response: MyResponseType = client.post("https://api.example.com/data") {
 *     contentType(ContentType.Application.Json)
 *     setBody(MyRequestType(someData = "value"))
 * }.body()
 * ```
 * See [Serializing JSON data](https://ktor.io/docs/client-serialization.html) for maven configuration and other details.
 *
 * # Submitting Forms
 * Submit form data using `FormDataContent` or the `submitForm` function:
 * ```kotlin
 * // Using FormDataContent
 * val response = client.post("https://example.com/submit") {
 *     setBody(FormDataContent(Parameters.build {
 *         append("username", "user")
 *         append("password", "pass")
 *     }))
 * }
 *
 * // Or using submitForm
 * val response = client.submitForm(
 *     url = "https://example.com/submit",
 *     formParameters = Parameters.build {
 *         append("username", "user")
 *         append("password", "pass")
 *     }
 * )
 * ```
 * More information is available at [Submitting form parameters](https://ktor.io/docs/client-requests.html#form_parameters).
 *
 * # Handling Authentication
 * Add dependency: io.ktor:ktor-client-auth:3.+
 *
 * Use the `Auth` plugin to handle various authentication schemes like Basic or Bearer token authentication:
 * ```kotlin
 * val client = HttpClient {
 *     install(Auth) {
 *         bearer {
 *             loadTokens {
 *                 BearerTokens(accessToken = "your_access_token", refreshToken = "your_refresh_token")
 *             }
 *         }
 *     }
 * }
 *
 * val response = client.get("https://api.example.com/protected")
 * ```
 * Refer to [Client authentication](https://ktor.io/docs/client-auth.html) for more details.
 *
 * # Setting Timeouts and Retries
 * Configure timeouts and implement retry logic for your requests:
 * ```kotlin
 * val client = HttpClient {
 *     install(HttpTimeout) {
 *         requestTimeoutMillis = 10000
 *         connectTimeoutMillis = 5000
 *         socketTimeoutMillis = 15000
 *     }
 * }
 * ```
 *
 * For the request timeout:
 * ```kotlin
 * client.get("") {
 *     timeout {
 *         requestTimeoutMillis = 1000
 *     }
 * }
 * ```
 * See [Timeout](https://ktor.io/docs/client-timeout.html) for more information.
 *
 * # Handling Cookies
 *
 * Manage cookies automatically by installing the `HttpCookies` plugin:
 * ```kotlin
 * val client = HttpClient {
 *     install(HttpCookies) {
 *         storage = AcceptAllCookiesStorage()
 *     }
 * }
 *
 * // Accessing cookies
 * val cookies: List<Cookie> = client.cookies("https://example.com")
 * ```
 * Learn more at [Cookies](https://ktor.io/docs/client-cookies.html).
 *
 * # Uploading Files
 * Upload files using multipart/form-data requests:
 * ```kotlin
 * client.submitFormWithBinaryData(
 *      url = "https://example.com/upload",
 *      formData = formData {
 *          append("description", "File upload example")
 *          append("file", {
 *              File("path/to/file.txt").readChannel()
 *          })
 *      }
 *  )
 *
 * See [Uploading data](https://ktor.io/docs/client-requests.html#upload_file) for details.
 *
 * # Using WebSockets
 *
 * Communicate over WebSockets using the `webSocket` function:
 * ```kotlin
 * client.webSocket("wss://echo.websocket.org") {
 *     send(Frame.Text("Hello, WebSocket!"))
 *     val frame = incoming.receive()
 *     if (frame is Frame.Text) {
 *         println("Received: ${frame.readText()}")
 *     }
 * }
 * ```
 * Learn more at [Client WebSockets](https://ktor.io/docs/client-websockets.html).
 *
 * # Error Handling
 * Handle exceptions and HTTP error responses gracefully:
 * val client = HttpClient {
 *     HttpResponseValidator {
 *         validateResponse { response ->
 *             val statusCode = response.status.value
 *             when (statusCode) {
 *                 in 300..399 -> error("Redirects are not allowed")
 *             }
 *         }
 *     }
 * }
 * See [Error handling](https://ktor.io/docs/client-response-validation.html) for more information.
 *
 * # Configuring SSL/TLS
 *
 * Customize SSL/TLS settings for secure connections is engine-specific. Please refer to the following page for
 * the details: [Client SSL/TLS](https://ktor.io/docs/client-ssl.html).
 *
 * # Using Proxies
 * Route requests through an HTTP or SOCKS proxy:
 * ```kotlin
 * val client = HttpClient() {
 *     engine {
 *         proxy = ProxyBuilder.http("http://proxy.example.com:8080")
 *         // For a SOCKS proxy:
 *         // proxy = ProxyBuilder.socks(host = "proxy.example.com", port = 1080)
 *     }
 * }
 * ```
 * See [Using a proxy](https://ktor.io/docs/client-proxy.html) for details.
 *
 * # Streaming Data
 *
 * Stream large data efficiently without loading it entirely into memory.
 *
 * Stream request:
 * ```kotlin
 * val response = client.post("https://example.com/upload") {
 *      setBody(object: OutgoingContent.WriteChannelContent() {
 *          override suspend fun writeTo(channel: ByteWriteChannel) {
 *              repeat(1000) {
 *                  channel.writeString("Hello!")
 *              }
 *          }
 *      })
 * }
 * ```
 *
 * Stream response:
 * ```kotlin
 * client.prepareGet("https://example.com/largefile.zip").execute { response ->
 *     val channel: ByteReadChannel = response.bodyAsChannel()
 *
 *     while (!channel.exhausted()) {
 *         val chunk = channel.readBuffer()
 *         // ...
 *     }
 * }
 * ```
 * Learn more at [Streaming data](https://ktor.io/docs/client-responses.html#streaming).
 *
 * # Using SSE
 * Server-Sent Events (SSE) is a technology that allows a server to continuously push events to a client over an HTTP
 * connection. It's particularly useful in cases where the server needs to send event-based updates without requiring
 * the client to repeatedly poll the server.
 *
 * Install the plugin:
 * ```kotlin
 * val client = HttpClient(CIO) {
 *     install(SSE)
 * }
 * ```
 *
 * ```
 * client.sse(host = "0.0.0.0", port = 8080, path = "/events") {
 *     while (true) {
 *         for (event in incoming) {
 *             println("Event from server:")
 *             println(event)
 *         }
 *     }
 * }
 * ```
 *
 * Visit [Using SSE](https://ktor.io/docs/client-server-sent-events.html#install_plugin) to learn more.
 *
 * # Customizing a client with plugins
 * To extend out-of-the-box functionality, you can install plugins for a Ktor client:
 * ```kotlin
 * val client = HttpClient {
 *     install(ContentNegotiation) {
 *         json()
 *     }
 * }
 * ```
 *
 * There are many plugins available out of the box, and you can write your own. See
 * [Create custom client plugins](https://ktor.io/docs/client-custom-plugins.html) to learn more.
 *
 * # Service Loader and Default Engine
 * On JVM, calling `HttpClient()` without specifying an engine uses a service loader mechanism to
 * determine the appropriate default engine. This can introduce a performance overhead, especially on
 * slower devices, such as Android.
 *
 * **Performance Note**: If you are targeting platforms where initialization speed is critical,
 * consider explicitly specifying an engine to avoid the service loader lookup.
 *
 * Example with manual engine specification:
 * ```
 * val client = HttpClient(Apache) // Explicitly uses Apache engine, bypassing service loader
 * ```
 *
 * By directly setting the engine (e.g., `Apache`, `OkHttp`), you can optimize startup performance
 * by preventing the default service loader mechanism.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClient)
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface BPSDKKtor_client_coreHttpClient : BPSDKBase <BPSDKKotlinx_coroutines_coreCoroutineScope, BPSDKKtor_ioCloseable>
- (instancetype)initWithEngine:(id<BPSDKKtor_client_coreHttpClientEngine>)engine userConfig:(BPSDKKtor_client_coreHttpClientConfig<BPSDKKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));

/**
 * Initiates the shutdown process for the `HttpClient`. This is a non-blocking call, which
 * means it returns immediately and begins the client closure in the background.
 *
 * ## Usage
 * ```
 * val client = HttpClient()
 * client.close()
 * client.coroutineContext.job.join() // Waits for complete termination if necessary
 * ```
 *
 * ## Important Notes
 * - **Non-blocking**: `close()` only starts the closing process and does not wait for it to complete.
 * - **Coroutine Context**: To wait for all client resources to be freed, use `client.coroutineContext.job.join()`
 *   or `client.coroutineContext.cancel()` to terminate ongoing tasks.
 * - **Manual Engine Management**: If a custom `engine` was manually created, it must be closed explicitly
 *   after calling `client.close()` to release all resources.
 *
 * Example with custom engine management:
 * ```
 * val engine = HttpClientEngine() // Custom engine instance
 * val client = HttpClient(engine)
 *
 * client.close()
 * engine.close() // Ensure manually created engine is also closed
 * ```
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClient.close)
 */
- (void)close __attribute__((swift_name("close()")));

/**
 * Returns a new [HttpClient] by copying this client's configuration
 * and additionally configured by the [block] parameter.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClient.config)
 */
- (BPSDKKtor_client_coreHttpClient *)configBlock:(void (^)(BPSDKKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));

/**
 * Checks if the specified [capability] is supported by this client.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClient.isSupported)
 */
- (BOOL)isSupportedCapability:(id<BPSDKKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * Typed attributes used as a lightweight container for this client.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClient.attributes)
 */
@property (readonly) id<BPSDKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<BPSDKKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<BPSDKKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));

/**
 * Provides access to the client's engine configuration.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClient.engineConfig)
 */
@property (readonly) BPSDKKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));

/**
 * Provides access to the events of the client's lifecycle.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClient.monitor)
 */
@property (readonly) BPSDKKtor_eventsEvents *monitor __attribute__((swift_name("monitor")));

/**
 * A pipeline used for receiving a request.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClient.receivePipeline)
 */
@property (readonly) BPSDKKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));

/**
 * A pipeline used for processing all requests sent by this client.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClient.requestPipeline)
 */
@property (readonly) BPSDKKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));

/**
 * A pipeline used for processing all responses sent by the server.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClient.responsePipeline)
 */
@property (readonly) BPSDKKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));

/**
 * A pipeline used for sending a request.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClient.sendPipeline)
 */
@property (readonly) BPSDKKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end


/**
 * A message either from the client or the server,
 * that has [headers] associated.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpMessage)
 */
__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol BPSDKKtor_httpHttpMessage
@required

/**
 * Message [Headers]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpMessage.headers)
 */
@property (readonly) id<BPSDKKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@end


/**
 * An [HttpClient]'s response, a second part of [HttpClientCall].
 *
 * Learn more from [Receiving responses](https://ktor.io/docs/response.html).
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponse)
 */
__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface BPSDKKtor_client_coreHttpResponse : BPSDKBase <BPSDKKtor_httpHttpMessage, BPSDKKotlinx_coroutines_coreCoroutineScope>

/**
 * An [HttpClient]'s response, a second part of [HttpClientCall].
 *
 * Learn more from [Receiving responses](https://ktor.io/docs/response.html).
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponse)
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * An [HttpClient]'s response, a second part of [HttpClientCall].
 *
 * Learn more from [Receiving responses](https://ktor.io/docs/response.html).
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponse)
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * The associated [HttpClientCall] containing both
 * the underlying [HttpClientCall.request] and [HttpClientCall.response].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponse.call)
 */
@property (readonly) BPSDKKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));

/**
 * Provides a raw [ByteReadChannel] to the response content as it is read from the network.
 * This content can be still compressed or encoded.
 *
 * This content doesn't go through any interceptors from [HttpResponsePipeline].
 *
 * If you need to read the content as decoded bytes, use the [bodyAsChannel] method instead.
 *
 * This property produces a new channel every time it's accessed.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponse.rawContent)
 */
@property (readonly) id<BPSDKKtor_ioByteReadChannel> rawContent __attribute__((swift_name("rawContent")));

/**
 * [GMTDate] of the request start.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponse.requestTime)
 */
@property (readonly) BPSDKKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));

/**
 * [GMTDate] of the response start.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponse.responseTime)
 */
@property (readonly) BPSDKKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));

/**
 * The [HttpStatusCode] returned by the server. It includes both,
 * the [HttpStatusCode.description] and the [HttpStatusCode.value] (code).
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponse.status)
 */
@property (readonly) BPSDKKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));

/**
 * HTTP version. Usually [HttpProtocolVersion.HTTP_1_1] or [HttpProtocolVersion.HTTP_2_0].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponse.version)
 */
@property (readonly) BPSDKKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
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
@interface PaginatedResponse<T> : BPSDKBase
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
 * Data class representing the payload for completing enrollment after redirection
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface CompleteEnrollmentPayload : BPSDKBase
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
 * Data class representing the payload for confirming enrollment
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface EnrollmentConfirmationPayload : BPSDKBase
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
 * Data class representing the enrollment payload
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface EnrollmentPayload : BPSDKBase
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
 * Serves as the base interface for an [HttpClient]'s engine.
 *
 * An `HttpClientEngine` represents the underlying network implementation that
 * performs HTTP requests and handles responses.
 * Developers can implement this interface to create custom engines for use with [HttpClient].
 *
 * This interface provides a set of properties and methods that define the
 * contract for configuring, executing, and managing HTTP requests within the engine.
 *
 * For a base implementation that handles common engine functionality, see [HttpClientEngineBase].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.engine.HttpClientEngine)
 */
__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol BPSDKKtor_client_coreHttpClientEngine <BPSDKKotlinx_coroutines_coreCoroutineScope, BPSDKKtor_ioCloseable>
@required

/**
 * Executes an HTTP request and produces an HTTP response.
 *
 * This function takes [HttpRequestData], which contains all details of the HTTP request,
 * and returns [HttpResponseData] with the server's response, including headers, status code, and body.
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.engine.HttpClientEngine.execute)
 *
 * @param data The [HttpRequestData] representing the request to be executed.
 * @return An [HttpResponseData] object containing the server's response.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(BPSDKKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(BPSDKKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));

/**
 * Installs the engine into an [HttpClient].
 *
 * This method is called when the engine is being set up within an `HttpClient`.
 * Use it to register interceptors, validate configuration, or prepare the engine
 * for use with the client.
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.engine.HttpClientEngine.install)
 *
 * @param client The [HttpClient] instance to which the engine is being installed.
 */
- (void)installClient:(BPSDKKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));

/**
 * Provides access to the engine's configuration via [HttpClientEngineConfig].
 *
 * The [config] object stores user-defined parameters or settings that control
 * how the engine operates. When creating a custom engine, this property
 * should return the specific configuration implementation.
 *
 * Example:
 * ```kotlin
 * override val config: HttpClientEngineConfig = CustomEngineConfig()
 * ```
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.engine.HttpClientEngine.config)
 */
@property (readonly) BPSDKKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));

/**
 * Specifies the [CoroutineDispatcher] for I/O operations in the engine.
 *
 * This dispatcher is used for all network-related operations, such as
 * sending requests and receiving responses.
 * By default, it should be optimized for I/O tasks.
 *
 * Example:
 * ```kotlin
 * override val dispatcher: CoroutineDispatcher = Dispatchers.IO
 * ```
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.engine.HttpClientEngine.dispatcher)
 */
@property (readonly) BPSDKKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));

/**
 * Specifies the set of capabilities supported by this HTTP client engine.
 *
 * Capabilities provide a mechanism for plugins and other components to
 * determine whether the engine supports specific features such as timeouts,
 * WebSocket communication, HTTP/2, HTTP/3, or other advanced networking
 * capabilities. This allows seamless integration of features based on the
 * engine's functionality.
 *
 * Each capability is represented as an instance of [HttpClientEngineCapability],
 * which can carry additional metadata or configurations for the capability.
 *
 * Example:
 * ```kotlin
 * override val supportedCapabilities: Set<HttpClientEngineCapability<*>> = setOf(
 *     WebSocketCapability,
 *     Http2Capability,
 *     TimeoutCapability
 * )
 * ```
 *
 * **Usage in Plugins**:
 * Plugins can check if the engine supports a specific capability before
 * applying behavior:
 * ```kotlin
 * if (engine.supportedCapabilities.contains(WebSocketCapability)) {
 *     // Configure WebSocket-specific settings
 * }
 * ```
 *
 * When implementing a custom engine, ensure this property accurately reflects
 * the engine's abilities to avoid unexpected plugin behavior or runtime errors.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.engine.HttpClientEngine.supportedCapabilities)
 */
@property (readonly) NSSet<id<BPSDKKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end


/**
 * A mutable [HttpClient] configuration used to adjust settings, install plugins and interceptors.
 *
 * This configuration can be provided as a lambda in the [HttpClient] constructor or the [HttpClient.config] builder:
 * ```kotlin
 * val client = HttpClient { // HttpClientConfig<Engine>()
 *     // Configure engine settings
 *     engine { // HttpClientEngineConfig
 *         threadsCount = 4
 *         pipelining = true
 *     }
 *
 *     // Install and configure plugins
 *     install(ContentNegotiation) {
 *         json()
 *     }
 *
 *     // Configure default request parameters
 *     defaultRequest {
 *         url("https://api.example.com")
 *         header("X-Custom-Header", "value")
 *     }
 *
 *     // Configure client-wide settings
 *     expectSuccess = true
 *     followRedirects = true
 * }
 * ```
 * ## Configuring [HttpClientEngine]
 *
 * If the engine is specified explicitly, engine-specific properties will be available in the `engine` block:
 * ```kotlin
 * val client = HttpClient(CIO) { // HttpClientConfig<CIOEngineConfig>.() -> Unit
 *     engine { // CIOEngineConfig.() -> Unit
 *         // engine specific properties
 *     }
 * }
 * ```
 *
 * Learn more about the client's configuration from
 * [Creating and configuring a client](https://ktor.io/docs/create-client.html).
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClientConfig)
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface BPSDKKtor_client_coreHttpClientConfig<T> : BPSDKBase

/**
 * A mutable [HttpClient] configuration used to adjust settings, install plugins and interceptors.
 *
 * This configuration can be provided as a lambda in the [HttpClient] constructor or the [HttpClient.config] builder:
 * ```kotlin
 * val client = HttpClient { // HttpClientConfig<Engine>()
 *     // Configure engine settings
 *     engine { // HttpClientEngineConfig
 *         threadsCount = 4
 *         pipelining = true
 *     }
 *
 *     // Install and configure plugins
 *     install(ContentNegotiation) {
 *         json()
 *     }
 *
 *     // Configure default request parameters
 *     defaultRequest {
 *         url("https://api.example.com")
 *         header("X-Custom-Header", "value")
 *     }
 *
 *     // Configure client-wide settings
 *     expectSuccess = true
 *     followRedirects = true
 * }
 * ```
 * ## Configuring [HttpClientEngine]
 *
 * If the engine is specified explicitly, engine-specific properties will be available in the `engine` block:
 * ```kotlin
 * val client = HttpClient(CIO) { // HttpClientConfig<CIOEngineConfig>.() -> Unit
 *     engine { // CIOEngineConfig.() -> Unit
 *         // engine specific properties
 *     }
 * }
 * ```
 *
 * Learn more about the client's configuration from
 * [Creating and configuring a client](https://ktor.io/docs/create-client.html).
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClientConfig)
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * A mutable [HttpClient] configuration used to adjust settings, install plugins and interceptors.
 *
 * This configuration can be provided as a lambda in the [HttpClient] constructor or the [HttpClient.config] builder:
 * ```kotlin
 * val client = HttpClient { // HttpClientConfig<Engine>()
 *     // Configure engine settings
 *     engine { // HttpClientEngineConfig
 *         threadsCount = 4
 *         pipelining = true
 *     }
 *
 *     // Install and configure plugins
 *     install(ContentNegotiation) {
 *         json()
 *     }
 *
 *     // Configure default request parameters
 *     defaultRequest {
 *         url("https://api.example.com")
 *         header("X-Custom-Header", "value")
 *     }
 *
 *     // Configure client-wide settings
 *     expectSuccess = true
 *     followRedirects = true
 * }
 * ```
 * ## Configuring [HttpClientEngine]
 *
 * If the engine is specified explicitly, engine-specific properties will be available in the `engine` block:
 * ```kotlin
 * val client = HttpClient(CIO) { // HttpClientConfig<CIOEngineConfig>.() -> Unit
 *     engine { // CIOEngineConfig.() -> Unit
 *         // engine specific properties
 *     }
 * }
 * ```
 *
 * Learn more about the client's configuration from
 * [Creating and configuring a client](https://ktor.io/docs/create-client.html).
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClientConfig)
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * Clones this [HttpClientConfig] by duplicating all the [plugins] and [customInterceptors].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClientConfig.clone)
 */
- (BPSDKKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));

/**
 * A builder for configuring engine-specific settings in [HttpClientEngineConfig],
 * such as dispatcher, thread count, proxy, and more.
 *
 * ```kotlin
 * val client = HttpClient(CIO) { // HttpClientConfig<CIOEngineConfig>
 *     engine { // CIOEngineConfig.() -> Unit
 *         proxy = ProxyBuilder.http("proxy.example.com", 8080)
 *     }
 * ```
 *
 * You can learn more from [Engines](https://ktor.io/docs/http-client-engines.html).
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClientConfig.engine)
 */
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));

/**
 * Applies all the installed [plugins] and [customInterceptors] from this configuration
 * into the specified [client].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClientConfig.install)
 */
- (void)installClient:(BPSDKKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));

/**
 * Installs the specified [plugin] and optionally configures it using the [configure] block.
 *
 * ```kotlin
 * val client = HttpClient {
 *     install(ContentNegotiation) {
 *         // configuration block
 *         json()
 *     }
 * }
 * ```
 *
 * If the plugin is already installed, the configuration block will be applied to the existing configuration class.
 *
 * Learn more from [Plugins](https://ktor.io/docs/http-client-plugins.html).
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClientConfig.install)
 */
- (void)installPlugin:(id<BPSDKKtor_client_coreHttpClientPlugin>)plugin configure:(void (^)(id))configure __attribute__((swift_name("install(plugin:configure:)")));

/**
 * Installs an interceptor defined by [block].
 * The [key] parameter is used as a unique name, that also prevents installing duplicated interceptors.
 *
 * If the [key] is already used, the new interceptor will replace the old one.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClientConfig.install)
 */
- (void)installKey:(NSString *)key block:(void (^)(BPSDKKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));

/**
 * Installs the plugin from the [other] client's configuration.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClientConfig.plusAssign)
 */
- (void)plusAssignOther:(BPSDKKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));

/**
 * Development mode is no longer required all functionality is enabled by default. The property is safe to remove.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClientConfig.developmentMode)
 */
@property BOOL developmentMode __attribute__((swift_name("developmentMode"))) __attribute__((deprecated("Development mode is no longer required. The property will be removed in the future.")));

/**
 * Terminates [HttpClient.receivePipeline] if the status code is not successful (>=300).
 * Learn more from [Response validation](https://ktor.io/docs/response-validation.html).
 *
 * For more details, see the [HttpCallValidator] documentation.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClientConfig.expectSuccess)
 */
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));

/**
 * Specifies whether the client redirects to URLs provided in the `Location` header.
 * You can disable redirections by setting this property to `false`.
 *
 * For an advanced redirection configuration, use the [HttpRedirect] plugin.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClientConfig.followRedirects)
 */
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));

/**
 * Enables body transformations for many common types like [String], [ByteArray], [ByteReadChannel], etc.
 * These transformations are applied to the request and response bodies.
 *
 * The transformers will be used when the response body is received with a type:
 * ```kotlin
 * val client = HttpClient()
 * val bytes = client.get("https://ktor.io")
 *                   .body<ByteArray>()
 * ```
 *
 * This flag is enabled by default.
 * You might want to disable it if you want to write your own transformers or handle body manually.
 *
 * For more details, see the [defaultTransformers] documentation.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClientConfig.useDefaultTransformers)
 */
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end

__attribute__((swift_name("KotlinFunction")))
@protocol BPSDKKotlinFunction
@required
@end

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol BPSDKKotlinSuspendFunction1 <BPSDKKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end


/**
 * FIDO assertion for payment intent authorization
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface PaymentIntentAssertion : BPSDKBase
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
 * Data class representing the authorize payment intent payload
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthorizePaymentIntentPayload.Companion")))
@interface AuthorizePaymentIntentPayloadCompanion : BPSDKBase
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
- (id<BPSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Data class representing screen dimensions
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface ScreenDimensions : BPSDKBase
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
 * Data class representing geolocation information
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface Geolocation : BPSDKBase
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
 * Data class representing integrity information
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface Integrity : BPSDKBase
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

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RiskSignals.Companion")))
@interface RiskSignalsCompanion : BPSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) RiskSignalsCompanion *shared __attribute__((swift_name("shared")));
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


/**
 * Enum representing the possible enrollment status values
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface EnrollmentStatus : BPSDKKotlinEnum<EnrollmentStatus *>
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
+ (BPSDKKotlinArray<EnrollmentStatus *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<EnrollmentStatus *> *entries __attribute__((swift_name("entries")));
@end


/**
 * Data class representing enrollment response details
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface EnrollmentResponseDetails : BPSDKBase
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
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/serialization/json/JsonElementSerializer))
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface BPSDKKotlinx_serialization_jsonJsonElement : BPSDKBase
@property (class, readonly, getter=companion) BPSDKKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * Enum representing the possible enrollment status reason code values
 * Based on Belvo API documentation: https://developers.belvo.com/apis/belvoopenapispec/enrollments-(brazil)/completeenrollmentredirectionbrazil
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface EnrollmentStatusReasonCode : BPSDKKotlinEnum<EnrollmentStatusReasonCode *>
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
+ (BPSDKKotlinArray<EnrollmentStatusReasonCode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<EnrollmentStatusReasonCode *> *entries __attribute__((swift_name("entries")));
@end


/**
 * Data class representing the enrollment response
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EnrollmentResponse.Companion")))
@interface EnrollmentResponseCompanion : BPSDKBase
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
- (id<BPSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Payment method details
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface PaymentMethodDetails : BPSDKBase
- (instancetype)initWithOpenFinanceBiometricPix:(OpenFinanceBiometricPixPaymentMethodDetails * _Nullable)openFinanceBiometricPix __attribute__((swift_name("init(openFinanceBiometricPix:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentMethodDetailsCompanion *companion __attribute__((swift_name("companion")));
- (PaymentMethodDetails *)doCopyOpenFinanceBiometricPix:(OpenFinanceBiometricPixPaymentMethodDetails * _Nullable)openFinanceBiometricPix __attribute__((swift_name("doCopy(openFinanceBiometricPix:)")));

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
 * Data class representing the create payment intent payload
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreatePaymentIntentPayload.Companion")))
@interface CreatePaymentIntentPayloadCompanion : BPSDKBase
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
- (id<BPSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Payment intent status enum
 * Based on Belvo API documentation - current values only
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface PaymentIntentStatus : BPSDKKotlinEnum<PaymentIntentStatus *>
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
+ (BPSDKKotlinArray<PaymentIntentStatus *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PaymentIntentStatus *> *entries __attribute__((swift_name("entries")));
@end


/**
 * Payment method information
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface PaymentMethodInformation : BPSDKBase
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
 * Data class representing a charge in a payment intent
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface Charge : BPSDKBase
- (instancetype)initWithId:(NSString *)id amount:(NSString *)amount createdAt:(NSString *)createdAt createdBy:(NSString *)createdBy currency:(NSString *)currency customer:(NSString *)customer description:(NSString * _Nullable)description statementDescription:(NSString * _Nullable)statementDescription failureCode:(NSString * _Nullable)failureCode failureMessage:(NSString * _Nullable)failureMessage metadata:(NSDictionary<NSString *, BPSDKKotlinx_serialization_jsonJsonElement *> * _Nullable)metadata paymentIntent:(NSString *)paymentIntent paymentMethodDetails:(PaymentMethodDetails * _Nullable)paymentMethodDetails paymentMethodInformation:(PaymentMethodInformation * _Nullable)paymentMethodInformation paymentMethodType:(NSString * _Nullable)paymentMethodType payerInformation:(NSDictionary<NSString *, BPSDKKotlinx_serialization_jsonJsonElement *> * _Nullable)payerInformation provider:(NSString * _Nullable)provider status:(ChargeStatus *)status updatedAt:(NSString *)updatedAt transactions:(NSArray<NSDictionary<NSString *, BPSDKKotlinx_serialization_jsonJsonElement *> *> * _Nullable)transactions __attribute__((swift_name("init(id:amount:createdAt:createdBy:currency:customer:description:statementDescription:failureCode:failureMessage:metadata:paymentIntent:paymentMethodDetails:paymentMethodInformation:paymentMethodType:payerInformation:provider:status:updatedAt:transactions:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ChargeCompanion *companion __attribute__((swift_name("companion")));
- (Charge *)doCopyId:(NSString *)id amount:(NSString *)amount createdAt:(NSString *)createdAt createdBy:(NSString *)createdBy currency:(NSString *)currency customer:(NSString *)customer description:(NSString * _Nullable)description statementDescription:(NSString * _Nullable)statementDescription failureCode:(NSString * _Nullable)failureCode failureMessage:(NSString * _Nullable)failureMessage metadata:(NSDictionary<NSString *, BPSDKKotlinx_serialization_jsonJsonElement *> * _Nullable)metadata paymentIntent:(NSString *)paymentIntent paymentMethodDetails:(PaymentMethodDetails * _Nullable)paymentMethodDetails paymentMethodInformation:(PaymentMethodInformation * _Nullable)paymentMethodInformation paymentMethodType:(NSString * _Nullable)paymentMethodType payerInformation:(NSDictionary<NSString *, BPSDKKotlinx_serialization_jsonJsonElement *> * _Nullable)payerInformation provider:(NSString * _Nullable)provider status:(ChargeStatus *)status updatedAt:(NSString *)updatedAt transactions:(NSArray<NSDictionary<NSString *, BPSDKKotlinx_serialization_jsonJsonElement *> *> * _Nullable)transactions __attribute__((swift_name("doCopy(id:amount:createdAt:createdBy:currency:customer:description:statementDescription:failureCode:failureMessage:metadata:paymentIntent:paymentMethodDetails:paymentMethodInformation:paymentMethodType:payerInformation:provider:status:updatedAt:transactions:)")));

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
@property (readonly) NSDictionary<NSString *, BPSDKKotlinx_serialization_jsonJsonElement *> * _Nullable metadata __attribute__((swift_name("metadata")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="payer_information")
*/
@property (readonly) NSDictionary<NSString *, BPSDKKotlinx_serialization_jsonJsonElement *> * _Nullable payerInformation __attribute__((swift_name("payerInformation")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="payment_intent")
*/
@property (readonly) NSString *paymentIntent __attribute__((swift_name("paymentIntent")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="payment_method_details")
*/
@property (readonly) PaymentMethodDetails * _Nullable paymentMethodDetails __attribute__((swift_name("paymentMethodDetails")));

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
@property (readonly) NSArray<NSDictionary<NSString *, BPSDKKotlinx_serialization_jsonJsonElement *> *> * _Nullable transactions __attribute__((swift_name("transactions")));

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
@interface PaymentIntentCompanion : BPSDKBase
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
- (id<BPSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Data class representing a bank account in Brazil
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BankAccount.Companion")))
@interface BankAccountCompanion : BPSDKBase
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
- (id<BPSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Data class representing customer information
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Customer.Companion")))
@interface CustomerCompanion : BPSDKBase
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
- (id<BPSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface RelyingParty : BPSDKBase
- (instancetype)initWithId:(NSString *)id name:(NSString *)name __attribute__((swift_name("init(id:name:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) RelyingPartyCompanion *companion __attribute__((swift_name("companion")));
- (RelyingParty *)doCopyId:(NSString *)id name:(NSString *)name __attribute__((swift_name("doCopy(id:name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface User : BPSDKBase
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


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface PublicKeyCredentialParameters : BPSDKBase
- (instancetype)initWithAlg:(int32_t)alg type:(NSString *)type __attribute__((swift_name("init(alg:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PublicKeyCredentialParametersCompanion *companion __attribute__((swift_name("companion")));
- (PublicKeyCredentialParameters *)doCopyAlg:(int32_t)alg type:(NSString *)type __attribute__((swift_name("doCopy(alg:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t alg __attribute__((swift_name("alg")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface ExcludeCredential : BPSDKBase
- (instancetype)initWithId:(NSString *)id type:(NSString *)type __attribute__((swift_name("init(id:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ExcludeCredentialCompanion *companion __attribute__((swift_name("companion")));
- (ExcludeCredential *)doCopyId:(NSString *)id type:(NSString *)type __attribute__((swift_name("doCopy(id:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface AuthenticatorSelection : BPSDKBase
- (instancetype)initWithAuthenticatorAttachment:(NSString * _Nullable)authenticatorAttachment userVerification:(NSString * _Nullable)userVerification requireResidentKey:(BPSDKBoolean * _Nullable)requireResidentKey residentKey:(NSString * _Nullable)residentKey __attribute__((swift_name("init(authenticatorAttachment:userVerification:requireResidentKey:residentKey:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AuthenticatorSelectionCompanion *companion __attribute__((swift_name("companion")));
- (AuthenticatorSelection *)doCopyAuthenticatorAttachment:(NSString * _Nullable)authenticatorAttachment userVerification:(NSString * _Nullable)userVerification requireResidentKey:(BPSDKBoolean * _Nullable)requireResidentKey residentKey:(NSString * _Nullable)residentKey __attribute__((swift_name("doCopy(authenticatorAttachment:userVerification:requireResidentKey:residentKey:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable authenticatorAttachment __attribute__((swift_name("authenticatorAttachment")));
@property (readonly) BPSDKBoolean * _Nullable requireResidentKey __attribute__((swift_name("requireResidentKey")));
@property (readonly) NSString * _Nullable residentKey __attribute__((swift_name("residentKey")));
@property (readonly) NSString * _Nullable userVerification __attribute__((swift_name("userVerification")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FidoRegistrationOptions.Companion")))
@interface FidoRegistrationOptionsCompanion : BPSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FidoRegistrationOptionsCompanion *shared __attribute__((swift_name("shared")));
- (id<BPSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Institution type enum
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstitutionQueryParameters.InstitutionType")))
@interface InstitutionQueryParametersInstitutionType : BPSDKKotlinEnum<InstitutionQueryParametersInstitutionType *>
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Institution type enum
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) InstitutionQueryParametersInstitutionType *individual __attribute__((swift_name("individual")));
@property (class, readonly) InstitutionQueryParametersInstitutionType *business __attribute__((swift_name("business")));
+ (BPSDKKotlinArray<InstitutionQueryParametersInstitutionType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<InstitutionQueryParametersInstitutionType *> *entries __attribute__((swift_name("entries")));
@end


/**
 * Data class representing payment method status information
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface PaymentMethodStatus : BPSDKBase
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
 * Data class representing a payment institution in Brazil
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Institution.Companion")))
@interface InstitutionCompanion : BPSDKBase
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
- (id<BPSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol BPSDKKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol BPSDKKotlinx_coroutines_coreChildHandle <BPSDKKotlinx_coroutines_coreDisposableHandle>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (BOOL)childCancelledCause:(BPSDKKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
@property (readonly) id<BPSDKKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol BPSDKKotlinx_coroutines_coreChildJob <BPSDKKotlinx_coroutines_coreJob>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (void)parentCancelledParentJob:(id<BPSDKKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end

__attribute__((swift_name("KotlinSequence")))
@protocol BPSDKKotlinSequence
@required
- (id<BPSDKKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause")))
@protocol BPSDKKotlinx_coroutines_coreSelectClause
@required
@property (readonly) id clauseObject __attribute__((swift_name("clauseObject")));
@property (readonly) BPSDKKotlinUnit *(^(^ _Nullable onCancellationConstructor)(id<BPSDKKotlinx_coroutines_coreSelectInstance>, id _Nullable, id _Nullable))(BPSDKKotlinThrowable *, id _Nullable, id<BPSDKKotlinCoroutineContext>) __attribute__((swift_name("onCancellationConstructor")));
@property (readonly) id _Nullable (^processResFunc)(id, id _Nullable, id _Nullable) __attribute__((swift_name("processResFunc")));
@property (readonly) void (^regFunc)(id, id<BPSDKKotlinx_coroutines_coreSelectInstance>, id _Nullable) __attribute__((swift_name("regFunc")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol BPSDKKotlinx_coroutines_coreSelectClause0 <BPSDKKotlinx_coroutines_coreSelectClause>
@required
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol BPSDKKotlinCoroutineContextKey
@required
@end


/**
 * WebAuthn attestation response (for registration)
 * Following the WebAuthn spec, id and rawId are kept as separate properties
 * even though they contain the same value in this implementation
 */
__attribute__((objc_subclassing_restricted))
@interface AttestationResponse : BPSDKBase
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
 * WebAuthn assertion response (for authentication)
 * Following the WebAuthn spec, id and rawId are kept as separate properties
 * even though they contain the same value in this implementation
 */
__attribute__((objc_subclassing_restricted))
@interface AssertionResponse : BPSDKBase
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

__attribute__((swift_name("KotlinIterator")))
@protocol BPSDKKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end


/**
 * Represents a single API error item
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BelvoApiErrorItem.Companion")))
@interface BelvoApiErrorItemCompanion : BPSDKBase
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
- (id<BPSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Base configuration for [HttpClientEngine].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.engine.HttpClientEngineConfig)
 */
__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface BPSDKKtor_client_coreHttpClientEngineConfig : BPSDKBase

/**
 * Base configuration for [HttpClientEngine].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.engine.HttpClientEngineConfig)
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * Base configuration for [HttpClientEngine].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.engine.HttpClientEngineConfig)
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * Allow specifying the coroutine dispatcher to use for IO operations.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.engine.HttpClientEngineConfig.dispatcher)
 */
@property BPSDKKotlinx_coroutines_coreCoroutineDispatcher * _Nullable dispatcher __attribute__((swift_name("dispatcher")));

/**
 * Enables HTTP pipelining advice.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.engine.HttpClientEngineConfig.pipelining)
 */
@property BOOL pipelining __attribute__((swift_name("pipelining")));

/**
 * Specifies a proxy address to use.
 * Uses a system proxy by default.
 *
 * You can learn more from [Proxy](https://ktor.io/docs/proxy.html).
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.engine.HttpClientEngineConfig.proxy)
 */
@property BPSDKKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));

/**
 * Specifies network threads count advice.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.engine.HttpClientEngineConfig.threadsCount)
 */
@property int32_t threadsCount __attribute__((swift_name("threadsCount"))) __attribute__((unavailable("The [threadsCount] property is deprecated. Consider setting [dispatcher] instead.")));
@end


/**
 * Represents a capability that an [HttpClientEngine] can support, with [T] representing the type
 * of configuration or metadata associated with the capability.
 *
 * Capabilities are used to declare optional features or behaviors that an engine may support,
 * such as WebSocket communication, HTTP/2, or custom timeouts. They enable plugins and request
 * builders to configure engine-specific functionality by associating a capability with a
 * specific configuration.
 *
 * Capabilities can be set on a per-request basis using the `HttpRequestBuilder.setCapability` method,
 * allowing users to configure engine-specific behavior for individual requests.
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.engine.HttpClientEngineCapability)
 *
 * @param T The type of the configuration or metadata associated with this capability.
 *
 * Example:
 * Suppose you have a custom capability for WebSocket support that requires a specific configuration:
 * ```kotlin
 * object WebSocketCapability : HttpClientEngineCapability<WebSocketConfig>
 *
 * data class WebSocketConfig(val maxFrameSize: Int, val pingIntervalMillis: Long)
 * ```
 *
 * Setting a capability in a request:
 * ```kotlin
 * client.request {
 *     setCapability(WebSocketCapability, WebSocketConfig(
 *         maxFrameSize = 65536,
 *         pingIntervalMillis = 30000
 *     ))
 * }
 * ```
 *
 * Engine Example:
 * A custom engine implementation can declare support for specific capabilities in its `supportedCapabilities` property:
 * ```kotlin
 * override val supportedCapabilities: Set<HttpClientEngineCapability<*>> = setOf(WebSocketCapability)
 * ```
 *
 * Plugin Integration Example:
 * Plugins use capabilities to interact with engine-specific features. For example:
 * ```kotlin
 * if (engine.supportedCapabilities.contains(WebSocketCapability)) {
 *     // Configure WebSocket behavior if supported by the engine
 * }
 * ```
 *
 * When creating a custom capability:
 * - Define a singleton object implementing `HttpClientEngineCapability`.
 * - Use the type parameter [T] to provide the associated configuration type or metadata.
 * - Ensure that engines supporting the capability handle the associated configuration properly.
 */
__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol BPSDKKtor_client_coreHttpClientEngineCapability
@required
@end


/**
 * Map of attributes accessible by [AttributeKey] in a typed manner
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.Attributes)
 */
__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol BPSDKKtor_utilsAttributes
@required

/**
 * Gets a value of the attribute for the specified [key], or calls supplied [block] to compute its value
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.Attributes.computeIfAbsent)
 */
- (id)computeIfAbsentKey:(BPSDKKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));

/**
 * Checks if an attribute with the specified [key] exists
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.Attributes.contains)
 */
- (BOOL)containsKey:(BPSDKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));

/**
 * Gets a value of the attribute for the specified [key], or throws an exception if an attribute doesn't exist
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.Attributes.get)
 */
- (id)getKey_:(BPSDKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key_:)")));

/**
 * Gets a value of the attribute for the specified [key], or return `null` if an attribute doesn't exist
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.Attributes.getOrNull)
 */
- (id _Nullable)getOrNullKey:(BPSDKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));

/**
 * Creates or changes an attribute with the specified [key] using [value]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.Attributes.put)
 */
- (void)putKey:(BPSDKKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));

/**
 * Removes an attribute with the specified [key]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.Attributes.remove)
 */
- (void)removeKey:(BPSDKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key:)")));

/**
 * Creates or changes an attribute with the specified [key] using [value]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.Attributes.set)
 */
- (void)setKey:(BPSDKKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("set(key:value:)")));

/**
 * Removes an attribute with the specified [key] and returns its current value, throws an exception if an attribute doesn't exist
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.Attributes.take)
 */
- (id)takeKey:(BPSDKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));

/**
 * Removes an attribute with the specified [key] and returns its current value, returns `null` if an attribute doesn't exist
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.Attributes.takeOrNull)
 */
- (id _Nullable)takeOrNullKey:(BPSDKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));

/**
 * Returns [List] of all [AttributeKey] instances in this map
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.Attributes.allKeys)
 */
@property (readonly) NSArray<BPSDKKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_eventsEvents")))
@interface BPSDKKtor_eventsEvents : BPSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * Raises the event specified by [definition] with the [value] and calls all handlers.
 *
 * Handlers are called in order of subscriptions.
 * If some handler throws an exception, all remaining handlers will still run. The exception will eventually be re-thrown.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.events.Events.raise)
 */
- (void)raiseDefinition:(BPSDKKtor_eventsEventDefinition<id> *)definition value:(id _Nullable)value __attribute__((swift_name("raise(definition:value:)")));

/**
 * Subscribe [handler] to an event specified by [definition]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.events.Events.subscribe)
 */
- (id<BPSDKKotlinx_coroutines_coreDisposableHandle>)subscribeDefinition:(BPSDKKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("subscribe(definition:handler:)")));

/**
 * Unsubscribe [handler] from an event specified by [definition]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.events.Events.unsubscribe)
 */
- (void)unsubscribeDefinition:(BPSDKKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("unsubscribe(definition:handler:)")));
@end


/**
 * Represents an execution pipeline for asynchronous extensible computations
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.Pipeline)
 */
__attribute__((swift_name("Ktor_utilsPipeline")))
@interface BPSDKKtor_utilsPipeline<TSubject, TContext> : BPSDKBase
- (instancetype)initWithPhases:(BPSDKKotlinArray<BPSDKKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(BPSDKKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<BPSDKKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));

/**
 * Adds [phase] to the end of this pipeline
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.Pipeline.addPhase)
 */
- (void)addPhasePhase:(BPSDKKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));

/**
 * Invoked after an interceptor has been installed
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.Pipeline.afterIntercepted)
 */
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 * Executes this pipeline in the given [context] and with the given [subject]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.Pipeline.execute)
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));

/**
 * Inserts [phase] after the [reference] phase. If there are other phases inserted after [reference], then [phase]
 * will be inserted after them.
 * Example:
 * ```
 * val pipeline = Pipeline<String, String>(a)
 * pipeline.insertPhaseAfter(a, b)
 * pipeline.insertPhaseAfter(a, c)
 * assertEquals(listOf(a, b, c), pipeline.items)
 * ```
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.Pipeline.insertPhaseAfter)
 */
- (void)insertPhaseAfterReference:(BPSDKKtor_utilsPipelinePhase *)reference phase:(BPSDKKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));

/**
 * Inserts [phase] before the [reference] phase.
 * Example:
 * ```
 * val pipeline = Pipeline<String, String>(c)
 * pipeline.insertPhaseBefore(c, a)
 * pipeline.insertPhaseBefore(c, b)
 * assertEquals(listOf(a, b, c), pipeline.items)
 * ```
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.Pipeline.insertPhaseBefore)
 */
- (void)insertPhaseBeforeReference:(BPSDKKtor_utilsPipelinePhase *)reference phase:(BPSDKKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));

/**
 * Adds [block] to the [phase] of this pipeline
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.Pipeline.intercept)
 */
- (void)interceptPhase:(BPSDKKtor_utilsPipelinePhase *)phase block:(id<BPSDKKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (NSArray<id<BPSDKKotlinSuspendFunction2>> *)interceptorsForPhasePhase:(BPSDKKtor_utilsPipelinePhase *)phase __attribute__((swift_name("interceptorsForPhase(phase:)")));

/**
 * Merges another pipeline into this pipeline, maintaining relative phases order
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.Pipeline.merge)
 */
- (void)mergeFrom:(BPSDKKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
- (void)mergePhasesFrom:(BPSDKKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("mergePhases(from:)")));

/**
 * Reset current pipeline from other.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.Pipeline.resetFrom)
 */
- (void)resetFromFrom:(BPSDKKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("resetFrom(from:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * Provides common place to store pipeline attributes
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.Pipeline.attributes)
 */
@property (readonly) id<BPSDKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));

/**
 * Indicated if debug mode is enabled. In debug mode users will get more details in the stacktrace.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.Pipeline.developmentMode)
 */
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));

/**
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.Pipeline.isEmpty)
 *
 * @return `true` if there are no interceptors installed regardless number of phases
 */
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));

/**
 * Phases of this pipeline
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.Pipeline.items)
 */
@property (readonly) NSArray<BPSDKKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end


/**
 * [HttpClient] Pipeline used for receiving [HttpResponse] without any processing.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpReceivePipeline)
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface BPSDKKtor_client_coreHttpReceivePipeline : BPSDKKtor_utilsPipeline<BPSDKKtor_client_coreHttpResponse *, BPSDKKotlinUnit *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(BPSDKKotlinArray<BPSDKKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(BPSDKKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<BPSDKKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) BPSDKKtor_client_coreHttpReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end


/**
 * An [HttpClient]'s pipeline used for executing [HttpRequest].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestPipeline)
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface BPSDKKtor_client_coreHttpRequestPipeline : BPSDKKtor_utilsPipeline<id, BPSDKKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(BPSDKKotlinArray<BPSDKKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(BPSDKKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<BPSDKKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) BPSDKKtor_client_coreHttpRequestPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end


/**
 * [HttpClient] Pipeline used for executing [HttpResponse].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponsePipeline)
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface BPSDKKtor_client_coreHttpResponsePipeline : BPSDKKtor_utilsPipeline<BPSDKKtor_client_coreHttpResponseContainer *, BPSDKKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(BPSDKKotlinArray<BPSDKKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(BPSDKKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<BPSDKKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) BPSDKKtor_client_coreHttpResponsePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end


/**
 * An [HttpClient]'s pipeline used for sending [HttpRequest] to a remote server.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpSendPipeline)
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface BPSDKKtor_client_coreHttpSendPipeline : BPSDKKtor_utilsPipeline<id, BPSDKKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(BPSDKKotlinArray<BPSDKKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(BPSDKKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<BPSDKKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) BPSDKKtor_client_coreHttpSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end


/**
 * Provides data structure for associating a [String] with a [List] of Strings
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.StringValues)
 */
__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol BPSDKKtor_utilsStringValues
@required

/**
 * Checks if the given [name] exists in the map
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.StringValues.contains)
 */
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));

/**
 * Checks if the given [name] and [value] pair exists in the map
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.StringValues.contains)
 */
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));

/**
 * Gets all entries from the map
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.StringValues.entries)
 */
- (NSSet<id<BPSDKKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));

/**
 * Iterates over all entries in this map and calls [body] for each pair
 *
 * Can be optimized in implementations
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.StringValues.forEach)
 */
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));

/**
 * Gets first value from the list of values associated with a [name], or null if the name is not present
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.StringValues.get)
 */
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));

/**
 * Gets all values associated with the [name], or null if the name is not present
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.StringValues.getAll)
 */
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));

/**
 * Checks if this map is empty
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.StringValues.isEmpty)
 */
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));

/**
 * Gets all names from the map
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.StringValues.names)
 */
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));

/**
 * Specifies if map has case-sensitive or case-insensitive names
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.StringValues.caseInsensitiveName)
 */
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end


/**
 * Represents HTTP headers as a map from case-insensitive names to collection of [String] values
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.Headers)
 */
__attribute__((swift_name("Ktor_httpHeaders")))
@protocol BPSDKKtor_httpHeaders <BPSDKKtor_utilsStringValues>
@required
@end


/**
 * A pair of a [request] and [response] for a specific [HttpClient].
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.call.HttpClientCall)
 *
 * @property client the client that executed the call.
 */
__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface BPSDKKtor_client_coreHttpClientCall : BPSDKBase <BPSDKKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithClient:(BPSDKKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithClient:(BPSDKKtor_client_coreHttpClient *)client requestData:(BPSDKKtor_client_coreHttpRequestData *)requestData responseData:(BPSDKKtor_client_coreHttpResponseData *)responseData __attribute__((swift_name("init(client:requestData:responseData:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BPSDKKtor_client_coreHttpClientCallCompanion *companion __attribute__((swift_name("companion")));

/**
 * Tries to receive the payload of the [response] as a specific expected type provided in [info].
 * Returns [response] if [info] corresponds to [HttpResponse].
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.call.HttpClientCall.body)
 *
 * @throws NoTransformationFoundException If no transformation is found for the type [info].
 * @throws DoubleReceiveException If already called [body].
 * @throws NullPointerException If content is `null`.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyInfo:(BPSDKKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("body(info:completionHandler:)")));

/**
 * Tries to receive the payload of the [response] as a specific expected type provided in [info].
 * Returns [response] if [info] corresponds to [HttpResponse].
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.call.HttpClientCall.bodyNullable)
 *
 * @throws NoTransformationFoundException If no transformation is found for the type [info].
 * @throws DoubleReceiveException If already called [body].
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyNullableInfo:(BPSDKKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("bodyNullable(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)getResponseContentWithCompletionHandler:(void (^)(id<BPSDKKtor_ioByteReadChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResponseContent(completionHandler:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL allowDoubleReceive __attribute__((swift_name("allowDoubleReceive")));

/**
 * Typed [Attributes] associated to this call serving as a lightweight container.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.call.HttpClientCall.attributes)
 */
@property (readonly) id<BPSDKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BPSDKKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@property (readonly) id<BPSDKKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));

/**
 * The [request] sent by the client.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.call.HttpClientCall.request)
 */
@property id<BPSDKKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));

/**
 * The [response] sent by the server.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.call.HttpClientCall.response)
 */
@property BPSDKKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@end


/**
 * Channel for asynchronous reading of sequences of bytes.
 * This is a **single-reader channel**.
 *
 * Operations on this channel cannot be invoked concurrently.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.utils.io.ByteReadChannel)
 */
__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol BPSDKKtor_ioByteReadChannel
@required

/**
 * Suspend the channel until it has [min] bytes or gets closed. Throws exception if the channel was closed with an
 * error. If there are bytes available in the channel, this function returns immediately.
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.utils.io.ByteReadChannel.awaitContent)
 *
 * @return return `false` eof is reached, otherwise `true`.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitContentMin:(int32_t)min completionHandler:(void (^)(BPSDKBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("awaitContent(min:completionHandler:)")));
- (void)cancelCause_:(BPSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));
@property (readonly) BPSDKKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) id<BPSDKKotlinx_io_coreSource> readBuffer __attribute__((swift_name("readBuffer")));
@end


/**
 * Date in GMT timezone
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.date.GMTDate)
 *
 * @property seconds: seconds from 0 to 60(last is for leap second)
 * @property minutes: minutes from 0 to 59
 * @property hours: hours from 0 to 23
 * @property dayOfWeek an instance of the corresponding day of week
 * @property dayOfMonth: day of month from 1 to 31
 * @property dayOfYear: day of year from 1 to 366
 * @property month an instance of the corresponding month
 * @property year: year in common era(CE: https://en.wikipedia.org/wiki/Common_Era)
 *
 * @property timestamp is a number of epoch milliseconds
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface BPSDKKtor_utilsGMTDate : BPSDKBase <BPSDKKotlinComparable>
- (instancetype)initWithSeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(BPSDKKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(BPSDKKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("init(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BPSDKKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(BPSDKKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (BPSDKKtor_utilsGMTDate *)doCopy __attribute__((swift_name("doCopy()")));
- (BPSDKKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(BPSDKKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(BPSDKKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));

/**
 * Date in GMT timezone
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.date.GMTDate)
 *
 * @property seconds: seconds from 0 to 60(last is for leap second)
 * @property minutes: minutes from 0 to 59
 * @property hours: hours from 0 to 23
 * @property dayOfWeek an instance of the corresponding day of week
 * @property dayOfMonth: day of month from 1 to 31
 * @property dayOfYear: day of year from 1 to 366
 * @property month an instance of the corresponding month
 * @property year: year in common era(CE: https://en.wikipedia.org/wiki/Common_Era)
 *
 * @property timestamp is a number of epoch milliseconds
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Date in GMT timezone
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.date.GMTDate)
 *
 * @property seconds: seconds from 0 to 60(last is for leap second)
 * @property minutes: minutes from 0 to 59
 * @property hours: hours from 0 to 23
 * @property dayOfWeek an instance of the corresponding day of week
 * @property dayOfMonth: day of month from 1 to 31
 * @property dayOfYear: day of year from 1 to 366
 * @property month an instance of the corresponding month
 * @property year: year in common era(CE: https://en.wikipedia.org/wiki/Common_Era)
 *
 * @property timestamp is a number of epoch milliseconds
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Date in GMT timezone
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.date.GMTDate)
 *
 * @property seconds: seconds from 0 to 60(last is for leap second)
 * @property minutes: minutes from 0 to 59
 * @property hours: hours from 0 to 23
 * @property dayOfWeek an instance of the corresponding day of week
 * @property dayOfMonth: day of month from 1 to 31
 * @property dayOfYear: day of year from 1 to 366
 * @property month an instance of the corresponding month
 * @property year: year in common era(CE: https://en.wikipedia.org/wiki/Common_Era)
 *
 * @property timestamp is a number of epoch milliseconds
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) BPSDKKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) BPSDKKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end


/**
 * Represents an HTTP status code and description.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpStatusCode)
 *
 * @param value is a numeric code.
 * @param description is free form description of a status.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface BPSDKKtor_httpHttpStatusCode : BPSDKBase <BPSDKKotlinComparable>
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BPSDKKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(BPSDKKtor_httpHttpStatusCode *)other __attribute__((swift_name("compareTo(other:)")));
- (BPSDKKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));

/**
 * Returns a copy of `this` code with a description changed to [value].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpStatusCode.description)
 */
- (BPSDKKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end


/**
 * Represents an HTTP protocol version.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpProtocolVersion)
 *
 * @property name specifies name of the protocol, e.g. "HTTP".
 * @property major specifies protocol major version.
 * @property minor specifies protocol minor version.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface BPSDKKtor_httpHttpProtocolVersion : BPSDKBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BPSDKKtor_httpHttpProtocolVersionCompanion *companion __attribute__((swift_name("companion")));
- (BPSDKKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));

/**
 * Represents an HTTP protocol version.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpProtocolVersion)
 *
 * @property name specifies name of the protocol, e.g. "HTTP".
 * @property major specifies protocol major version.
 * @property minor specifies protocol minor version.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Represents an HTTP protocol version.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpProtocolVersion)
 *
 * @property name specifies name of the protocol, e.g. "HTTP".
 * @property major specifies protocol major version.
 * @property minor specifies protocol minor version.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end


/**
 * Generic data class representing a paginated API response
 *
 * @param T The type of items in the results list
 */
__attribute__((objc_subclassing_restricted))
@interface PaginatedResponseCompanion : BPSDKBase
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
- (id<BPSDKKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(BPSDKKotlinArray<id<BPSDKKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));

/**
 * Generic data class representing a paginated API response
 *
 * @param T The type of items in the results list
 */
- (id<BPSDKKotlinx_serialization_coreKSerializer>)serializerTypeSerial0:(id<BPSDKKotlinx_serialization_coreKSerializer>)typeSerial0 __attribute__((swift_name("serializer(typeSerial0:)")));
@end


/**
 * Data class representing the payload for completing enrollment after redirection
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CompleteEnrollmentPayload.Companion")))
@interface CompleteEnrollmentPayloadCompanion : BPSDKBase
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
- (id<BPSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Data class representing the confirmation data for enrollment
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface ConfirmationData : BPSDKBase
- (instancetype)initWithAuthenticatorAttachment:(NSString *)authenticatorAttachment id:(NSString *)id rawId:(NSString *)rawId response:(ConfirmationResponse *)response type:(NSString *)type clientExtensionResults:(NSDictionary<NSString *, BPSDKKotlinx_serialization_jsonJsonElement *> *)clientExtensionResults __attribute__((swift_name("init(authenticatorAttachment:id:rawId:response:type:clientExtensionResults:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) ConfirmationDataCompanion *companion __attribute__((swift_name("companion")));
- (ConfirmationData *)doCopyAuthenticatorAttachment:(NSString *)authenticatorAttachment id:(NSString *)id rawId:(NSString *)rawId response:(ConfirmationResponse *)response type:(NSString *)type clientExtensionResults:(NSDictionary<NSString *, BPSDKKotlinx_serialization_jsonJsonElement *> *)clientExtensionResults __attribute__((swift_name("doCopy(authenticatorAttachment:id:rawId:response:type:clientExtensionResults:)")));

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
@property (readonly) NSDictionary<NSString *, BPSDKKotlinx_serialization_jsonJsonElement *> *clientExtensionResults __attribute__((swift_name("clientExtensionResults")));
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
 * Data class representing the payload for confirming enrollment
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EnrollmentConfirmationPayload.Companion")))
@interface EnrollmentConfirmationPayloadCompanion : BPSDKBase
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
- (id<BPSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Data class representing enrollment details
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface EnrollmentPayloadDetails : BPSDKBase
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
 * Data class representing the enrollment payload
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EnrollmentPayload.Companion")))
@interface EnrollmentPayloadCompanion : BPSDKBase
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
- (id<BPSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Actual data of the [HttpRequest], including [url], [method], [headers], [body] and [executionContext].
 * Built by [HttpRequestBuilder].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestData)
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface BPSDKKtor_client_coreHttpRequestData : BPSDKBase
- (instancetype)initWithUrl:(BPSDKKtor_httpUrl *)url method:(BPSDKKtor_httpHttpMethod *)method headers:(id<BPSDKKtor_httpHeaders>)headers body:(BPSDKKtor_httpOutgoingContent *)body executionContext:(id<BPSDKKotlinx_coroutines_coreJob>)executionContext attributes:(id<BPSDKKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));

/**
 * Retrieve extension by its key.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestData.getCapabilityOrNull)
 */
- (id _Nullable)getCapabilityOrNullKey:(id<BPSDKKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<BPSDKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BPSDKKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<BPSDKKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<BPSDKKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) BPSDKKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) BPSDKKtor_httpUrl *url __attribute__((swift_name("url")));
@end


/**
 * Data prepared for [HttpResponse].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpResponseData)
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface BPSDKKtor_client_coreHttpResponseData : BPSDKBase
- (instancetype)initWithStatusCode:(BPSDKKtor_httpHttpStatusCode *)statusCode requestTime:(BPSDKKtor_utilsGMTDate *)requestTime headers:(id<BPSDKKtor_httpHeaders>)headers version:(BPSDKKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<BPSDKKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<BPSDKKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<BPSDKKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) BPSDKKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) BPSDKKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) BPSDKKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) BPSDKKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface BPSDKKotlinAbstractCoroutineContextElement : BPSDKBase <BPSDKKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<BPSDKKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<BPSDKKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol BPSDKKotlinContinuationInterceptor <BPSDKKotlinCoroutineContextElement>
@required
- (id<BPSDKKotlinContinuation>)interceptContinuationContinuation:(id<BPSDKKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<BPSDKKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface BPSDKKotlinx_coroutines_coreCoroutineDispatcher : BPSDKKotlinAbstractCoroutineContextElement <BPSDKKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<BPSDKKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) BPSDKKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<BPSDKKotlinCoroutineContext>)context block:(id<BPSDKKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (void)dispatchYieldContext:(id<BPSDKKotlinCoroutineContext>)context block:(id<BPSDKKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<BPSDKKotlinContinuation>)interceptContinuationContinuation:(id<BPSDKKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<BPSDKKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (BPSDKKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism name:(NSString * _Nullable)name __attribute__((swift_name("limitedParallelism(parallelism:name:)")));
- (BPSDKKotlinx_coroutines_coreCoroutineDispatcher *)plusOther_:(BPSDKKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<BPSDKKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * Base interface representing a [HttpClient] plugin.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.plugins.HttpClientPlugin)
 */
__attribute__((swift_name("Ktor_client_coreHttpClientPlugin")))
@protocol BPSDKKtor_client_coreHttpClientPlugin
@required

/**
 * Installs the [plugin] class for a [HttpClient] defined at [scope].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.plugins.HttpClientPlugin.install)
 */
- (void)installPlugin:(id)plugin scope:(BPSDKKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(plugin:scope:)")));

/**
 * Builds a [TPlugin] by calling the [block] with a [TConfig] config instance as receiver.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.plugins.HttpClientPlugin.prepare)
 */
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));

/**
 * The [AttributeKey] for this plugin.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.plugins.HttpClientPlugin.key)
 */
@property (readonly) BPSDKKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end


/**
 * Assertion response data
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface PaymentIntentAssertionResponse : BPSDKBase
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
 * FIDO assertion for payment intent authorization
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentIntentAssertion.Companion")))
@interface PaymentIntentAssertionCompanion : BPSDKBase
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
- (id<BPSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
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


/**
 * Data class representing screen dimensions
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScreenDimensions.Companion")))
@interface ScreenDimensionsCompanion : BPSDKBase
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
- (id<BPSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Data class representing geolocation information
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Geolocation.Companion")))
@interface GeolocationCompanion : BPSDKBase
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
- (id<BPSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Data class representing integrity information
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Integrity.Companion")))
@interface IntegrityCompanion : BPSDKBase
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
- (id<BPSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface BPSDKKotlinEnumCompanion : BPSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BPSDKKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end


/**
 * Enum representing the possible enrollment status values
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EnrollmentStatus.Companion")))
@interface EnrollmentStatusCompanion : BPSDKBase
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
- (id<BPSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));

/**
 * Enum representing the possible enrollment status values
 */
- (id<BPSDKKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(BPSDKKotlinArray<id<BPSDKKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * Enum representing the possible enrollment details status values
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface EnrollmentDetailsStatus : BPSDKKotlinEnum<EnrollmentDetailsStatus *>
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
+ (BPSDKKotlinArray<EnrollmentDetailsStatus *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<EnrollmentDetailsStatus *> *entries __attribute__((swift_name("entries")));
@end


/**
 * Data class representing enrollment response details
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EnrollmentResponseDetails.Companion")))
@interface EnrollmentResponseDetailsCompanion : BPSDKBase
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
- (id<BPSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
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


/**
 * Enum representing the possible enrollment status reason code values
 * Based on Belvo API documentation: https://developers.belvo.com/apis/belvoopenapispec/enrollments-(brazil)/completeenrollmentredirectionbrazil
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EnrollmentStatusReasonCode.Companion")))
@interface EnrollmentStatusReasonCodeCompanion : BPSDKBase
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
- (id<BPSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));

/**
 * Enum representing the possible enrollment status reason code values
 * Based on Belvo API documentation: https://developers.belvo.com/apis/belvoopenapispec/enrollments-(brazil)/completeenrollmentredirectionbrazil
 */
- (id<BPSDKKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(BPSDKKotlinArray<id<BPSDKKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * Open Finance Biometric PIX payment method details
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface OpenFinanceBiometricPixPaymentMethodDetails : BPSDKBase
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
 * Payment method details
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentMethodDetails.Companion")))
@interface PaymentMethodDetailsCompanion : BPSDKBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Payment method details
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentMethodDetailsCompanion *shared __attribute__((swift_name("shared")));

/**
 * Payment method details
 */
- (id<BPSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Payment intent status enum
 * Based on Belvo API documentation - current values only
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentIntentStatus.Companion")))
@interface PaymentIntentStatusCompanion : BPSDKBase
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
- (id<BPSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));

/**
 * Payment intent status enum
 * Based on Belvo API documentation - current values only
 */
- (id<BPSDKKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(BPSDKKotlinArray<id<BPSDKKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * Open Finance Biometric PIX payment method information
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface OpenFinanceBiometricPixPaymentMethodInformation : BPSDKBase
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
 * Payment method information
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentMethodInformation.Companion")))
@interface PaymentMethodInformationCompanion : BPSDKBase
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
- (id<BPSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Charge status enum
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface ChargeStatus : BPSDKKotlinEnum<ChargeStatus *>
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
+ (BPSDKKotlinArray<ChargeStatus *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<ChargeStatus *> *entries __attribute__((swift_name("entries")));
@end


/**
 * Data class representing a charge in a payment intent
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Charge.Companion")))
@interface ChargeCompanion : BPSDKBase
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
- (id<BPSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RelyingParty.Companion")))
@interface RelyingPartyCompanion : BPSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) RelyingPartyCompanion *shared __attribute__((swift_name("shared")));
- (id<BPSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("User.Companion")))
@interface UserCompanion : BPSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UserCompanion *shared __attribute__((swift_name("shared")));
- (id<BPSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PublicKeyCredentialParameters.Companion")))
@interface PublicKeyCredentialParametersCompanion : BPSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PublicKeyCredentialParametersCompanion *shared __attribute__((swift_name("shared")));
- (id<BPSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExcludeCredential.Companion")))
@interface ExcludeCredentialCompanion : BPSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) ExcludeCredentialCompanion *shared __attribute__((swift_name("shared")));
- (id<BPSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthenticatorSelection.Companion")))
@interface AuthenticatorSelectionCompanion : BPSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AuthenticatorSelectionCompanion *shared __attribute__((swift_name("shared")));
- (id<BPSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Data class representing payment method status information
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentMethodStatus.Companion")))
@interface PaymentMethodStatusCompanion : BPSDKBase
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
- (id<BPSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol BPSDKKotlinx_coroutines_coreParentJob <BPSDKKotlinx_coroutines_coreJob>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (BPSDKKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface BPSDKKotlinUnit : BPSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BPSDKKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol BPSDKKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnCompletionDisposableHandle:(id<BPSDKKotlinx_coroutines_coreDisposableHandle>)disposableHandle __attribute__((swift_name("disposeOnCompletion(disposableHandle:)")));
- (void)selectInRegistrationPhaseInternalResult:(id _Nullable)internalResult __attribute__((swift_name("selectInRegistrationPhase(internalResult:)")));
- (BOOL)trySelectClauseObject:(id)clauseObject result:(id _Nullable)result __attribute__((swift_name("trySelect(clauseObject:result:)")));
@property (readonly) id<BPSDKKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end


/**
 * Proxy configuration.
 *
 * See [ProxyBuilder] to create proxy.
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.engine.ProxyConfig)
 *
 * @param url: proxy url address.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface BPSDKKtor_client_coreProxyConfig : BPSDKBase
- (instancetype)initWithUrl:(BPSDKKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BPSDKKtor_httpUrl *url __attribute__((swift_name("url")));
@end


/**
 * Specifies a key for an attribute in [Attributes]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.AttributeKey)
 *
 * @param T is a type of the value stored in the attribute
 * @property name is a name of the attribute for diagnostic purposes. Can't be blank
 * @property type the recorded kotlin type of T
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface BPSDKKtor_utilsAttributeKey<T> : BPSDKBase

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (instancetype)initWithName:(NSString *)name type:(BPSDKKtor_utilsTypeInfo *)type __attribute__((swift_name("init(name:type:)"))) __attribute__((objc_designated_initializer));
- (BPSDKKtor_utilsAttributeKey<T> *)doCopyName:(NSString *)name type:(BPSDKKtor_utilsTypeInfo *)type __attribute__((swift_name("doCopy(name:type:)")));

/**
 * Specifies a key for an attribute in [Attributes]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.AttributeKey)
 *
 * @param T is a type of the value stored in the attribute
 * @property name is a name of the attribute for diagnostic purposes. Can't be blank
 * @property type the recorded kotlin type of T
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Specifies a key for an attribute in [Attributes]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.AttributeKey)
 *
 * @param T is a type of the value stored in the attribute
 * @property name is a name of the attribute for diagnostic purposes. Can't be blank
 * @property type the recorded kotlin type of T
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end


/**
 * Definition of an event.
 * Event is used as a key so both [hashCode] and [equals] need to be implemented properly.
 * Inheriting of this class is an experimental feature.
 * Instantiate directly if inheritance not necessary.
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.events.EventDefinition)
 *
 * @param T specifies what is a type of value passed to the event
 */
__attribute__((swift_name("Ktor_eventsEventDefinition")))
@interface BPSDKKtor_eventsEventDefinition<T> : BPSDKBase

/**
 * Definition of an event.
 * Event is used as a key so both [hashCode] and [equals] need to be implemented properly.
 * Inheriting of this class is an experimental feature.
 * Instantiate directly if inheritance not necessary.
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.events.EventDefinition)
 *
 * @param T specifies what is a type of value passed to the event
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * Definition of an event.
 * Event is used as a key so both [hashCode] and [equals] need to be implemented properly.
 * Inheriting of this class is an experimental feature.
 * Instantiate directly if inheritance not necessary.
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.events.EventDefinition)
 *
 * @param T specifies what is a type of value passed to the event
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end


/**
 * Represents a phase in a pipeline
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.PipelinePhase)
 *
 * @param name a name for this phase
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface BPSDKKtor_utilsPipelinePhase : BPSDKBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol BPSDKKotlinSuspendFunction2 <BPSDKKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline.Phases")))
@interface BPSDKKtor_client_coreHttpReceivePipelinePhases : BPSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BPSDKKtor_client_coreHttpReceivePipelinePhases *shared __attribute__((swift_name("shared")));

/**
 * Latest response pipeline phase
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpReceivePipeline.Phases.After)
 */
@property (readonly) BPSDKKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));

/**
 * The earliest phase that happens before any other
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpReceivePipeline.Phases.Before)
 */
@property (readonly) BPSDKKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));

/**
 * Use this phase to store request shared state
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpReceivePipeline.Phases.State)
 */
@property (readonly) BPSDKKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end


/**
 * All interceptors accept payload as [subject] and try to convert it to [OutgoingContent].
 * Last phase should proceed with [HttpClientCall].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestPipeline.Phases)
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline.Phases")))
@interface BPSDKKtor_client_coreHttpRequestPipelinePhases : BPSDKBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * All interceptors accept payload as [subject] and try to convert it to [OutgoingContent].
 * Last phase should proceed with [HttpClientCall].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestPipeline.Phases)
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BPSDKKtor_client_coreHttpRequestPipelinePhases *shared __attribute__((swift_name("shared")));

/**
 * The earliest phase that happens before any other.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestPipeline.Phases.Before)
 */
@property (readonly) BPSDKKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));

/**
 * Encode a request body to [OutgoingContent].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestPipeline.Phases.Render)
 */
@property (readonly) BPSDKKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));

/**
 * A phase for the [HttpSend] plugin.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestPipeline.Phases.Send)
 */
@property (readonly) BPSDKKtor_utilsPipelinePhase *Send __attribute__((swift_name("Send")));

/**
 * Use this phase to modify a request with a shared state.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestPipeline.Phases.State)
 */
@property (readonly) BPSDKKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));

/**
 * Transform a request body to supported render format.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestPipeline.Phases.Transform)
 */
@property (readonly) BPSDKKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end


/**
 * A builder message either for the client or the server,
 * that has a [headers] builder associated.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpMessageBuilder)
 */
__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol BPSDKKtor_httpHttpMessageBuilder
@required

/**
 * MessageBuilder [HeadersBuilder]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpMessageBuilder.headers)
 */
@property (readonly) BPSDKKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@end


/**
 * Contains parameters used to make an HTTP request.
 *
 * Learn more from [Making requests](https://ktor.io/docs/request.html).
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder)
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface BPSDKKtor_client_coreHttpRequestBuilder : BPSDKBase <BPSDKKtor_httpHttpMessageBuilder>

/**
 * Contains parameters used to make an HTTP request.
 *
 * Learn more from [Making requests](https://ktor.io/docs/request.html).
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder)
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * Contains parameters used to make an HTTP request.
 *
 * Learn more from [Making requests](https://ktor.io/docs/request.html).
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder)
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) BPSDKKtor_client_coreHttpRequestBuilderCompanion *companion __attribute__((swift_name("companion")));

/**
 * Creates immutable [HttpRequestData].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder.build)
 */
- (BPSDKKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));

/**
 * Retrieves capability by the key.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder.getCapabilityOrNull)
 */
- (id _Nullable)getCapabilityOrNullKey:(id<BPSDKKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));

/**
 * Sets request-specific attributes specified by [block].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder.setAttributes)
 */
- (void)setAttributesBlock:(void (^)(id<BPSDKKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));

/**
 * Sets capability configuration.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder.setCapability)
 */
- (void)setCapabilityKey:(id<BPSDKKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));

/**
 * Mutates [this] by copying all the data but execution context from another [builder] using it as the base.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder.takeFrom)
 */
- (BPSDKKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(BPSDKKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));

/**
 * Mutates [this] copying all the data from another [builder] using it as the base.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder.takeFromWithExecutionContext)
 */
- (BPSDKKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(BPSDKKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));

/**
 * Executes a [block] that configures the [URLBuilder] associated to this request.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder.url)
 */
- (void)urlBlock:(void (^)(BPSDKKtor_httpURLBuilder *, BPSDKKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));

/**
 * Provides access to attributes specific for this request.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder.attributes)
 */
@property (readonly) id<BPSDKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));

/**
 * The [body] for this request. Initially [EmptyContent].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder.body)
 */
@property id body __attribute__((swift_name("body")));

/**
 * The [KType] of [body] for this request. Null for default types that don't need serialization.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder.bodyType)
 */
@property BPSDKKtor_utilsTypeInfo * _Nullable bodyType __attribute__((swift_name("bodyType")));

/**
 * A deferred used to control the execution of this request.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder.executionContext)
 */
@property (readonly) id<BPSDKKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));

/**
 * [HeadersBuilder] to configure the headers for this request.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder.headers)
 */
@property (readonly) BPSDKKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));

/**
 * [HttpMethod] used by this request. [HttpMethod.Get] by default.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder.method)
 */
@property BPSDKKtor_httpHttpMethod *method __attribute__((swift_name("method")));

/**
 * [URLBuilder] to configure the URL for this request.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder.url)
 */
@property (readonly) BPSDKKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline.Phases")))
@interface BPSDKKtor_client_coreHttpResponsePipelinePhases : BPSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BPSDKKtor_client_coreHttpResponsePipelinePhases *shared __attribute__((swift_name("shared")));

/**
 * Latest response pipeline phase
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponsePipeline.Phases.After)
 */
@property (readonly) BPSDKKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));

/**
 * Decode response body
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponsePipeline.Phases.Parse)
 */
@property (readonly) BPSDKKtor_utilsPipelinePhase *Parse __attribute__((swift_name("Parse")));

/**
 * The earliest phase that happens before any other
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponsePipeline.Phases.Receive)
 */
@property (readonly) BPSDKKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));

/**
 * Use this phase to store request shared state
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponsePipeline.Phases.State)
 */
@property (readonly) BPSDKKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));

/**
 * Transform response body to expected format
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponsePipeline.Phases.Transform)
 */
@property (readonly) BPSDKKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end


/**
 * Class representing a typed [response] with an attached [expectedType].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponseContainer)
 *
 * @param expectedType: information about expected type.
 * @param response: current response state.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface BPSDKKtor_client_coreHttpResponseContainer : BPSDKBase
- (instancetype)initWithExpectedType:(BPSDKKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (BPSDKKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(BPSDKKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));

/**
 * Class representing a typed [response] with an attached [expectedType].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponseContainer)
 *
 * @param expectedType: information about expected type.
 * @param response: current response state.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Class representing a typed [response] with an attached [expectedType].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponseContainer)
 *
 * @param expectedType: information about expected type.
 * @param response: current response state.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Class representing a typed [response] with an attached [expectedType].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponseContainer)
 *
 * @param expectedType: information about expected type.
 * @param response: current response state.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BPSDKKtor_utilsTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline.Phases")))
@interface BPSDKKtor_client_coreHttpSendPipelinePhases : BPSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BPSDKKtor_client_coreHttpSendPipelinePhases *shared __attribute__((swift_name("shared")));

/**
 * The earliest phase that happens before any other.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpSendPipeline.Phases.Before)
 */
@property (readonly) BPSDKKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));

/**
 * Send a request to a remote server.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpSendPipeline.Phases.Engine)
 */
@property (readonly) BPSDKKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));

/**
 * Use this phase for logging and other actions that don't modify a request or shared data.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpSendPipeline.Phases.Monitoring)
 */
@property (readonly) BPSDKKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));

/**
 * Receive a pipeline execution phase.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpSendPipeline.Phases.Receive)
 */
@property (readonly) BPSDKKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));

/**
 * Use this phase to modify request with a shared state.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpSendPipeline.Phases.State)
 */
@property (readonly) BPSDKKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((swift_name("KotlinMapEntry")))
@protocol BPSDKKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientCall.Companion")))
@interface BPSDKKtor_client_coreHttpClientCallCompanion : BPSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BPSDKKtor_client_coreHttpClientCallCompanion *shared __attribute__((swift_name("shared")));
@end


/**
 * Ktor type information.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.reflect.TypeInfo)
 *
 * @property type Source KClass<*>
 * @property kotlinType Kotlin reified type with all generic type parameters.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsTypeInfo")))
@interface BPSDKKtor_utilsTypeInfo : BPSDKBase
- (instancetype)initWithType:(id<BPSDKKotlinKClass>)type kotlinType:(id<BPSDKKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:kotlinType:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithType:(id<BPSDKKotlinKClass>)type reifiedType:(id<BPSDKKotlinKType>)reifiedType kotlinType:(id<BPSDKKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use constructor without reifiedType parameter.")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<BPSDKKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<BPSDKKotlinKClass> type __attribute__((swift_name("type")));
@end


/**
 * A request for [HttpClient], first part of [HttpClientCall].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequest)
 */
__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol BPSDKKtor_client_coreHttpRequest <BPSDKKtor_httpHttpMessage, BPSDKKotlinx_coroutines_coreCoroutineScope>
@required

/**
 * Typed [Attributes] associated to this call serving as a lightweight container.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequest.attributes)
 */
@property (readonly) id<BPSDKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));

/**
 * The associated [HttpClientCall] containing both
 * the underlying [HttpClientCall.request] and [HttpClientCall.response].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequest.call)
 */
@property (readonly) BPSDKKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));

/**
 * An [OutgoingContent] representing the request body
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequest.content)
 */
@property (readonly) BPSDKKtor_httpOutgoingContent *content __attribute__((swift_name("content")));

/**
 * The [HttpMethod] or HTTP VERB used for this request.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequest.method)
 */
@property (readonly) BPSDKKtor_httpHttpMethod *method __attribute__((swift_name("method")));

/**
 * The [Url] representing the endpoint and the uri for this request.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequest.url)
 */
@property (readonly) BPSDKKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((swift_name("Kotlinx_io_coreRawSource")))
@protocol BPSDKKotlinx_io_coreRawSource <BPSDKKotlinAutoCloseable>
@required
- (int64_t)readAtMostToSink:(BPSDKKotlinx_io_coreBuffer *)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readAtMostTo(sink:byteCount:)")));
@end

__attribute__((swift_name("Kotlinx_io_coreSource")))
@protocol BPSDKKotlinx_io_coreSource <BPSDKKotlinx_io_coreRawSource>
@required
- (BOOL)exhausted __attribute__((swift_name("exhausted()")));
- (id<BPSDKKotlinx_io_coreSource>)peek __attribute__((swift_name("peek()")));
- (int32_t)readAtMostToSink:(BPSDKKotlinByteArray *)sink startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("readAtMostTo(sink:startIndex:endIndex:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (int32_t)readInt __attribute__((swift_name("readInt()")));
- (int64_t)readLong __attribute__((swift_name("readLong()")));
- (int16_t)readShort __attribute__((swift_name("readShort()")));
- (void)readToSink:(id<BPSDKKotlinx_io_coreRawSink>)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readTo(sink:byteCount:)")));
- (BOOL)requestByteCount:(int64_t)byteCount __attribute__((swift_name("request(byteCount:)")));
- (void)requireByteCount:(int64_t)byteCount __attribute__((swift_name("require(byteCount:)")));
- (void)skipByteCount:(int64_t)byteCount __attribute__((swift_name("skip(byteCount:)")));
- (int64_t)transferToSink:(id<BPSDKKotlinx_io_coreRawSink>)sink __attribute__((swift_name("transferTo(sink:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@property (readonly) BPSDKKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));
@end


/**
 * Day of week
 * [value] is 3 letter shortcut
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.date.WeekDay)
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface BPSDKKtor_utilsWeekDay : BPSDKKotlinEnum<BPSDKKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Day of week
 * [value] is 3 letter shortcut
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.date.WeekDay)
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) BPSDKKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) BPSDKKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) BPSDKKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) BPSDKKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) BPSDKKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) BPSDKKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) BPSDKKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) BPSDKKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (BPSDKKotlinArray<BPSDKKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<BPSDKKtor_utilsWeekDay *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end


/**
 * Month
 * [value] is 3 letter shortcut
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.date.Month)
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface BPSDKKtor_utilsMonth : BPSDKKotlinEnum<BPSDKKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Month
 * [value] is 3 letter shortcut
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.date.Month)
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) BPSDKKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) BPSDKKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) BPSDKKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) BPSDKKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) BPSDKKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) BPSDKKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) BPSDKKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) BPSDKKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) BPSDKKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) BPSDKKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) BPSDKKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) BPSDKKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) BPSDKKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (BPSDKKotlinArray<BPSDKKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<BPSDKKtor_utilsMonth *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface BPSDKKtor_utilsGMTDateCompanion : BPSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BPSDKKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
- (id<BPSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));

/**
 * An instance of [GMTDate] corresponding to the epoch beginning
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.date.GMTDate.Companion.START)
 */
@property (readonly) BPSDKKtor_utilsGMTDate *START __attribute__((swift_name("START")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface BPSDKKtor_httpHttpStatusCodeCompanion : BPSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BPSDKKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));

/**
 * Creates an instance of [HttpStatusCode] with the given numeric value.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpStatusCode.Companion.fromValue)
 */
- (BPSDKKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) BPSDKKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) BPSDKKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) BPSDKKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) BPSDKKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) BPSDKKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) BPSDKKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) BPSDKKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) BPSDKKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) BPSDKKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) BPSDKKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) BPSDKKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) BPSDKKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) BPSDKKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) BPSDKKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) BPSDKKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) BPSDKKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) BPSDKKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) BPSDKKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) BPSDKKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) BPSDKKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) BPSDKKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) BPSDKKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) BPSDKKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) BPSDKKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) BPSDKKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) BPSDKKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) BPSDKKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) BPSDKKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) BPSDKKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) BPSDKKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) BPSDKKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) BPSDKKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) BPSDKKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) BPSDKKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) BPSDKKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) BPSDKKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) BPSDKKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) BPSDKKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) BPSDKKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) BPSDKKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) BPSDKKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) BPSDKKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) BPSDKKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) BPSDKKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) BPSDKKtor_httpHttpStatusCode *TooEarly __attribute__((swift_name("TooEarly")));
@property (readonly) BPSDKKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) BPSDKKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) BPSDKKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) BPSDKKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) BPSDKKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) BPSDKKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) BPSDKKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) BPSDKKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));

/**
 * All known status codes
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpStatusCode.Companion.allStatusCodes)
 */
@property (readonly) NSArray<BPSDKKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion.Companion")))
@interface BPSDKKtor_httpHttpProtocolVersionCompanion : BPSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BPSDKKtor_httpHttpProtocolVersionCompanion *shared __attribute__((swift_name("shared")));

/**
 * Creates an instance of [HttpProtocolVersion] from the given parameters.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpProtocolVersion.Companion.fromValue)
 */
- (BPSDKKtor_httpHttpProtocolVersion *)fromValueName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("fromValue(name:major:minor:)")));

/**
 * Create an instance of [HttpProtocolVersion] from http string representation.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpProtocolVersion.Companion.parse)
 */
- (BPSDKKtor_httpHttpProtocolVersion *)parseValue:(id)value __attribute__((swift_name("parse(value:)")));

/**
 * HTTP/1.0 version.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpProtocolVersion.Companion.HTTP_1_0)
 */
@property (readonly) BPSDKKtor_httpHttpProtocolVersion *HTTP_1_0 __attribute__((swift_name("HTTP_1_0")));

/**
 * HTTP/1.1 version.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpProtocolVersion.Companion.HTTP_1_1)
 */
@property (readonly) BPSDKKtor_httpHttpProtocolVersion *HTTP_1_1 __attribute__((swift_name("HTTP_1_1")));

/**
 * HTTP/2.0 version.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpProtocolVersion.Companion.HTTP_2_0)
 */
@property (readonly) BPSDKKtor_httpHttpProtocolVersion *HTTP_2_0 __attribute__((swift_name("HTTP_2_0")));

/**
 * HTTP/3.0 version.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpProtocolVersion.Companion.HTTP_3_0)
 */
@property (readonly) BPSDKKtor_httpHttpProtocolVersion *HTTP_3_0 __attribute__((swift_name("HTTP_3_0")));

/**
 * QUIC/1.0 version.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpProtocolVersion.Companion.QUIC)
 */
@property (readonly) BPSDKKtor_httpHttpProtocolVersion *QUIC __attribute__((swift_name("QUIC")));

/**
 * SPDY/3.0 version.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpProtocolVersion.Companion.SPDY_3)
 */
@property (readonly) BPSDKKtor_httpHttpProtocolVersion *SPDY_3 __attribute__((swift_name("SPDY_3")));
@end


/**
 * Data class representing the response data in confirmation
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface ConfirmationResponse : BPSDKBase
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
 * Data class representing the confirmation data for enrollment
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfirmationData.Companion")))
@interface ConfirmationDataCompanion : BPSDKBase
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
- (id<BPSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Data class representing enrollment details
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EnrollmentPayloadDetails.Companion")))
@interface EnrollmentPayloadDetailsCompanion : BPSDKBase
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
- (id<BPSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("Ktor_ioJvmSerializable")))
@protocol BPSDKKtor_ioJvmSerializable
@required
@end


/**
 * Represents an immutable URL
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.Url)
 *
 * @property protocol
 * @property host name without port (domain)
 * @property port the specified port or protocol default port
 * @property specifiedPort port number that was specified to override protocol's default
 * @property encodedPath encoded path without query string
 * @property parameters URL query parameters
 * @property fragment URL fragment (anchor name)
 * @property user username part of URL
 * @property password password part of URL
 * @property trailingQuery keep trailing question character even if there are no query parameters
 *
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=io/ktor/http/UrlSerializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface BPSDKKtor_httpUrl : BPSDKBase <BPSDKKtor_ioJvmSerializable>
@property (class, readonly, getter=companion) BPSDKKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property (readonly) NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *encodedPathAndQuery __attribute__((swift_name("encodedPathAndQuery")));
@property (readonly) NSString *encodedQuery __attribute__((swift_name("encodedQuery")));
@property (readonly) NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<BPSDKKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));

/**
 * A list containing the segments of the URL path.
 *
 * This property was designed to distinguish between absolute and relative paths,
 * so it will have an empty segment at the beginning for URLs with a hostname
 * and an empty segment at the end for URLs with a trailing slash.
 *
 * ```kotlin
 * val fullUrl = Url("http://ktor.io/docs/")
 * fullUrl.pathSegments == listOf("", "docs", "")
 *
 * val absolute = Url("/docs/")
 * absolute.pathSegments == listOf("", "docs", "")
 *
 * val relative = Url("docs")
 * relative.pathSegments == listOf("docs")
 * ```
 *
 * This behaviour may not be ideal if you're working only with full URLs.
 * If you don't require the specific handling of empty segments, consider using the [segments] property instead:
 *
 * ```kotlin
 * val fullUrl = Url("http://ktor.io/docs/")
 * fullUrl.segments == listOf("docs")
 *
 * val absolute = Url("/docs/")
 * absolute.segments == listOf("docs")
 *
 * val relative = Url("docs")
 * relative.segments == listOf("docs")
 * ```
 *
 * To address this issue, the current [pathSegments] property will be renamed to [rawSegments].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.Url.pathSegments)
 */
@property (readonly) NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments"))) __attribute__((deprecated("\n        `pathSegments` is deprecated.\n\n        This property will contain an empty path segment at the beginning for URLs with a hostname,\n        and an empty path segment at the end for the URLs with a trailing slash. If you need to keep this behaviour please\n        use [rawSegments]. If you only need to access the meaningful parts of the path, consider using [segments] instead.\n             \n        Please decide if you need [rawSegments] or [segments] explicitly.\n        ")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) BPSDKKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) BPSDKKtor_httpURLProtocol * _Nullable protocolOrNull __attribute__((swift_name("protocolOrNull")));

/**
 * A list containing the segments of the URL path.
 *
 * This property is designed to distinguish between absolute and relative paths,
 * so it will have an empty segment at the beginning for URLs with a hostname
 * and an empty segment at the end for URLs with a trailing slash.
 *
 * ```kotlin
 * val fullUrl = Url("http://ktor.io/docs/")
 * fullUrl.rawSegments == listOf("", "docs", "")
 *
 * val absolute = Url("/docs/")
 * absolute.rawSegments == listOf("", "docs", "")
 *
 * val relative = Url("docs")
 * relative.rawSegments == listOf("docs")
 * ```
 *
 * This behaviour may not be ideal if you're working only with full URLs.
 * If you don't require the specific handling of empty segments, consider using the [segments] property instead:
 *
 * ```kotlin
 * val fullUrl = Url("http://ktor.io/docs/")
 * fullUrl.segments == listOf("docs")
 *
 * val absolute = Url("/docs/")
 * absolute.segments == listOf("docs")
 *
 * val relative = Url("docs")
 * relative.segments == listOf("docs")
 * ```
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.Url.rawSegments)
 */
@property (readonly) NSArray<NSString *> *rawSegments __attribute__((swift_name("rawSegments")));

/**
 * A list of path segments derived from the URL, excluding any leading
 * and trailing empty segments.
 *
 * ```kotlin
 * val fullUrl = Url("http://ktor.io/docs/")
 * fullUrl.segments == listOf("docs")
 *
 * val absolute = Url("/docs/")
 * absolute.segments == listOf("docs")
 * val relative = Url("docs")
 * relative.segments == listOf("docs")
 * ```
 *
 * If you need to check for trailing slash and relative/absolute paths, please check the [rawSegments] property.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.Url.segments)
 **/
@property (readonly) NSArray<NSString *> *segments __attribute__((swift_name("segments")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end


/**
 * Represents an HTTP method (verb)
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpMethod)
 *
 * @property value contains method name
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface BPSDKKtor_httpHttpMethod : BPSDKBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BPSDKKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (BPSDKKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));

/**
 * Represents an HTTP method (verb)
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpMethod)
 *
 * @property value contains method name
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Represents an HTTP method (verb)
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpMethod)
 *
 * @property value contains method name
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end


/**
 * Information about the content to be sent to the peer, recognized by a client or server engine
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.content.OutgoingContent)
 */
__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface BPSDKKtor_httpOutgoingContent : BPSDKBase

/**
 * Gets an extension property for this content
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.content.OutgoingContent.getProperty)
 */
- (id _Nullable)getPropertyKey:(BPSDKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));

/**
 * Sets an extension property for this content
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.content.OutgoingContent.setProperty)
 */
- (void)setPropertyKey:(BPSDKKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));

/**
 * Trailers to set when sending this content, will be ignored if request is not in HTTP2 mode
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.content.OutgoingContent.trailers)
 */
- (id<BPSDKKtor_httpHeaders> _Nullable)trailers __attribute__((swift_name("trailers()")));

/**
 * Specifies content length in bytes for this resource.
 *
 * If null, the resources will be sent as `Transfer-Encoding: chunked`
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.content.OutgoingContent.contentLength)
 */
@property (readonly) BPSDKLong * _Nullable contentLength __attribute__((swift_name("contentLength")));

/**
 * Specifies [ContentType] for this resource.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.content.OutgoingContent.contentType)
 */
@property (readonly) BPSDKKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));

/**
 * Headers to set when sending this content
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.content.OutgoingContent.headers)
 */
@property (readonly) id<BPSDKKtor_httpHeaders> headers __attribute__((swift_name("headers")));

/**
 * Status code to set when sending this content
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.content.OutgoingContent.status)
 */
@property (readonly) BPSDKKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuation")))
@protocol BPSDKKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<BPSDKKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface BPSDKKotlinAbstractCoroutineContextKey<B, E> : BPSDKBase <BPSDKKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<BPSDKKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<BPSDKKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface BPSDKKotlinx_coroutines_coreCoroutineDispatcherKey : BPSDKKotlinAbstractCoroutineContextKey<id<BPSDKKotlinContinuationInterceptor>, BPSDKKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<BPSDKKotlinCoroutineContextKey>)baseKey safeCast:(id<BPSDKKotlinCoroutineContextElement> _Nullable (^)(id<BPSDKKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BPSDKKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol BPSDKKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end


/**
 * Assertion response data
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentIntentAssertionResponse.Companion")))
@interface PaymentIntentAssertionResponseCompanion : BPSDKBase
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
- (id<BPSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
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


/**
 * Enum representing the possible enrollment details status values
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EnrollmentDetailsStatus.Companion")))
@interface EnrollmentDetailsStatusCompanion : BPSDKBase
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
- (id<BPSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));

/**
 * Enum representing the possible enrollment details status values
 */
- (id<BPSDKKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(BPSDKKotlinArray<id<BPSDKKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * Open Finance Biometric PIX payment method details
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OpenFinanceBiometricPixPaymentMethodDetails.Companion")))
@interface OpenFinanceBiometricPixPaymentMethodDetailsCompanion : BPSDKBase
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
- (id<BPSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface FidoAuthenticationOptions : BPSDKBase
- (instancetype)initWithChallenge:(NSString *)challenge rpId:(NSString *)rpId allowCredentials:(NSArray<SdkPublicKeyCredentialDescriptor *> * _Nullable)allowCredentials timeout:(BPSDKInt * _Nullable)timeout userVerification:(NSString * _Nullable)userVerification extensions:(NSDictionary<NSString *, NSString *> * _Nullable)extensions __attribute__((swift_name("init(challenge:rpId:allowCredentials:timeout:userVerification:extensions:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FidoAuthenticationOptionsCompanion *companion __attribute__((swift_name("companion")));
- (FidoAuthenticationOptions *)doCopyChallenge:(NSString *)challenge rpId:(NSString *)rpId allowCredentials:(NSArray<SdkPublicKeyCredentialDescriptor *> * _Nullable)allowCredentials timeout:(BPSDKInt * _Nullable)timeout userVerification:(NSString * _Nullable)userVerification extensions:(NSDictionary<NSString *, NSString *> * _Nullable)extensions __attribute__((swift_name("doCopy(challenge:rpId:allowCredentials:timeout:userVerification:extensions:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toJsonString __attribute__((swift_name("toJsonString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SdkPublicKeyCredentialDescriptor *> * _Nullable allowCredentials __attribute__((swift_name("allowCredentials")));
@property (readonly) NSString *challenge __attribute__((swift_name("challenge")));
@property (readonly) NSDictionary<NSString *, NSString *> * _Nullable extensions __attribute__((swift_name("extensions")));
@property (readonly) NSString *rpId __attribute__((swift_name("rpId")));
@property (readonly) BPSDKInt * _Nullable timeout __attribute__((swift_name("timeout")));
@property (readonly) NSString * _Nullable userVerification __attribute__((swift_name("userVerification")));
@end


/**
 * Open Finance Biometric PIX payment method information
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OpenFinanceBiometricPixPaymentMethodInformation.Companion")))
@interface OpenFinanceBiometricPixPaymentMethodInformationCompanion : BPSDKBase
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
- (id<BPSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Charge status enum
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChargeStatus.Companion")))
@interface ChargeStatusCompanion : BPSDKBase
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
- (id<BPSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));

/**
 * Charge status enum
 */
- (id<BPSDKKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(BPSDKKotlinArray<id<BPSDKKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@protocol BPSDKKtor_utilsStringValuesBuilder
@required
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<BPSDKKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<BPSDKKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<BPSDKKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<BPSDKKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilderImpl")))
@interface BPSDKKtor_utilsStringValuesBuilderImpl : BPSDKBase <BPSDKKtor_utilsStringValuesBuilder>
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<BPSDKKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<BPSDKKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<BPSDKKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<BPSDKKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BPSDKMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface BPSDKKtor_httpHeadersBuilder : BPSDKKtor_utilsStringValuesBuilderImpl
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<BPSDKKtor_httpHeaders>)build __attribute__((swift_name("build()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder.Companion")))
@interface BPSDKKtor_client_coreHttpRequestBuilderCompanion : BPSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BPSDKKtor_client_coreHttpRequestBuilderCompanion *shared __attribute__((swift_name("shared")));
@end


/**
 * A URL builder with all mutable components
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLBuilder)
 *
 * @property protocol URL protocol (scheme)
 * @property host name without port (domain)
 * @property port port number
 * @property user username part (optional)
 * @property password password part (optional)
 * @property pathSegments URL path without query
 * @property parameters URL query parameters
 * @property fragment URL fragment (anchor name)
 * @property trailingQuery keep a trailing question character even if there are no query parameters
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface BPSDKKtor_httpURLBuilder : BPSDKBase
- (instancetype)initWithProtocol:(BPSDKKtor_httpURLProtocol * _Nullable)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password pathSegments:(NSArray<NSString *> *)pathSegments parameters:(id<BPSDKKtor_httpParameters>)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:pathSegments:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BPSDKKtor_httpURLBuilderCompanion *companion __attribute__((swift_name("companion")));

/**
 * Build a [Url] instance (everything is copied to a new instance)
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLBuilder.build)
 */
- (BPSDKKtor_httpUrl *)build __attribute__((swift_name("build()")));

/**
 * Build a URL string
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLBuilder.buildString)
 */
- (NSString *)buildString __attribute__((swift_name("buildString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property id<BPSDKKtor_httpParametersBuilder> encodedParameters __attribute__((swift_name("encodedParameters")));
@property NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property NSArray<NSString *> *encodedPathSegments __attribute__((swift_name("encodedPathSegments")));
@property NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) id<BPSDKKtor_httpParametersBuilder> parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property int32_t port __attribute__((swift_name("port")));
@property BPSDKKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property BPSDKKtor_httpURLProtocol * _Nullable protocolOrNull __attribute__((swift_name("protocolOrNull")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
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

__attribute__((swift_name("KotlinKType")))
@protocol BPSDKKotlinKType
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) NSArray<BPSDKKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) id<BPSDKKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface BPSDKKotlinByteArray : BPSDKBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(BPSDKByte *(^)(BPSDKInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (BPSDKKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Kotlinx_io_coreRawSink")))
@protocol BPSDKKotlinx_io_coreRawSink <BPSDKKotlinAutoCloseable>
@required
- (void)flush __attribute__((swift_name("flush()")));
- (void)writeSource:(BPSDKKotlinx_io_coreBuffer *)source byteCount:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount:)")));
@end

__attribute__((swift_name("Kotlinx_io_coreSink")))
@protocol BPSDKKotlinx_io_coreSink <BPSDKKotlinx_io_coreRawSink>
@required
- (void)emit __attribute__((swift_name("emit()")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
- (void)hintEmit __attribute__((swift_name("hintEmit()")));
- (int64_t)transferFromSource:(id<BPSDKKotlinx_io_coreRawSource>)source __attribute__((swift_name("transferFrom(source:)")));
- (void)writeSource:(id<BPSDKKotlinx_io_coreRawSource>)source byteCount_:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount_:)")));
- (void)writeSource:(BPSDKKotlinByteArray *)source startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("write(source:startIndex:endIndex:)")));
- (void)writeByteByte:(int8_t)byte __attribute__((swift_name("writeByte(byte:)")));
- (void)writeIntInt:(int32_t)int_ __attribute__((swift_name("writeInt(int:)")));
- (void)writeLongLong:(int64_t)long_ __attribute__((swift_name("writeLong(long:)")));
- (void)writeShortShort:(int16_t)short_ __attribute__((swift_name("writeShort(short:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@property (readonly) BPSDKKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_io_coreBuffer")))
@interface BPSDKKotlinx_io_coreBuffer : BPSDKBase <BPSDKKotlinx_io_coreSource, BPSDKKotlinx_io_coreSink>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)clear __attribute__((swift_name("clear()")));
- (void)close __attribute__((swift_name("close()")));
- (BPSDKKotlinx_io_coreBuffer *)doCopy __attribute__((swift_name("doCopy()")));
- (void)doCopyToOut:(BPSDKKotlinx_io_coreBuffer *)out startIndex:(int64_t)startIndex endIndex:(int64_t)endIndex __attribute__((swift_name("doCopyTo(out:startIndex:endIndex:)")));
- (void)emit __attribute__((swift_name("emit()")));
- (BOOL)exhausted __attribute__((swift_name("exhausted()")));
- (void)flush __attribute__((swift_name("flush()")));
- (int8_t)getPosition:(int64_t)position __attribute__((swift_name("get(position:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
- (void)hintEmit __attribute__((swift_name("hintEmit()")));
- (id<BPSDKKotlinx_io_coreSource>)peek __attribute__((swift_name("peek()")));
- (int64_t)readAtMostToSink:(BPSDKKotlinx_io_coreBuffer *)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readAtMostTo(sink:byteCount:)")));
- (int32_t)readAtMostToSink:(BPSDKKotlinByteArray *)sink startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("readAtMostTo(sink:startIndex:endIndex:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (int32_t)readInt __attribute__((swift_name("readInt()")));
- (int64_t)readLong __attribute__((swift_name("readLong()")));
- (int16_t)readShort __attribute__((swift_name("readShort()")));
- (void)readToSink:(id<BPSDKKotlinx_io_coreRawSink>)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readTo(sink:byteCount:)")));
- (BOOL)requestByteCount:(int64_t)byteCount __attribute__((swift_name("request(byteCount:)")));
- (void)requireByteCount:(int64_t)byteCount __attribute__((swift_name("require(byteCount:)")));
- (void)skipByteCount:(int64_t)byteCount __attribute__((swift_name("skip(byteCount:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int64_t)transferFromSource:(id<BPSDKKotlinx_io_coreRawSource>)source __attribute__((swift_name("transferFrom(source:)")));
- (int64_t)transferToSink:(id<BPSDKKotlinx_io_coreRawSink>)sink __attribute__((swift_name("transferTo(sink:)")));
- (void)writeSource:(BPSDKKotlinx_io_coreBuffer *)source byteCount:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount:)")));
- (void)writeSource:(id<BPSDKKotlinx_io_coreRawSource>)source byteCount_:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount_:)")));
- (void)writeSource:(BPSDKKotlinByteArray *)source startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("write(source:startIndex:endIndex:)")));
- (void)writeByteByte:(int8_t)byte __attribute__((swift_name("writeByte(byte:)")));
- (void)writeIntInt:(int32_t)int_ __attribute__((swift_name("writeInt(int:)")));
- (void)writeLongLong:(int64_t)long_ __attribute__((swift_name("writeLong(long:)")));
- (void)writeShortShort:(int16_t)short_ __attribute__((swift_name("writeShort(short:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@property (readonly) BPSDKKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface BPSDKKtor_utilsWeekDayCompanion : BPSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BPSDKKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));

/**
 * Lookup an instance by [ordinal]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.date.WeekDay.Companion.from)
 */
- (BPSDKKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));

/**
 * Lookup an instance by short week day name [WeekDay.value]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.date.WeekDay.Companion.from)
 */
- (BPSDKKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface BPSDKKtor_utilsMonthCompanion : BPSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BPSDKKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));

/**
 * Lookup an instance by [ordinal]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.date.Month.Companion.from)
 */
- (BPSDKKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));

/**
 * Lookup an instance by short month name [Month.value]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.date.Month.Companion.from)
 */
- (BPSDKKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end


/**
 * Data class representing the response data in confirmation
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfirmationResponse.Companion")))
@interface ConfirmationResponseCompanion : BPSDKBase
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
- (id<BPSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface BPSDKKtor_httpUrlCompanion : BPSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BPSDKKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
- (id<BPSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Represents HTTP parameters as a map from case-insensitive names to collection of [String] values
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.Parameters)
 */
__attribute__((swift_name("Ktor_httpParameters")))
@protocol BPSDKKtor_httpParameters <BPSDKKtor_utilsStringValues>
@required
@end


/**
 * Represents URL protocol
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLProtocol)
 *
 * @property name of protocol (schema)
 * @property defaultPort default port for protocol or `-1` if not known
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface BPSDKKtor_httpURLProtocol : BPSDKBase <BPSDKKtor_ioJvmSerializable>
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BPSDKKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
- (BPSDKKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));

/**
 * Represents URL protocol
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLProtocol)
 *
 * @property name of protocol (schema)
 * @property defaultPort default port for protocol or `-1` if not known
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Represents URL protocol
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLProtocol)
 *
 * @property name of protocol (schema)
 * @property defaultPort default port for protocol or `-1` if not known
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Represents URL protocol
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLProtocol)
 *
 * @property name of protocol (schema)
 * @property defaultPort default port for protocol or `-1` if not known
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface BPSDKKtor_httpHttpMethodCompanion : BPSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BPSDKKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));

/**
 * Parse HTTP method by [method] string
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpMethod.Companion.parse)
 */
- (BPSDKKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));

/**
 * A list of default HTTP methods
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpMethod.Companion.DefaultMethods)
 */
@property (readonly) NSArray<BPSDKKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) BPSDKKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) BPSDKKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) BPSDKKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) BPSDKKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) BPSDKKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) BPSDKKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) BPSDKKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@end


/**
 * Represents a header value that consist of [content] followed by [parameters].
 * Useful for headers such as `Content-Type`, `Content-Disposition` and so on.
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HeaderValueWithParameters)
 *
 * @property content header's content without parameters
 * @property parameters
 */
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface BPSDKKtor_httpHeaderValueWithParameters : BPSDKBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<BPSDKKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BPSDKKtor_httpHeaderValueWithParametersCompanion *companion __attribute__((swift_name("companion")));

/**
 * The first value for the parameter with [name] comparing case-insensitively or `null` if no such parameters found
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HeaderValueWithParameters.parameter)
 */
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<BPSDKKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end


/**
 * Represents a value for a `Content-Type` header.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.ContentType)
 *
 * @property contentType represents a type part of the media type.
 * @property contentSubtype represents a subtype part of the media type.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface BPSDKKtor_httpContentType : BPSDKKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<BPSDKKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<BPSDKKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) BPSDKKtor_httpContentTypeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Checks if `this` type matches a [pattern] type taking into account placeholder symbols `*` and parameters.
 * The `this` type must be a more specific type than the [pattern] type. In other words:
 *
 * ```kotlin
 * ContentType("a", "b").match(ContentType("a", "b").withParameter("foo", "bar")) === false
 * ContentType("a", "b").withParameter("foo", "bar").match(ContentType("a", "b")) === true
 * ContentType("a", "*").match(ContentType("a", "b")) === false
 * ContentType("a", "b").match(ContentType("a", "*")) === true
 * ```
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.ContentType.match)
 */
- (BOOL)matchPattern:(BPSDKKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));

/**
 * Checks if `this` type matches a [pattern] type taking into account placeholder symbols `*` and parameters.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.ContentType.match)
 */
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));

/**
 * Creates a copy of `this` type with the added parameter with the [name] and [value].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.ContentType.withParameter)
 */
- (BPSDKKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));

/**
 * Creates a copy of `this` type without any parameters
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.ContentType.withoutParameters)
 */
- (BPSDKKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
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
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface SdkPublicKeyCredentialDescriptor : BPSDKBase
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
__attribute__((swift_name("FidoAuthenticationOptions.Companion")))
@interface FidoAuthenticationOptionsCompanion : BPSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FidoAuthenticationOptionsCompanion *shared __attribute__((swift_name("shared")));
- (id<BPSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder.Companion")))
@interface BPSDKKtor_httpURLBuilderCompanion : BPSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BPSDKKtor_httpURLBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_httpParametersBuilder")))
@protocol BPSDKKtor_httpParametersBuilder <BPSDKKtor_utilsStringValuesBuilder>
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface BPSDKKotlinKTypeProjection : BPSDKBase
- (instancetype)initWithVariance:(BPSDKKotlinKVariance * _Nullable)variance type:(id<BPSDKKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BPSDKKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (BPSDKKotlinKTypeProjection *)doCopyVariance:(BPSDKKotlinKVariance * _Nullable)variance type:(id<BPSDKKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<BPSDKKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) BPSDKKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface BPSDKKotlinByteIterator : BPSDKBase <BPSDKKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BPSDKByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface BPSDKKtor_httpURLProtocolCompanion : BPSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BPSDKKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));

/**
 * Create an instance by [name] or use already existing instance
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLProtocol.Companion.createOrDefault)
 */
- (BPSDKKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));

/**
 * HTTP with port 80
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLProtocol.Companion.HTTP)
 */
@property (readonly) BPSDKKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));

/**
 * secure HTTPS with port 443
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLProtocol.Companion.HTTPS)
 */
@property (readonly) BPSDKKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));

/**
 * Socks proxy url protocol.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLProtocol.Companion.SOCKS)
 */
@property (readonly) BPSDKKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));

/**
 * Web socket over HTTP on port 80
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLProtocol.Companion.WS)
 */
@property (readonly) BPSDKKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));

/**
 * Web socket over secure HTTPS on port 443
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLProtocol.Companion.WSS)
 */
@property (readonly) BPSDKKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));

/**
 * Protocols by names map
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLProtocol.Companion.byName)
 */
@property (readonly) NSDictionary<NSString *, BPSDKKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
@end


/**
 * Represents a single value parameter
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HeaderValueParam)
 *
 * @property name of parameter
 * @property value of parameter
 * @property escapeValue specifies if the value should be escaped
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface BPSDKKtor_httpHeaderValueParam : BPSDKBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("init(name:value:escapeValue:)"))) __attribute__((objc_designated_initializer));
- (BPSDKKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("doCopy(name:value:escapeValue:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Represents a single value parameter
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HeaderValueParam)
 *
 * @property name of parameter
 * @property value of parameter
 * @property escapeValue specifies if the value should be escaped
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL escapeValue __attribute__((swift_name("escapeValue")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters.Companion")))
@interface BPSDKKtor_httpHeaderValueWithParametersCompanion : BPSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BPSDKKtor_httpHeaderValueWithParametersCompanion *shared __attribute__((swift_name("shared")));

/**
 * Parse header with parameter and pass it to [init] function to instantiate particular type
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HeaderValueWithParameters.Companion.parse)
 */
- (id _Nullable)parseValue:(NSString *)value init:(id _Nullable (^)(NSString *, NSArray<BPSDKKtor_httpHeaderValueParam *> *))init __attribute__((swift_name("parse(value:init:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Companion")))
@interface BPSDKKtor_httpContentTypeCompanion : BPSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BPSDKKtor_httpContentTypeCompanion *shared __attribute__((swift_name("shared")));

/**
 * Parses a string representing a `Content-Type` header into a [ContentType] instance.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.ContentType.Companion.parse)
 */
- (BPSDKKtor_httpContentType *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));

/**
 * Represents a pattern `* / *` to match any content type.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.ContentType.Companion.Any)
 */
@property (readonly) BPSDKKtor_httpContentType *Any __attribute__((swift_name("Any")));
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

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SdkPublicKeyCredentialDescriptor.Companion")))
@interface SdkPublicKeyCredentialDescriptorCompanion : BPSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SdkPublicKeyCredentialDescriptorCompanion *shared __attribute__((swift_name("shared")));
- (id<BPSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface BPSDKKotlinKVariance : BPSDKKotlinEnum<BPSDKKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) BPSDKKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) BPSDKKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) BPSDKKotlinKVariance *out __attribute__((swift_name("out")));
+ (BPSDKKotlinArray<BPSDKKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<BPSDKKotlinKVariance *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface BPSDKKotlinKTypeProjectionCompanion : BPSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BPSDKKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (BPSDKKotlinKTypeProjection *)contravariantType:(id<BPSDKKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (BPSDKKotlinKTypeProjection *)covariantType:(id<BPSDKKotlinKType>)type __attribute__((swift_name("covariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (BPSDKKotlinKTypeProjection *)invariantType:(id<BPSDKKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) BPSDKKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
