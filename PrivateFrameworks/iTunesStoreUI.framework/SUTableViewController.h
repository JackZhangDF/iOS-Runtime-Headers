/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSIndexPath, SUTableDataSource, UITableView, UIView;

@interface SUTableViewController : SUViewController <UITableViewDataSource, UITableViewDelegate> {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    UIView *_bottomOverlayView;
    SUTableDataSource *_dataSource;
    NSIndexPath *_firstTapIndexPath;
    } _originalEdgeInsets;
    NSInteger _placeholderRowCount;
    UITableView *_tableView;
    NSInteger _tableViewStyle;
}

@property NSInteger tableViewStyle; /* unknown property attribute: V_tableViewStyle */
@property(readonly) UITableView *tableView; /* unknown property attribute: V_tableView */
@property(retain) SUTableDataSource *dataSource; /* unknown property attribute: V_dataSource */
@property(retain) UIView *bottomOverlayView; /* unknown property attribute: V_bottomOverlayView */
@property(readonly) NSUInteger numberOfRows;

- (void)_addBottomOverlayView;
- (void)_deliverTapCount:(NSInteger)arg1 forIndexPath:(id)arg2;
- (void)_doubleTapTimeout;
- (void)_reloadPlaceholderCells;
- (void)_removeBottomOverlayView;
- (id)bottomOverlayView;
- (NSInteger)clippedCornersForIndexPath:(id)arg1;
- (id)copyArchivableContext;
- (id)dataSource;
- (void)dealloc;
- (BOOL)deleteRowAtIndexPath:(id)arg1;
- (BOOL)handleSelectionForIndexPath:(id)arg1 tapCount:(NSInteger)arg2;
- (BOOL)indexPathIsPlaceholder:(id)arg1;
- (void)loadView;
- (NSUInteger)numberOfRows;
- (NSInteger)numberOfSectionsInTableView:(id)arg1;
- (void)purgeMemoryForReason:(NSInteger)arg1;
- (void)reloadData;
- (void)scrollToRowAtIndexPath:(id)arg1 atScrollPosition:(NSInteger)arg2 animated:(BOOL)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setBottomOverlayView:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setTableViewStyle:(NSInteger)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(NSInteger)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (NSInteger)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(NSInteger)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(NSInteger)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView;
- (NSInteger)tableViewStyle;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
