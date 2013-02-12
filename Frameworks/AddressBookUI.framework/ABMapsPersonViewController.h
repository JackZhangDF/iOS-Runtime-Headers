/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABMapsPersonViewController : ABUnknownPersonViewController {
    BOOL _showAddToBookmarks;
    BOOL _showDirections;
    BOOL _showRemovePin;
    BOOL _showShareLocation;
}

@property BOOL shouldShowShareLocation; /* unknown property attribute: V_showShareLocation */
@property BOOL shouldShowRemovePin; /* unknown property attribute: V_showRemovePin */
@property BOOL shouldShowAddToBookmarks; /* unknown property attribute: V_showAddToBookmarks */
@property BOOL shouldShowDirections; /* unknown property attribute: V_showDirections */
@property <ABMapsPersonViewControllerDelegate> *mapsPersonViewControllerDelegate;

- (void)addToBookmarks:(id)arg1 identifier:(id)arg2;
- (BOOL)allowsAddingToAddressBook;
- (id)attribution;
- (void)attributionSelected:(id)arg1;
- (void)directionsFrom:(id)arg1 identifier:(id)arg2;
- (void)directionsTo:(id)arg1 identifier:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)isAttributionEnabled;
- (id)mapsPersonViewControllerDelegate;
- (BOOL)personViewControllerHelper:(id)arg1 shouldContinueAfterSelectingPropertyAtIndex:(NSInteger)arg2 inPropertyGroup:(id)arg3;
- (void)reloadImageData;
- (void)removePin:(id)arg1;
- (void)setAllowsAddingToAddressBook:(BOOL)arg1;
- (void)setAttribution:(id)arg1;
- (void)setMapsPersonViewControllerDelegate:(id)arg1;
- (void)setShouldShowAddToBookmarks:(BOOL)arg1;
- (void)setShouldShowDirections:(BOOL)arg1;
- (void)setShouldShowRemovePin:(BOOL)arg1;
- (void)setShouldShowShareLocation:(BOOL)arg1;
- (void)shareLocation:(id)arg1 identifier:(id)arg2;
- (BOOL)shouldShowAddToBookmarks;
- (BOOL)shouldShowDirections;
- (BOOL)shouldShowRemovePin;
- (BOOL)shouldShowShareLocation;

@end
