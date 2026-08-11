#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class GCMUTApp, GCMUTAppCompanion, GCMUTAppEventRequest, GCMUTAppEventRequestCompanion, GCMUTAttribute, GCMUTAttributeCompanion, GCMUTAttributeDataType, GCMUTAttributeDataTypeCompanion, GCMUTCustomerCookieProvider, GCMUTCustomerCookieProviderFactory, GCMUTDevice, GCMUTDeviceCompanion, GCMUTKotlinArray<T>, GCMUTKotlinEnum<E>, GCMUTKotlinEnumCompanion, GCMUTKotlinException, GCMUTKotlinIllegalStateException, GCMUTKotlinNothing, GCMUTKotlinRuntimeException, GCMUTKotlinThrowable, GCMUTKotlinx_serialization_coreSerialKind, GCMUTKotlinx_serialization_coreSerializersModule, GCMUTNetworkConnectivity, GCMUTNetworkConnectivityCompanion, GCMUTSdkLibrary, GCMUTSdkLibraryCompanion, GCMUTTrackingConfiguration, GCMUTTraits;

@protocol GCMUTKotlinAnnotation, GCMUTKotlinComparable, GCMUTKotlinIterator, GCMUTKotlinKAnnotatedElement, GCMUTKotlinKClass, GCMUTKotlinKClassifier, GCMUTKotlinKDeclarationContainer, GCMUTKotlinx_serialization_coreCompositeDecoder, GCMUTKotlinx_serialization_coreCompositeEncoder, GCMUTKotlinx_serialization_coreDecoder, GCMUTKotlinx_serialization_coreDeserializationStrategy, GCMUTKotlinx_serialization_coreEncoder, GCMUTKotlinx_serialization_coreKSerializer, GCMUTKotlinx_serialization_coreSerialDescriptor, GCMUTKotlinx_serialization_coreSerializationStrategy, GCMUTKotlinx_serialization_coreSerializersModuleCollector;

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
@interface GCMUTBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface GCMUTBase (GCMUTBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface GCMUTMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface GCMUTMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorGCMUTKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface GCMUTNumber : NSNumber
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
@interface GCMUTByte : GCMUTNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface GCMUTUByte : GCMUTNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface GCMUTShort : GCMUTNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface GCMUTUShort : GCMUTNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface GCMUTInt : GCMUTNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface GCMUTUInt : GCMUTNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface GCMUTLong : GCMUTNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface GCMUTULong : GCMUTNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface GCMUTFloat : GCMUTNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface GCMUTDouble : GCMUTNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface GCMUTBoolean : GCMUTNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end


/**
 * Public facade for the Mobile User Tracker. Callers set session-scoped app/device
 * metadata via the `set*` methods once, then report events via [screenViewed], [searchPerformed],
 * and [customEvent].
 *
 * Every event method is a fire-and-forget `suspend fun`: gate/validation/delivery failures are
 * logged internally and never surfaced to the caller, so a  single malformed or undeliverable event
 * never disrupts the host app.
 *
 * Not thread-safe — the caller must ensure the `set*` methods are not invoked concurrently with
 * each other or with the event methods.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MobileUserTracker")))
@interface GCMUTMobileUserTracker : GCMUTBase
- (instancetype)initWithConfiguration:(GCMUTTrackingConfiguration *)configuration cookieProvider:(GCMUTCustomerCookieProvider *)cookieProvider __attribute__((swift_name("init(configuration:cookieProvider:)"))) __attribute__((objc_designated_initializer));

/**
 * Clears [externalId], the global traits set via [setTraits], and [sessionId]. App/device/network
 * metadata set via the other `set*` methods are left untouched.
 */
- (void)clearUserIdentifiers __attribute__((swift_name("clearUserIdentifiers()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)customEventEventName:(NSString *)eventName screenName:(NSString *)screenName attributes:(NSDictionary<NSString *, id> * _Nullable)attributes traits:(GCMUTTraits * _Nullable)traits completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("customEvent(eventName:screenName:attributes:traits:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)screenViewedScreenName:(NSString *)screenName attributes:(NSDictionary<NSString *, id> * _Nullable)attributes searchQuery:(NSString * _Nullable)searchQuery traits:(GCMUTTraits * _Nullable)traits completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("screenViewed(screenName:attributes:searchQuery:traits:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)searchPerformedScreenName:(NSString *)screenName attributes:(NSDictionary<NSString *, id> * _Nullable)attributes traits:(GCMUTTraits * _Nullable)traits completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("searchPerformed(screenName:attributes:traits:completionHandler:)")));
- (void)setAppBuildNumberBuildNumber:(NSString *)buildNumber __attribute__((swift_name("setAppBuildNumber(buildNumber:)")));
- (void)setAppNameName:(NSString *)name __attribute__((swift_name("setAppName(name:)")));
- (void)setAppNamespaceNamespace:(NSString *)namespace_ __attribute__((swift_name("setAppNamespace(namespace:)")));
- (void)setAppVersionVersion:(NSString *)version __attribute__((swift_name("setAppVersion(version:)")));
- (void)setBluetoothEnabledEnabled:(BOOL)enabled __attribute__((swift_name("setBluetoothEnabled(enabled:)")));
- (void)setCarrierCarrier:(NSString *)carrier __attribute__((swift_name("setCarrier(carrier:)")));
- (void)setCellularEnabledEnabled:(BOOL)enabled __attribute__((swift_name("setCellularEnabled(enabled:)")));

/** Ignored (and logged) if [category] is not one of [EventValidator.isValidDeviceCategory]'s allowed values. */
- (void)setDeviceCategoryCategory:(NSString *)category __attribute__((swift_name("setDeviceCategory(category:)")));
- (void)setDeviceTypeType:(NSString *)type __attribute__((swift_name("setDeviceType(type:)")));
- (void)setExternalIdExternalId:(NSString *)externalId __attribute__((swift_name("setExternalId(externalId:)")));
- (void)setFingerprintFingerprint:(NSString *)fingerprint __attribute__((swift_name("setFingerprint(fingerprint:)")));
- (void)setIsMobileIsMobile:(BOOL)isMobile __attribute__((swift_name("setIsMobile(isMobile:)")));
- (void)setManufacturerManufacturer:(NSString *)manufacturer __attribute__((swift_name("setManufacturer(manufacturer:)")));
- (void)setOsFamilyFamily:(NSString *)family __attribute__((swift_name("setOsFamily(family:)")));
- (void)setOsVersionVersion:(NSString *)version __attribute__((swift_name("setOsVersion(version:)")));
- (void)setScreenDensityDensity:(int32_t)density __attribute__((swift_name("setScreenDensity(density:)")));
- (void)setScreenHeightHeight:(int32_t)height __attribute__((swift_name("setScreenHeight(height:)")));
- (void)setScreenWidthWidth:(int32_t)width __attribute__((swift_name("setScreenWidth(width:)")));

/** Global traits merged into every event; a per-event `traits` argument wins field-by-field. */
- (void)setTraitsTraits:(GCMUTTraits *)traits __attribute__((swift_name("setTraits(traits:)")));
- (void)setWifiEnabledEnabled:(BOOL)enabled __attribute__((swift_name("setWifiEnabled(enabled:)")));

/** Backend-assigned session ID from the most recent successfully delivered event, or `null`. */
@property (readonly) NSString * _Nullable sessionId __attribute__((swift_name("sessionId")));
@end


/**
 * Configuration required to initialize the Mobile User Tracker (HLD §3.1).
 *
 * @param deploymentId the ID of the Genesys Cloud Messenger deployment.
 * @param domain the regional base domain address. For example, "mypurecloud.com".
 * @param logging indicates if SDK debug logging should be enabled.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrackingConfiguration")))
@interface GCMUTTrackingConfiguration : GCMUTBase
- (instancetype)initWithDeploymentId:(NSString *)deploymentId domain:(NSString *)domain logging:(BOOL)logging __attribute__((swift_name("init(deploymentId:domain:logging:)"))) __attribute__((objc_designated_initializer));
- (GCMUTTrackingConfiguration *)doCopyDeploymentId:(NSString *)deploymentId domain:(NSString *)domain logging:(BOOL)logging __attribute__((swift_name("doCopy(deploymentId:domain:logging:)")));

/**
 * Configuration required to initialize the Mobile User Tracker (HLD §3.1).
 *
 * @param deploymentId the ID of the Genesys Cloud Messenger deployment.
 * @param domain the regional base domain address. For example, "mypurecloud.com".
 * @param logging indicates if SDK debug logging should be enabled.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Configuration required to initialize the Mobile User Tracker (HLD §3.1).
 *
 * @param deploymentId the ID of the Genesys Cloud Messenger deployment.
 * @param domain the regional base domain address. For example, "mypurecloud.com".
 * @param logging indicates if SDK debug logging should be enabled.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Configuration required to initialize the Mobile User Tracker (HLD §3.1).
 *
 * @param deploymentId the ID of the Genesys Cloud Messenger deployment.
 * @param domain the regional base domain address. For example, "mypurecloud.com".
 * @param logging indicates if SDK debug logging should be enabled.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *deploymentId __attribute__((swift_name("deploymentId")));
@property (readonly) NSString *domain __attribute__((swift_name("domain")));
@property (readonly) BOOL logging __attribute__((swift_name("logging")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("App")))
@interface GCMUTApp : GCMUTBase
- (instancetype)initWithName:(NSString *)name namespace:(NSString *)namespace_ version:(NSString *)version buildNumber:(NSString *)buildNumber __attribute__((swift_name("init(name:namespace:version:buildNumber:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GCMUTAppCompanion *companion __attribute__((swift_name("companion")));
- (GCMUTApp *)doCopyName:(NSString *)name namespace:(NSString *)namespace_ version:(NSString *)version buildNumber:(NSString *)buildNumber __attribute__((swift_name("doCopy(name:namespace:version:buildNumber:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *buildNumber __attribute__((swift_name("buildNumber")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly, getter=namespace) NSString *namespace_ __attribute__((swift_name("namespace_")));
@property (readonly) NSString *version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("App.Companion")))
@interface GCMUTAppCompanion : GCMUTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMUTAppCompanion *shared __attribute__((swift_name("shared")));
- (id<GCMUTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Body of `POST .../journey/deployments/{deploymentId}/appevents`.
 *
 * Required fields are declared first, followed by the optional fields. Optional fields default to
 * `null` and are dropped from the payload by the shared `trackingJson` serializer
 * (`encodeDefaults = false`); JSON key order is not significant to the endpoint.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppEventRequest")))
@interface GCMUTAppEventRequest : GCMUTBase
- (instancetype)initWithEventName:(NSString *)eventName screenName:(NSString *)screenName app:(GCMUTApp *)app device:(GCMUTDevice *)device sdkLibrary:(GCMUTSdkLibrary *)sdkLibrary customerCookieId:(NSString *)customerCookieId createdDate:(NSString *)createdDate networkConnectivity:(GCMUTNetworkConnectivity * _Nullable)networkConnectivity searchQuery:(NSString * _Nullable)searchQuery attributes:(NSDictionary<NSString *, GCMUTAttribute *> * _Nullable)attributes traits:(NSDictionary<NSString *, GCMUTAttribute *> * _Nullable)traits externalId:(NSString * _Nullable)externalId __attribute__((swift_name("init(eventName:screenName:app:device:sdkLibrary:customerCookieId:createdDate:networkConnectivity:searchQuery:attributes:traits:externalId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GCMUTAppEventRequestCompanion *companion __attribute__((swift_name("companion")));
- (GCMUTAppEventRequest *)doCopyEventName:(NSString *)eventName screenName:(NSString *)screenName app:(GCMUTApp *)app device:(GCMUTDevice *)device sdkLibrary:(GCMUTSdkLibrary *)sdkLibrary customerCookieId:(NSString *)customerCookieId createdDate:(NSString *)createdDate networkConnectivity:(GCMUTNetworkConnectivity * _Nullable)networkConnectivity searchQuery:(NSString * _Nullable)searchQuery attributes:(NSDictionary<NSString *, GCMUTAttribute *> * _Nullable)attributes traits:(NSDictionary<NSString *, GCMUTAttribute *> * _Nullable)traits externalId:(NSString * _Nullable)externalId __attribute__((swift_name("doCopy(eventName:screenName:app:device:sdkLibrary:customerCookieId:createdDate:networkConnectivity:searchQuery:attributes:traits:externalId:)")));

/**
 * Body of `POST .../journey/deployments/{deploymentId}/appevents`.
 *
 * Required fields are declared first, followed by the optional fields. Optional fields default to
 * `null` and are dropped from the payload by the shared `trackingJson` serializer
 * (`encodeDefaults = false`); JSON key order is not significant to the endpoint.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Body of `POST .../journey/deployments/{deploymentId}/appevents`.
 *
 * Required fields are declared first, followed by the optional fields. Optional fields default to
 * `null` and are dropped from the payload by the shared `trackingJson` serializer
 * (`encodeDefaults = false`); JSON key order is not significant to the endpoint.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Body of `POST .../journey/deployments/{deploymentId}/appevents`.
 *
 * Required fields are declared first, followed by the optional fields. Optional fields default to
 * `null` and are dropped from the payload by the shared `trackingJson` serializer
 * (`encodeDefaults = false`); JSON key order is not significant to the endpoint.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) GCMUTApp *app __attribute__((swift_name("app")));
@property (readonly) NSDictionary<NSString *, GCMUTAttribute *> * _Nullable attributes __attribute__((swift_name("attributes")));
@property (readonly) NSString *createdDate __attribute__((swift_name("createdDate")));
@property (readonly) NSString *customerCookieId __attribute__((swift_name("customerCookieId")));
@property (readonly) GCMUTDevice *device __attribute__((swift_name("device")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable externalId __attribute__((swift_name("externalId")));
@property (readonly) GCMUTNetworkConnectivity * _Nullable networkConnectivity __attribute__((swift_name("networkConnectivity")));
@property (readonly) NSString *screenName __attribute__((swift_name("screenName")));
@property (readonly) GCMUTSdkLibrary *sdkLibrary __attribute__((swift_name("sdkLibrary")));
@property (readonly) NSString * _Nullable searchQuery __attribute__((swift_name("searchQuery")));
@property (readonly) NSDictionary<NSString *, GCMUTAttribute *> * _Nullable traits __attribute__((swift_name("traits")));
@end


/**
 * Body of `POST .../journey/deployments/{deploymentId}/appevents`.
 *
 * Required fields are declared first, followed by the optional fields. Optional fields default to
 * `null` and are dropped from the payload by the shared `trackingJson` serializer
 * (`encodeDefaults = false`); JSON key order is not significant to the endpoint.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppEventRequest.Companion")))
@interface GCMUTAppEventRequestCompanion : GCMUTBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Body of `POST .../journey/deployments/{deploymentId}/appevents`.
 *
 * Required fields are declared first, followed by the optional fields. Optional fields default to
 * `null` and are dropped from the payload by the shared `trackingJson` serializer
 * (`encodeDefaults = false`); JSON key order is not significant to the endpoint.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMUTAppEventRequestCompanion *shared __attribute__((swift_name("shared")));

/**
 * Body of `POST .../journey/deployments/{deploymentId}/appevents`.
 *
 * Required fields are declared first, followed by the optional fields. Optional fields default to
 * `null` and are dropped from the payload by the shared `trackingJson` serializer
 * (`encodeDefaults = false`); JSON key order is not significant to the endpoint.
 */
- (id<GCMUTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Attribute")))
@interface GCMUTAttribute : GCMUTBase
- (instancetype)initWithDataType:(GCMUTAttributeDataType *)dataType value:(NSString *)value __attribute__((swift_name("init(dataType:value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GCMUTAttributeCompanion *companion __attribute__((swift_name("companion")));
- (GCMUTAttribute *)doCopyDataType:(GCMUTAttributeDataType *)dataType value:(NSString *)value __attribute__((swift_name("doCopy(dataType:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) GCMUTAttributeDataType *dataType __attribute__((swift_name("dataType")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Attribute.Companion")))
@interface GCMUTAttributeCompanion : GCMUTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMUTAttributeCompanion *shared __attribute__((swift_name("shared")));
- (id<GCMUTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol GCMUTKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface GCMUTKotlinEnum<E> : GCMUTBase <GCMUTKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GCMUTKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AttributeDataType")))
@interface GCMUTAttributeDataType : GCMUTKotlinEnum<GCMUTAttributeDataType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) GCMUTAttributeDataTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) GCMUTAttributeDataType *string __attribute__((swift_name("string")));
@property (class, readonly) GCMUTAttributeDataType *boolean __attribute__((swift_name("boolean")));
@property (class, readonly) GCMUTAttributeDataType *number __attribute__((swift_name("number")));
@property (class, readonly) GCMUTAttributeDataType *integer __attribute__((swift_name("integer")));
+ (GCMUTKotlinArray<GCMUTAttributeDataType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<GCMUTAttributeDataType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AttributeDataType.Companion")))
@interface GCMUTAttributeDataTypeCompanion : GCMUTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMUTAttributeDataTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<GCMUTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<GCMUTKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(GCMUTKotlinArray<id<GCMUTKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Device")))
@interface GCMUTDevice : GCMUTBase
- (instancetype)initWithCategory:(NSString *)category type:(NSString *)type osFamily:(NSString *)osFamily osVersion:(NSString *)osVersion isMobile:(GCMUTBoolean * _Nullable)isMobile screenHeight:(GCMUTInt * _Nullable)screenHeight screenWidth:(GCMUTInt * _Nullable)screenWidth screenDensity:(GCMUTInt * _Nullable)screenDensity fingerprint:(NSString * _Nullable)fingerprint manufacturer:(NSString * _Nullable)manufacturer __attribute__((swift_name("init(category:type:osFamily:osVersion:isMobile:screenHeight:screenWidth:screenDensity:fingerprint:manufacturer:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GCMUTDeviceCompanion *companion __attribute__((swift_name("companion")));
- (GCMUTDevice *)doCopyCategory:(NSString *)category type:(NSString *)type osFamily:(NSString *)osFamily osVersion:(NSString *)osVersion isMobile:(GCMUTBoolean * _Nullable)isMobile screenHeight:(GCMUTInt * _Nullable)screenHeight screenWidth:(GCMUTInt * _Nullable)screenWidth screenDensity:(GCMUTInt * _Nullable)screenDensity fingerprint:(NSString * _Nullable)fingerprint manufacturer:(NSString * _Nullable)manufacturer __attribute__((swift_name("doCopy(category:type:osFamily:osVersion:isMobile:screenHeight:screenWidth:screenDensity:fingerprint:manufacturer:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *category __attribute__((swift_name("category")));
@property (readonly) NSString * _Nullable fingerprint __attribute__((swift_name("fingerprint")));
@property (readonly) GCMUTBoolean * _Nullable isMobile __attribute__((swift_name("isMobile")));
@property (readonly) NSString * _Nullable manufacturer __attribute__((swift_name("manufacturer")));
@property (readonly) NSString *osFamily __attribute__((swift_name("osFamily")));
@property (readonly) NSString *osVersion __attribute__((swift_name("osVersion")));
@property (readonly) GCMUTInt * _Nullable screenDensity __attribute__((swift_name("screenDensity")));
@property (readonly) GCMUTInt * _Nullable screenHeight __attribute__((swift_name("screenHeight")));
@property (readonly) GCMUTInt * _Nullable screenWidth __attribute__((swift_name("screenWidth")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Device.Companion")))
@interface GCMUTDeviceCompanion : GCMUTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMUTDeviceCompanion *shared __attribute__((swift_name("shared")));
- (id<GCMUTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkConnectivity")))
@interface GCMUTNetworkConnectivity : GCMUTBase
- (instancetype)initWithCarrier:(NSString * _Nullable)carrier bluetoothEnabled:(BOOL)bluetoothEnabled cellularEnabled:(BOOL)cellularEnabled wifiEnabled:(BOOL)wifiEnabled __attribute__((swift_name("init(carrier:bluetoothEnabled:cellularEnabled:wifiEnabled:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GCMUTNetworkConnectivityCompanion *companion __attribute__((swift_name("companion")));
- (GCMUTNetworkConnectivity *)doCopyCarrier:(NSString * _Nullable)carrier bluetoothEnabled:(BOOL)bluetoothEnabled cellularEnabled:(BOOL)cellularEnabled wifiEnabled:(BOOL)wifiEnabled __attribute__((swift_name("doCopy(carrier:bluetoothEnabled:cellularEnabled:wifiEnabled:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL bluetoothEnabled __attribute__((swift_name("bluetoothEnabled")));
@property (readonly) NSString * _Nullable carrier __attribute__((swift_name("carrier")));
@property (readonly) BOOL cellularEnabled __attribute__((swift_name("cellularEnabled")));
@property (readonly) BOOL wifiEnabled __attribute__((swift_name("wifiEnabled")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkConnectivity.Companion")))
@interface GCMUTNetworkConnectivityCompanion : GCMUTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMUTNetworkConnectivityCompanion *shared __attribute__((swift_name("shared")));
- (id<GCMUTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SdkLibrary")))
@interface GCMUTSdkLibrary : GCMUTBase
- (instancetype)initWithName:(NSString *)name version:(NSString *)version __attribute__((swift_name("init(name:version:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GCMUTSdkLibraryCompanion *companion __attribute__((swift_name("companion")));
- (GCMUTSdkLibrary *)doCopyName:(NSString *)name version:(NSString *)version __attribute__((swift_name("doCopy(name:version:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SdkLibrary.Companion")))
@interface GCMUTSdkLibraryCompanion : GCMUTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMUTSdkLibraryCompanion *shared __attribute__((swift_name("shared")));
- (id<GCMUTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Identity traits a host app can attach to an event for identity stitching.
 *
 * Unlike the other types in this package, [Traits] is a host-input type, not a wire type: it has
 * no serialization behavior of its own and is never sent as-is.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Traits")))
@interface GCMUTTraits : GCMUTBase
- (instancetype)initWithEmail:(NSString * _Nullable)email cellPhone:(NSString * _Nullable)cellPhone homePhone:(NSString * _Nullable)homePhone otherPhone:(NSString * _Nullable)otherPhone workPhone:(NSString * _Nullable)workPhone salutation:(NSString * _Nullable)salutation jobTitle:(NSString * _Nullable)jobTitle givenName:(NSString * _Nullable)givenName middleName:(NSString * _Nullable)middleName familyName:(NSString * _Nullable)familyName __attribute__((swift_name("init(email:cellPhone:homePhone:otherPhone:workPhone:salutation:jobTitle:givenName:middleName:familyName:)"))) __attribute__((objc_designated_initializer));
- (GCMUTTraits *)doCopyEmail:(NSString * _Nullable)email cellPhone:(NSString * _Nullable)cellPhone homePhone:(NSString * _Nullable)homePhone otherPhone:(NSString * _Nullable)otherPhone workPhone:(NSString * _Nullable)workPhone salutation:(NSString * _Nullable)salutation jobTitle:(NSString * _Nullable)jobTitle givenName:(NSString * _Nullable)givenName middleName:(NSString * _Nullable)middleName familyName:(NSString * _Nullable)familyName __attribute__((swift_name("doCopy(email:cellPhone:homePhone:otherPhone:workPhone:salutation:jobTitle:givenName:middleName:familyName:)")));

/**
 * Identity traits a host app can attach to an event for identity stitching.
 *
 * Unlike the other types in this package, [Traits] is a host-input type, not a wire type: it has
 * no serialization behavior of its own and is never sent as-is.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Identity traits a host app can attach to an event for identity stitching.
 *
 * Unlike the other types in this package, [Traits] is a host-input type, not a wire type: it has
 * no serialization behavior of its own and is never sent as-is.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Identity traits a host app can attach to an event for identity stitching.
 *
 * Unlike the other types in this package, [Traits] is a host-input type, not a wire type: it has
 * no serialization behavior of its own and is never sent as-is.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable cellPhone __attribute__((swift_name("cellPhone")));
@property (readonly) NSString * _Nullable email __attribute__((swift_name("email")));
@property (readonly) NSString * _Nullable familyName __attribute__((swift_name("familyName")));
@property (readonly) NSString * _Nullable givenName __attribute__((swift_name("givenName")));
@property (readonly) NSString * _Nullable homePhone __attribute__((swift_name("homePhone")));
@property (readonly) NSString * _Nullable jobTitle __attribute__((swift_name("jobTitle")));
@property (readonly) NSString * _Nullable middleName __attribute__((swift_name("middleName")));
@property (readonly) NSString * _Nullable otherPhone __attribute__((swift_name("otherPhone")));
@property (readonly) NSString * _Nullable salutation __attribute__((swift_name("salutation")));
@property (readonly) NSString * _Nullable workPhone __attribute__((swift_name("workPhone")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CustomerCookieProvider")))
@interface GCMUTCustomerCookieProvider : GCMUTBase
- (NSString *)getCustomerCookieId __attribute__((swift_name("getCustomerCookieId()")));
- (void)reset __attribute__((swift_name("reset()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CustomerCookieProviderFactory")))
@interface GCMUTCustomerCookieProviderFactory : GCMUTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)customerCookieProviderFactory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMUTCustomerCookieProviderFactory *shared __attribute__((swift_name("shared")));
- (GCMUTCustomerCookieProvider *)create __attribute__((swift_name("create()")));
- (GCMUTCustomerCookieProvider *)createEnableLogs:(BOOL)enableLogs __attribute__((swift_name("create(enableLogs:)")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface GCMUTKotlinThrowable : GCMUTBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(GCMUTKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(GCMUTKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (GCMUTKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) GCMUTKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface GCMUTKotlinException : GCMUTKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(GCMUTKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(GCMUTKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface GCMUTKotlinRuntimeException : GCMUTKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(GCMUTKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(GCMUTKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface GCMUTKotlinIllegalStateException : GCMUTKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(GCMUTKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(GCMUTKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface GCMUTKotlinCancellationException : GCMUTKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(GCMUTKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(GCMUTKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol GCMUTKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<GCMUTKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<GCMUTKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol GCMUTKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<GCMUTKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<GCMUTKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol GCMUTKotlinx_serialization_coreKSerializer <GCMUTKotlinx_serialization_coreSerializationStrategy, GCMUTKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface GCMUTKotlinEnumCompanion : GCMUTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GCMUTKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface GCMUTKotlinArray<T> : GCMUTBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(GCMUTInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<GCMUTKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol GCMUTKotlinx_serialization_coreEncoder
@required
- (id<GCMUTKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<GCMUTKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<GCMUTKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<GCMUTKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<GCMUTKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<GCMUTKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<GCMUTKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
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
- (void)encodeNullableSerializableValueSerializer:(id<GCMUTKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<GCMUTKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) GCMUTKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol GCMUTKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<GCMUTKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<GCMUTKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<GCMUTKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) GCMUTKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol GCMUTKotlinx_serialization_coreDecoder
@required
- (id<GCMUTKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<GCMUTKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<GCMUTKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<GCMUTKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<GCMUTKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
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
- (GCMUTKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<GCMUTKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<GCMUTKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) GCMUTKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol GCMUTKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol GCMUTKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<GCMUTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<GCMUTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<GCMUTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<GCMUTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<GCMUTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<GCMUTKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<GCMUTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<GCMUTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<GCMUTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<GCMUTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<GCMUTKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<GCMUTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<GCMUTKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<GCMUTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<GCMUTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<GCMUTKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<GCMUTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) GCMUTKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface GCMUTKotlinx_serialization_coreSerializersModule : GCMUTBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<GCMUTKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<GCMUTKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<GCMUTKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<GCMUTKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<GCMUTKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<GCMUTKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<GCMUTKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<GCMUTKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol GCMUTKotlinAnnotation
@required
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface GCMUTKotlinx_serialization_coreSerialKind : GCMUTBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol GCMUTKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<GCMUTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<GCMUTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<GCMUTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<GCMUTKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<GCMUTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<GCMUTKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<GCMUTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<GCMUTKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<GCMUTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<GCMUTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<GCMUTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<GCMUTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<GCMUTKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<GCMUTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<GCMUTKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<GCMUTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<GCMUTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<GCMUTKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) GCMUTKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface GCMUTKotlinNothing : GCMUTBase
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol GCMUTKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<GCMUTKotlinKClass>)kClass provider:(id<GCMUTKotlinx_serialization_coreKSerializer> (^)(NSArray<id<GCMUTKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<GCMUTKotlinKClass>)kClass serializer:(id<GCMUTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<GCMUTKotlinKClass>)baseClass actualClass:(id<GCMUTKotlinKClass>)actualClass actualSerializer:(id<GCMUTKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<GCMUTKotlinKClass>)baseClass defaultDeserializerProvider:(id<GCMUTKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<GCMUTKotlinKClass>)baseClass defaultDeserializerProvider:(id<GCMUTKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<GCMUTKotlinKClass>)baseClass defaultSerializerProvider:(id<GCMUTKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol GCMUTKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol GCMUTKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol GCMUTKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol GCMUTKotlinKClass <GCMUTKotlinKDeclarationContainer, GCMUTKotlinKAnnotatedElement, GCMUTKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
