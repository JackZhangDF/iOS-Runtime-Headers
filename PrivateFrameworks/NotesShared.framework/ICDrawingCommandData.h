/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICDrawingCommandData : NSObject {
    struct { 
        struct CGPoint { 
            float x; 
            float y; 
        } point; 
        float radius; 
        float opacity; 
        float azimuth; 
        float edgeWidth; 
        float aspectRatio; 
        double timestamp; 
    }  _baseValues;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _cachedBounds;
    struct CGPoint { 
        float x; 
        float y; 
    }  _clipNormal;
    struct CGPoint { 
        float x; 
        float y; 
    }  _clipOrigin;
    struct CGColor { } * _color;
    struct ICDrawingCommandID { 
        unsigned int clock; 
        NSUUID *replicaUUID; 
        unsigned int subclock; 
    }  _commandID;
    BOOL  _isClipped;
    struct { 
        float baseAlpha; 
        float blendAlpha; 
        float targetMultiple; 
    }  _parameters;
    struct vector<ICDrawingOutputPoint, std::__1::allocator<ICDrawingOutputPoint> > { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<ICDrawingOutputPoint *, std::__1::allocator<ICDrawingOutputPoint> > { 
            struct { /* ? */ } *__first_; 
        } __end_cap_; 
    }  _points;
    unsigned int  _type;
}

@property (nonatomic) struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; float x2; float x3; float x4; float x5; float x6; double x7; } baseValues;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } bounds;
@property (nonatomic) struct CGPoint { float x1; float x2; } clipNormal;
@property (nonatomic) struct CGPoint { float x1; float x2; } clipOrigin;
@property (nonatomic, retain) struct CGColor { }*color;
@property (nonatomic) struct ICDrawingCommandID { unsigned int x1; id x2; } commandID;
@property BOOL isClipped;
@property (nonatomic) struct { float x1; float x2; float x3; } parameters;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{vector<ICDrawingOutputPoint' */ struct *points; /* unknown property attribute:  std::__1::allocator<ICDrawingOutputPoint> >=^{?}}} */
@property (nonatomic, readonly) unsigned int randomSeed;
@property (nonatomic) unsigned int type;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; float x2; float x3; float x4; float x5; float x6; double x7; })baseValues;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (struct CGPoint { float x1; float x2; })clipNormal;
- (struct CGPoint { float x1; float x2; })clipOrigin;
- (struct CGColor { }*)color;
- (struct ICDrawingCommandID { unsigned int x1; id x2; })commandID;
- (void)dealloc;
- (id)description;
- (unsigned int)hash;
- (id)init;
- (id)initWithArchive:(const struct Command { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_5_1; unsigned int x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[11]; } x_1_4_2; struct __raw { unsigned long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct CommandID {} *x5; struct Color {} *x6; struct Point {} *x7; struct RepeatedPtrField<drawing::Point> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct CommandID {} *x9; struct Rectangle {} *x10; struct Point {} *x11; struct Point {} *x12; struct Parameters {} *x13; unsigned int x14; }*)arg1 version:(unsigned int)arg2 sortedUUIDs:(id)arg3;
- (void)invalidateBounds;
- (BOOL)isClipped;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualDrawingCommandData:(id)arg1;
- (struct { float x1; float x2; float x3; })parameters;
- (struct vector<ICDrawingOutputPoint, std::__1::allocator<ICDrawingOutputPoint> > { struct { /* ? */ } *x1; struct { /* ? */ } *x2; struct __compressed_pair<ICDrawingOutputPoint *, std::__1::allocator<ICDrawingOutputPoint> > { struct { /* ? */ } *x_3_1_1; } x3; }*)points;
- (unsigned int)randomSeed;
- (struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; float x2; float x3; float x4; float x5; float x6; double x7; })readPointFromArchive:(const struct Point { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_5_1; unsigned int x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[11]; } x_1_4_2; struct __raw { unsigned long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; }*)arg1 deltaFrom:(const struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; float x2; float x3; float x4; float x5; float x6; double x7; }*)arg2;
- (double)renderCost;
- (unsigned int)savePoint:(const struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; float x2; float x3; float x4; float x5; float x6; double x7; }*)arg1 deltaFrom:(const struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; float x2; float x3; float x4; float x5; float x6; double x7; }*)arg2 toArchive:(struct Point { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_5_1; unsigned int x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[11]; } x_1_4_2; struct __raw { unsigned long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; }*)arg3;
- (unsigned int)saveToArchive:(struct Command { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_5_1; unsigned int x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[11]; } x_1_4_2; struct __raw { unsigned long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct CommandID {} *x5; struct Color {} *x6; struct Point {} *x7; struct RepeatedPtrField<drawing::Point> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct CommandID {} *x9; struct Rectangle {} *x10; struct Point {} *x11; struct Point {} *x12; struct Parameters {} *x13; unsigned int x14; }*)arg1 sortedUUIDs:(id)arg2 withPathData:(BOOL)arg3 isHidden:(BOOL)arg4;
- (void)setBaseValues:(struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; float x2; float x3; float x4; float x5; float x6; double x7; })arg1;
- (void)setClipNormal:(struct CGPoint { float x1; float x2; })arg1;
- (void)setClipOrigin:(struct CGPoint { float x1; float x2; })arg1;
- (void)setColor:(struct CGColor { }*)arg1;
- (void)setCommandID:(struct ICDrawingCommandID { unsigned int x1; id x2; })arg1;
- (void)setIsClipped:(BOOL)arg1;
- (void)setParameters:(struct { float x1; float x2; float x3; })arg1;
- (void)setType:(unsigned int)arg1;
- (unsigned int)type;
- (struct { float x1; float x2; float x3; })version1Parameters;

@end
