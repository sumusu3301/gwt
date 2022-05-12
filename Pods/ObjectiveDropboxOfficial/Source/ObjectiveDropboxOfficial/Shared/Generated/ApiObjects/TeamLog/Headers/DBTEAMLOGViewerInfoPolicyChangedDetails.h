///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGPassPolicy;
@class DBTEAMLOGViewerInfoPolicyChangedDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `ViewerInfoPolicyChangedDetails` struct.
///
/// Changed team policy for viewer info.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGViewerInfoPolicyChangedDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Previous Viewer Info policy.
@property (nonatomic, readonly) DBTEAMLOGPassPolicy *previousValue;

/// New Viewer Info policy.
@property (nonatomic, readonly) DBTEAMLOGPassPolicy *dNewValue;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param previousValue Previous Viewer Info policy.
/// @param dNewValue New Viewer Info policy.
///
/// @return An initialized instance.
///
- (instancetype)initWithPreviousValue:(DBTEAMLOGPassPolicy *)previousValue dNewValue:(DBTEAMLOGPassPolicy *)dNewValue;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `ViewerInfoPolicyChangedDetails` struct.
///
@interface DBTEAMLOGViewerInfoPolicyChangedDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGViewerInfoPolicyChangedDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGViewerInfoPolicyChangedDetails`
/// API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGViewerInfoPolicyChangedDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGViewerInfoPolicyChangedDetails *)instance;

///
/// Deserializes `DBTEAMLOGViewerInfoPolicyChangedDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGViewerInfoPolicyChangedDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGViewerInfoPolicyChangedDetails`
/// object.
///
+ (DBTEAMLOGViewerInfoPolicyChangedDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
