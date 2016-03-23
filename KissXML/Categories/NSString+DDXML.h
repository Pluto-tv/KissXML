#import <Foundation/Foundation.h>

#if DDXML_LIBXML_MODULE_ENABLED
#if TARGET_OS_TV && !TARGET_OS_SIMULATOR
@import libxml;
#elif TARGET_OS_TV && TARGET_OS_SIMULATOR
@import libxmlSimu;
#elif TARGET_OS_MAC
@import libxmlMac;
#endif
#else
#import <libxml/tree.h>
#endif

@interface NSString (DDXML)

/**
 * xmlChar - A basic replacement for char, a byte in a UTF-8 encoded string.
**/
- (const xmlChar *)xmlChar;

- (NSString *)stringByTrimming;

@end
