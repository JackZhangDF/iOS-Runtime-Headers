/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class ESDContainer, OABState, OABTableSortedIntArray, OADTable;

@interface OABTable : NSObject {
    struct CGPoint { 
        float x; 
        float y; 
     /* Encoded args for previous method: @12@0:4^{EshShape=^^?S{EshContentData={EshOpt=^^?S{EshHeader=iIsSC}{ChMap<long unsigned int,EshOpt::Value,CsLess<long unsigned int> >={map<long unsigned int,EshOpt::Value,CsLess<long unsigned int>,std::allocator<std::pair<const long unsigned int, EshOpt::Value> > >={_Rb_tree<long unsigned int,std::pair<const long unsigned int, EshOpt::Value>,std::_Select1st<std::pair<const long unsigned int, EshOpt::Value> >,CsLess<long unsigned int>,std::allocator<std::pair<const long unsigned int, EshOpt::Value> > >={_Rb_tree_impl<CsLess<long unsigned int>,false>={CsLess<long unsigned int>=}{_Rb_tree_node_base=i^{_Rb_tree_node_base}^{_Rb_tree_node_base}^{_Rb_tree_node_base}}I}}}}{EshColor={Data=i(Value={RGB=CCC}SS{AdjustedColor=CCb4b1b1b1})}}}{EshOpt=^^?S{EshHeader=iIsSC}{ChMap<long unsigned int,EshOpt::Value,CsLess<long unsigned int> >={map<long unsigned int,EshOpt::Value,CsLess<long unsigned int>,std::allocator<std::pair<const long unsigned int, EshOpt::Value> > >={_Rb_tree<long unsigned int,std::pair<const long unsigned int, EshOpt::Value>,std::_Select1st<std::pair<const long unsigned int, EshOpt::Value> >,CsLess<long unsigned int>,std::allocator<std::pair<const long unsigned int, EshOpt::Value> > >={_Rb_tree_impl<CsLess<long unsigned int>,false>={CsLess<long unsigned int>=}{_Rb_tree_node_base=i^{_Rb_tree_node_base}^{_Rb_tree_node_base}^{_Rb_tree_node_base}}I}}}}{EshColor={Data=i(Value={RGB=CCC}SS{AdjustedColor=CCb4b1b1b1})}}}{EshSp=^^?S{EshHeader=iIsSC}IBBBBBBBBBBBB}{CsRect<long int>=[4l]}}{EshTextBox=^^?S^{EshContentData}}{EshFill=^^?S^{EshContentData}}{EshStroke=^^?S^{EshContentData}}{EshShadow=^^?S^{EshContentData}}{EshExtrusion=^^?S^{EshContentData}}{EshCallout=^^?S^{EshContentData}}^^?{EshShapeProperties=^^?S^{EshContentData}^^?}{EshShapeLocks=^^?S^{EshContentData}}{EshShapeImageData=^^?S^{EshContentData}}{EshTextPath=^^?S^{EshContentData}}{EshPath=^^?S^{EshContentData}}{EshSkew=^^?S^{EshContentData}}{EshQuickTimeData=^^?S{EshHeader=iIsSC}{OcBinaryData=^^?III*B}}}8 */
    struct OABTable2DArray<OABTableCell> { NSInteger x1; NSInteger x2; struct OABTableCell {} *x3; } *mCells;
    NSInteger mColumnCount;
    struct OABTable2DArray<EshShape*> { NSInteger x1; NSInteger x2; struct EshShape {} **x3; } *mHorzLines;
    NSInteger mRowCount;
    } mScale;
    ESDContainer *mSrcTable;
    OABState *mState;
    OADTable *mTgtTable;
    struct OABTable2DArray<EshShape*> { NSInteger x1; NSInteger x2; struct EshShape {} **x3; } *mVertLines;
    OABTableSortedIntArray *mXCoords;
    OABTableSortedIntArray *mYCoords;
}

+ (id)readTable:(id)arg1 state:(id)arg2;

