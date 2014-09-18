/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSData, NSHashTable, NSMutableArray, NSMutableIndexSet, NSMutableString;

@interface SGHtmlParserDissectorTask : NSObject {
    NSMutableArray *_activeRegionIndexSetStack;
    NSMutableArray *_activeRegionStartPositionStack;
    NSHashTable *_activeRegions;
    unsigned long long _bytesConsumedInPreviousPasses;
    NSMutableString *_currentLineText;
    unsigned long long _depth;
    NSMutableIndexSet *_depthsWithActiveRegions;
    struct _xmlParserCtxt { struct _xmlSAXHandler {} *x1; void *x2; struct _xmlDoc {} *x3; int x4; int x5; char *x6; char *x7; int x8; int x9; struct _xmlParserInput {} *x10; int x11; int x12; struct _xmlParserInput {} **x13; struct _xmlNode {} *x14; int x15; int x16; struct _xmlNode {} **x17; int x18; struct _xmlParserNodeInfoSeq { unsigned long long x_19_1_1; unsigned long long x_19_1_2; struct _xmlParserNodeInfo {} *x_19_1_3; } x19; int x20; int x21; int x22; int x23; int x24; int x25; struct _xmlValidCtxt { void *x_26_1_1; int (*x_26_1_2)(); int (*x_26_1_3)(); struct _xmlNode {} *x_26_1_4; int x_26_1_5; int x_26_1_6; struct _xmlNode {} **x_26_1_7; unsigned int x_26_1_8; struct _xmlDoc {} *x_26_1_9; int x_26_1_10; struct _xmlValidState {} *x_26_1_11; int x_26_1_12; int x_26_1_13; struct _xmlValidState {} *x_26_1_14; struct _xmlAutomata {} *x_26_1_15; struct _xmlAutomataState {} *x_26_1_16; } x26; int x27; int x28; char *x29; char *x30; int x31; int x32; char **x33; long long x34; long long x35; int x36; int x37; int x38; char *x39; char *x40; char *x41; int *x42; int x43; int x44; int *x45; int x46; struct _xmlParserInput {} *x47; int x48; int x49; int x50; int x51; void *x52; int x53; int x54; void *x55; int x56; int x57; struct _xmlDict {} *x58; char **x59; int x60; int x61; char *x62; char *x63; char *x64; int x65; int x66; int x67; char **x68; int *x69; void **x70; struct _xmlHashTable {} *x71; struct _xmlHashTable {} *x72; int x73; int x74; int x75; int x76; struct _xmlNode {} *x77; int x78; struct _xmlAttr {} *x79; struct _xmlError { int x_80_1_1; int x_80_1_2; char *x_80_1_3; int x_80_1_4; char *x_80_1_5; int x_80_1_6; char *x_80_1_7; char *x_80_1_8; char *x_80_1_9; int x_80_1_10; int x_80_1_11; void *x_80_1_12; void *x_80_1_13; } x80; int x81; unsigned long long x82; unsigned long long x83; struct _xmlParserNodeInfo {} *x84; int x85; int x86; struct _xmlParserNodeInfo {} *x87; int x88; unsigned long long x89; } *_parserContext;
    NSMutableArray *_plainTextLineToHTMLOffset;
    NSMutableArray *_plainTextLines;
    unsigned long long _plainTextLinesTotalLength;
    unsigned long long _quoteToEndFromPosition;
    NSMutableIndexSet *_quotedRegions;
    NSMutableIndexSet *_tabularRegions;
    NSData *_utf8;
    bool_currentLineIsCollapsed;
    bool_renderingSuspended;
}

- (void).cxx_destruct;
- (void)enterRegion:(id)arg1;
- (void)newBlock;
- (void)process:(id)arg1;
- (void)processCurrentLineOfText;
- (void)quoteToEnd;
- (void)resumeRendering;
- (void)startQuotedRegion;
- (void)startTable;
- (void)suspendRendering;
- (void)tagEnd;
- (void)tagStart;
- (void)textContent:(const char *)arg1 len:(int)arg2;
- (void)uncollapseCurrentLine;

@end