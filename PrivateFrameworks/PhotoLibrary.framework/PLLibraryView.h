/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSArray, PLEmptyAlbumView, UITableView;

@interface PLLibraryView : UIView <UITableViewDataSource, UITableViewDelegate> {
    NSArray *_albums;
    id _delegate;
    PLEmptyAlbumView *_emptyLibraryView;
    UITableView *_tableView;
}

- (BOOL)_hasContent;
- (void)_pictureWasDeleted:(id)arg1;
- (void)_pictureWasTaken:(id)arg1;
- (void)_updateInterface;
- (void)cameraAlbumDidChange;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)loadCurrentConfiguration:(id)arg1;
- (void)setAlbums:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)storeCurrentConfiguration:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (id)tableView;
- (void)updateButtonBar:(id)arg1 duration:(float)arg2;
- (void)viewWillBeDisplayed;

@end