- (void)createTargetTableContents;
- (void)dealloc;
- (id)initWithSourceTable:(id)arg1 targetTable:(id)arg2 state:(id)arg3;
- (void)map;
- (void)mapScale;
- (void)readAnchor;
- (void)readCellsAndLines;
- (void)readCoordinates;
- (id)readStrokeFromShape:(struct EshShape { int (**x1)(); unsigned short x2; struct EshContentData { struct EshOpt { int (**x_1_2_1)(); unsigned short x_1_2_2; struct EshHeader { NSInteger x_3_3_1; NSUInteger x_3_3_2; short x_3_3_3; unsigned short x_3_3_4; unsigned char x_3_3_5; } x_1_2_3; struct ChMap<long unsigned int,EshOpt::Value,CsLess<long unsigned int> > { struct map<long unsigned int,EshOpt::Value,CsLess<long unsigned int>,std::allocator<std::pair<const long unsigned int, EshOpt::Value> > > { struct _Rb_tree<long unsigned int,std::pair<const long unsigned int, EshOpt::Value>,std::_Select1st<std::pair<const long unsigned int, EshOpt::Value> >,CsLess<long unsigned int>,std::allocator<std::pair<const long unsigned int, EshOpt::Value> > > { struct _Rb_tree_impl<CsLess<long unsigned int>,false> { struct CsLess<long unsigned int> { } x_1_6_1; struct _Rb_tree_node_base { NSInteger x_2_7_1; struct _Rb_tree_node_base {} *x_2_7_2; struct _Rb_tree_node_base {} *x_2_7_3; struct _Rb_tree_node_base {} *x_2_7_4; } x_1_6_2; NSUInteger x_1_6_3; } x_1_5_1; } x_1_4_1; } x_4_3_1; } x_1_2_4; struct EshColor { struct Data { NSInteger x_1_4_1; union Value { struct RGB { unsigned char x_1_6_1; unsigned char x_1_6_2; unsigned char x_1_6_3; } x_2_5_1; unsigned short x_2_5_2; unsigned short x_2_5_3; struct AdjustedColor { unsigned char x_4_6_1; unsigned char x_4_6_2; unsigned int x_4_6_3 : 4; unsigned int x_4_6_4 : 1; unsigned int x_4_6_5 : 1; unsigned int x_4_6_6 : 1; } x_2_5_4; } x_1_4_2; } x_5_3_1; } x_1_2_5; } x_3_1_1; struct EshOpt { int (**x_2_2_1)(); unsigned short x_2_2_2; struct EshHeader { NSInteger x_3_3_1; NSUInteger x_3_3_2; short x_3_3_3; unsigned short x_3_3_4; unsigned char x_3_3_5; } x_2_2_3; struct ChMap<long unsigned int,EshOpt::Value,CsLess<long unsigned int> > { struct map<long unsigned int,EshOpt::Value,CsLess<long unsigned int>,std::allocator<std::pair<const long unsigned int, EshOpt::Value> > > { struct _Rb_tree<long unsigned int,std::pair<const long unsigned int, EshOpt::Value>,std::_Select1st<std::pair<const long unsigned int, EshOpt::Value> >,CsLess<long unsigned int>,std::allocator<std::pair<const long unsigned int, EshOpt::Value> > > { struct _Rb_tree_impl<CsLess<long unsigned int>,false> { struct CsLess<long unsigned int> { } x_1_6_1; struct _Rb_tree_node_base { NSInteger x_2_7_1; struct _Rb_tree_node_base {} *x_2_7_2; struct _Rb_tree_node_base {} *x_2_7_3; struct _Rb_tree_node_base {} *x_2_7_4; } x_1_6_2; NSUInteger x_1_6_3; } x_1_5_1; } x_1_4_1; } x_4_3_1; } x_2_2_4; struct EshColor { struct Data { NSInteger x_1_4_1; union Value { struct RGB { unsigned char x_1_6_1; unsigned char x_1_6_2; unsigned char x_1_6_3; } x_2_5_1; unsigned short x_2_5_2; unsigned short x_2_5_3; struct AdjustedColor { unsigned char x_4_6_1; unsigned char x_4_6_2; unsigned int x_4_6_3 : 4; unsigned int x_4_6_4 : 1; unsigned int x_4_6_5 : 1; unsigned int x_4_6_6 : 1; } x_2_5_4; } x_1_4_2; } x_5_3_1; } x_2_2_5; } x_3_1_2; struct EshSp { int (**x_3_2_1)(); unsigned short x_3_2_2; struct EshHeader { NSInteger x_3_3_1; NSUInteger x_3_3_2; short x_3_3_3; unsigned short x_3_3_4; unsigned char x_3_3_5; } x_3_2_3; NSUInteger x_3_2_4; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x_3_2_5; void*x_3_2_6; void*x_3_2_7; void*x_3_2_8; void*x_3_2_9; void*x_3_2_10; void*x_3_2_11; void*x_3_2_12; void*x_3_2_13; void*x_3_2_14; void*x_3_2_15; void*x_3_2_16; } x_3_1_3; struct CsRect<long int> { long x_4_2_1[4]; } x_3_1_4; } x3; struct EshTextBox { int (**x_4_1_1)(); unsigned short x_4_1_2; struct EshContentData {} *x_4_1_3; } x4; struct EshFill { int (**x_5_1_1)(); unsigned short x_5_1_2; struct EshContentData {} *x_5_1_3; } x5; struct EshStroke { int (**x_6_1_1)(); unsigned short x_6_1_2; struct EshContentData {} *x_6_1_3; } x6; struct EshShadow { int (**x_7_1_1)(); unsigned short x_7_1_2; struct EshContentData {} *x_7_1_3; } x7; struct EshExtrusion { int (**x_8_1_1)(); unsigned short x_8_1_2; struct EshContentData {} *x_8_1_3; } x8; struct EshCallout { int (**x_9_1_1)(); unsigned short x_9_1_2; struct EshContentData {} *x_9_1_3; } x9; int (**x10)(); struct EshShapeProperties { int (**x_11_1_1)(); unsigned short x_11_1_2; struct EshContentData {} *x_11_1_3; int (**x_11_1_4)(); } x11; struct EshShapeLocks { int (**x_12_1_1)(); unsigned short x_12_1_2; struct EshContentData {} *x_12_1_3; } x12; struct EshShapeImageData { int (**x_13_1_1)(); unsigned short x_13_1_2; struct EshContentData {} *x_13_1_3; } x13; struct EshTextPath { int (**x_14_1_1)(); unsigned short x_14_1_2; struct EshContentData {} *x_14_1_3; } x14; struct EshPath { int (**x_15_1_1)(); unsigned short x_15_1_2; struct EshContentData {} *x_15_1_3; } x15; struct EshSkew { int (**x_16_1_1)(); unsigned short x_16_1_2; struct EshContentData {} *x_16_1_3; } x16; struct EshQuickTimeData { int (**x_17_1_1)(); unsigned short x_17_1_2; struct EshHeader { NSInteger x_3_2_1; NSUInteger x_3_2_2; short x_3_2_3; unsigned short x_3_2_4; unsigned char x_3_2_5; } x_17_1_3; struct OcBinaryData { int (**x_4_2_1)(); NSUInteger x_4_2_2; NSUInteger x_4_2_3; NSUInteger x_4_2_4; char *x_4_2_5; void*x_4_2_6; } x_17_1_4; } x17; }*)arg1;

@end
