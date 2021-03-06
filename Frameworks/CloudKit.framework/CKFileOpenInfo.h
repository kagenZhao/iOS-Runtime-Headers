/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFileOpenInfo : NSObject <NSSecureCoding> {
    NSString *_UUID;
    NSNumber *_deviceID;
    NSNumber *_fileID;
    NSNumber *_generationID;
    NSString *_path;
    BOOL _shouldReadRawEncryptedData;
}

@property (nonatomic, retain) NSString *UUID;
@property (nonatomic, retain) NSNumber *deviceID;
@property (nonatomic, retain) NSNumber *fileID;
@property (nonatomic, retain) NSNumber *generationID;
@property (nonatomic, retain) NSString *path;
@property (nonatomic) BOOL shouldReadRawEncryptedData;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)UUID;
- (id)description;
- (id)deviceID;
- (void)encodeWithCoder:(id)arg1;
- (id)fileID;
- (id)generationID;
- (id)initWithCoder:(id)arg1;
- (id)path;
- (void)setDeviceID:(id)arg1;
- (void)setFileID:(id)arg1;
- (void)setGenerationID:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setShouldReadRawEncryptedData:(BOOL)arg1;
- (void)setUUID:(id)arg1;
- (BOOL)shouldReadRawEncryptedData;

@end
