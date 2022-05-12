///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBFILESSyncSettingArg;
@class DBTEAMTeamFolderCreateArg;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `TeamFolderCreateArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMTeamFolderCreateArg : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Name for the new team folder.
@property (nonatomic, readonly, copy) NSString *name;

/// The sync setting to apply to this team folder. Only permitted if the team
/// has team selective sync enabled.
@property (nonatomic, readonly, nullable) DBFILESSyncSettingArg *syncSetting;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param name Name for the new team folder.
/// @param syncSetting The sync setting to apply to this team folder. Only
/// permitted if the team has team selective sync enabled.
///
/// @return An initialized instance.
///
- (instancetype)initWithName:(NSString *)name syncSetting:(nullable DBFILESSyncSettingArg *)syncSetting;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param name Name for the new team folder.
///
/// @return An initialized instance.
///
- (instancetype)initWithName:(NSString *)name;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `TeamFolderCreateArg` struct.
///
@interface DBTEAMTeamFolderCreateArgSerializer : NSObject

///
/// Serializes `DBTEAMTeamFolderCreateArg` instances.
///
/// @param instance An instance of the `DBTEAMTeamFolderCreateArg` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMTeamFolderCreateArg` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMTeamFolderCreateArg *)instance;

///
/// Deserializes `DBTEAMTeamFolderCreateArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMTeamFolderCreateArg` API object.
///
/// @return An instantiation of the `DBTEAMTeamFolderCreateArg` object.
///
+ (DBTEAMTeamFolderCreateArg *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
