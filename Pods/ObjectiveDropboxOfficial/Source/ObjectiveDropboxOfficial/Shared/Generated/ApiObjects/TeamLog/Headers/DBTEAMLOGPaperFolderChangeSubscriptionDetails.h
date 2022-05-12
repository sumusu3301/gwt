///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGPaperFolderChangeSubscriptionDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `PaperFolderChangeSubscriptionDetails` struct.
///
/// Followed/unfollowed Paper folder.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGPaperFolderChangeSubscriptionDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Event unique identifier.
@property (nonatomic, readonly, copy) NSString *eventUuid;

/// New folder subscription level.
@property (nonatomic, readonly, copy) NSString *dNewSubscriptionLevel;

/// Previous folder subscription level. Might be missing due to historical data
/// gap.
@property (nonatomic, readonly, copy, nullable) NSString *previousSubscriptionLevel;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param eventUuid Event unique identifier.
/// @param dNewSubscriptionLevel New folder subscription level.
/// @param previousSubscriptionLevel Previous folder subscription level. Might
/// be missing due to historical data gap.
///
/// @return An initialized instance.
///
- (instancetype)initWithEventUuid:(NSString *)eventUuid
            dNewSubscriptionLevel:(NSString *)dNewSubscriptionLevel
        previousSubscriptionLevel:(nullable NSString *)previousSubscriptionLevel;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param eventUuid Event unique identifier.
/// @param dNewSubscriptionLevel New folder subscription level.
///
/// @return An initialized instance.
///
- (instancetype)initWithEventUuid:(NSString *)eventUuid dNewSubscriptionLevel:(NSString *)dNewSubscriptionLevel;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `PaperFolderChangeSubscriptionDetails`
/// struct.
///
@interface DBTEAMLOGPaperFolderChangeSubscriptionDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGPaperFolderChangeSubscriptionDetails` instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGPaperFolderChangeSubscriptionDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGPaperFolderChangeSubscriptionDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGPaperFolderChangeSubscriptionDetails *)instance;

///
/// Deserializes `DBTEAMLOGPaperFolderChangeSubscriptionDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGPaperFolderChangeSubscriptionDetails` API object.
///
/// @return An instantiation of the
/// `DBTEAMLOGPaperFolderChangeSubscriptionDetails` object.
///
+ (DBTEAMLOGPaperFolderChangeSubscriptionDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
