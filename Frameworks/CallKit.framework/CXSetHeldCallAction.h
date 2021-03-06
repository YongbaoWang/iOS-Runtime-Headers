/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXSetHeldCallAction : CXCallAction {
    BOOL  _onHold;
}

@property (getter=isOnHold, nonatomic) BOOL onHold;

+ (BOOL)supportsSecureCoding;

- (id)customDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCallUUID:(id)arg1 onHold:(BOOL)arg2;
- (id)initWithCoder:(id)arg1;
- (BOOL)isOnHold;
- (void)setOnHold:(BOOL)arg1;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;

@end
