/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/WXTableRow.h>
#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/XXUnknownSuperclass.h>


__attribute__((visibility("hidden")))
@interface WXTableRow : XXUnknownSuperclass {
}
+ (void)readFrom:(xmlNode *)from tableGrid:(ChVector<long int> *)grid to:(id)to state:(id)state;	// 0x1985d5
@end

@interface WXTableRow (Private)
+ (void)readCellsFrom:(xmlNode *)from tableGrid:(ChVector<long int> *)grid to:(id)to gridIndex:(int *)index state:(id)state;	// 0x198805
@end