/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleFaceTileImageRequestResult : NSObject {
    id  _assetObjectID;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _faceRect;
    UIImage * _image;
    BOOL  _isDegraded;
    id  _originalObjectID;
    struct PXFaceTileImageParams { 
        struct CGSize { 
            float width; 
            float height; 
        } targetSize; 
        unsigned int cropFactor; 
        BOOL round; 
        BOOL cropBounded; 
    }  _params;
}

@property (nonatomic, retain) id assetObjectID;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } faceRect;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) BOOL isDegraded;
@property (nonatomic, retain) id originalObjectID;
@property (nonatomic) struct PXFaceTileImageParams { struct CGSize { float x_1_1_1; float x_1_1_2; } x1; unsigned int x2; BOOL x3; BOOL x4; } params;

- (void).cxx_destruct;
- (id)assetObjectID;
- (id)description;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })faceRect;
- (id)image;
- (id)initWithImage:(id)arg1 faceRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 isDegraded:(BOOL)arg3;
- (BOOL)isDegraded;
- (id)originalObjectID;
- (struct PXFaceTileImageParams { struct CGSize { float x_1_1_1; float x_1_1_2; } x1; unsigned int x2; BOOL x3; BOOL x4; })params;
- (void)setAssetObjectID:(id)arg1;
- (void)setOriginalObjectID:(id)arg1;
- (void)setParams:(struct PXFaceTileImageParams { struct CGSize { float x_1_1_1; float x_1_1_2; } x1; unsigned int x2; BOOL x3; BOOL x4; })arg1;

@end
