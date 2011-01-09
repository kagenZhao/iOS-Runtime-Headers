/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class NSMutableArray, NSArray, NSString, VMUMachTaskContainer;



@interface VMUSymbolicator : NSObject 
{
    NSMutableArray *_symbolOwners;
    NSArray *_symbolOwnerAddressRanges;
    NSString *_path;
    VMUMachTaskContainer *_machTaskContainer;
    BOOL _isProtected;
}

+ (id)symbolicatorsForPath:(id)arg1;
+ (id)symbolicatorForPath:(id)arg1 architecture:(id)arg2;
+ (id)symbolicatorForTask:(NSUInteger)arg1;
+ (id)symbolicatorForPid:(NSInteger)arg1;
+ (id)symbolicatorForMachTaskContainer:(id)arg1;
+ (id)symbolicatorForSignature:(id)arg1;
+ (id)convertHeaderToSymbolOwner:(id)arg1 allowLazySymbolOwners:(BOOL)arg2;
+ (id)symbolicatorWithHeaders:(id)arg1 allowLazySymbolOwners:(BOOL)arg2 path:(id)arg3 machTaskContainer:(id)arg4;
+ (id)symbolicatorWithSymbolOwners:(id)arg1 path:(id)arg2 machTaskContainer:(id)arg3;
+ (id)ignoreFunctionSymbols:(BOOL)arg1;
+ (BOOL)isIgnoreFunctionSymbols;

- (id)faultLazySymbolOwnerAtIndex:(NSInteger)arg1;
- (BOOL)addSymbolRichFile:(id)arg1;
- (void)replaceSymbolOwner:(id)arg1 withSymbolOwner:(id)arg2;
- (BOOL)containsAddress:(unsigned long long)arg1;
- (id)regions;
- (id)regionForAddress:(unsigned long long)arg1;
- (id)regionsInAddressRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)regionsForName:(id)arg1;
- (id)symbolForAddress:(unsigned long long)arg1;
- (id)sourceInfoForAddress:(unsigned long long)arg1;
- (id)symbolOwnerForAddress:(unsigned long long)arg1;
- (id)symbolOwnersInAddressRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)symbolsForName:(id)arg1;
- (id)symbolsForMangledName:(id)arg1;
- (id)symbolOwnersForName:(id)arg1;
- (id)symbolOwnerForName:(id)arg1;
- (id)symbolOwnersWithFlags:(NSUInteger)arg1;
- (id)symbolOwnerForPath:(id)arg1;
- (id)symbols;
- (id)sourceInfos;
- (id)symbolOwners;
- (id)symbolsInAddressRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)sourceInfosInAddressRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)path;
- (NSInteger)pid;
- (id)signature;
- (BOOL)isProtected;
- (void)forceFullSymbolExtraction;
- (id)architecture;
- (id)description;
- (void)dealloc;
- (id)initWithSymbolOwners:(id)arg1 path:(id)arg2 machTaskContainer:(id)arg3;
- (id)programTextForAddress:(unsigned long long)arg1;
- (id)programTextForAddressRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)symbolForOneAddress:(unsigned long long)arg1;
- (id)symbolOwnerNameForAddress:(unsigned long long)arg1;

@end