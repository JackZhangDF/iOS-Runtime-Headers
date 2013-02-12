/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABPersonTableViewDataSourceDelegate>, <ABStyleProvider>, ABActionsController, ABLabelViewWithVariablePositioning, ABMultiCellContentView, ABNamePropertyGroup, ABPersonCellLayoutManager, ABPersonImageView, ABPersonPickersDelegate, ABPersonTableFooterView, ABPersonTableHeaderView, ABPersonTableView, ABPersonTableViewActionsDelegate, ABPersonTableViewImageDataDelegate, ABPersonTableViewLinkingDelegate, ABPersonTableViewMultiCellDelegate, ABPersonTableViewSharingDelegate, AccountsManager, NSArray, NSDictionary, NSIndexPath, NSMutableArray, NSMutableDictionary, NSString, UIFont, UILabel, UIResponder, UITableViewCell, UIView;

@interface ABPersonTableViewDataSource : NSObject <UITableViewDelegate, UITableViewDataSourcePrivate, ABPrimaryValueDelegate, ABPersonCellLayoutManagerDelegate> {
    AccountsManager *_accountsManager;
    ABActionsController *_actionsController;
    ABPersonTableViewActionsDelegate *_actionsDelegate;
    struct __CFSet { } *_addNewValueProperties;
    struct __CFSet { } *_addNewValuePropertiesStore;
    NSMutableArray *_additionalLabels;
    struct __CFArray { } *_additionalProperties;
    void *_addressBook;
    BOOL _allowsActions;
    BOOL _allowsAddToFavorites;
    BOOL _allowsConferencing;
    BOOL _allowsDeletion;
    BOOL _allowsEditing;
    BOOL _allowsSendingTextMessage;
    BOOL _allowsSharing;
    BOOL _allowsSounds;
    BOOL _allowsVibrations;
    BOOL _attemptDelayedBecomeFirstResponder;
    BOOL _badgeEmailPropertiesForMailVIP;
    NSDictionary *_cachedKeyboardInfo;
    ABPersonCellLayoutManager *_cellLayoutManager;
    int _customKeyboardOutDirection;
    UIView *_customPersonTableFooterView;
    UIView *_customPersonTableHeaderView;
    <ABPersonTableViewDataSourceDelegate> *_delegate;
    struct __CFArray { } *_displayedProperties;
    NSMutableArray *_editablePropertyGroups;
    ABPersonTableFooterView *_footerView;
    ABPersonTableHeaderView *_headerView;
    int _highlightedValueIdentifier;
    BOOL _highlightedValueIsImportant;
    int _highlightedValueProperty;
    BOOL _ignoreVibrationsDidChangeNotification;
    ABPersonTableViewImageDataDelegate *_imageDataDelegate;
    id _insertionLabel;
    int _insertionProperty;
    id _insertionValue;
    BOOL _isEditing;
    BOOL _isEndingEditingTransactions;
    BOOL _isPinningLocked;
    BOOL _isSettingFirstResponder;
    BOOL _isUnlinkingPerson;
    ABMultiCellContentView *_lastActiveMultiCellContentView;
    NSIndexPath *_lastActiveMultiCellIndexPath;
    float _lastReturnedHeaderHeight;
    ABPersonTableViewLinkingDelegate *_linkingDelegate;
    ABLabelViewWithVariablePositioning *_linkingHeaderView;
    ABPersonTableViewMultiCellDelegate *_multiCellContentViewDelegate;
    ABMultiCellContentView *_multiCellContentViewForWillEndEditing;
    struct __CFDictionary { } *_multiCellContentViewsByCustomCell;
    ABNamePropertyGroup *_namePropertyGroup;
    UILabel *_noValueLabel;
    UIView *_notesHeaderView;
    struct __CFArray { } *_optionalProperties;
    UITableViewCell *_partiallySelectedCell;
    NSArray *_people;
    ABPersonPickersDelegate *_pickersDelegate;
    ABMultiCellContentView *_pinningMultiCellContentViewAlternate;
    NSIndexPath *_pinningMultiCellIndexPath;
    NSIndexPath *_pinningMultiCellRelativeIndexPath;
    UIResponder *_pinningResponder;
    void *_preinsertedPerson;
    int _primaryProperty;
    NSMutableArray *_propertyGroups;
    NSMutableDictionary *_propertyGroupsStore;
    BOOL _selectedPropertyForCellWithoutLabelDivider;
    ABPersonTableViewSharingDelegate *_sharingDelegate;
    BOOL _shouldShowContactSourcesStringAsMessage;
    <ABStyleProvider> *_styleProvider;
    UIView *_tableHeaderViewContainer;
    ABPersonTableView *_tableView;
    NSMutableDictionary *_unusedPropertyGroupsStore;
    BOOL _viewControllerWillSlideOut;
}

@property(readonly) ABPersonTableViewActionsDelegate * actionsDelegate;
@property(retain) NSMutableArray * additionalLabels;
@property void* addressBook;
@property BOOL allowsActions;
@property BOOL allowsAddToFavorites;
@property BOOL allowsConferencing;
@property BOOL allowsDeletion;
@property BOOL allowsEditing;
@property BOOL allowsSendingTextMessage;
@property BOOL allowsSharing;
@property BOOL allowsSounds;
@property BOOL allowsVibrations;
@property(copy) NSString * alternateName;
@property(readonly) NSString * attribution;
@property(getter=isAttributionEnabled,readonly) BOOL attributionEnabled;
@property BOOL badgeEmailPropertiesForMailVIP;
@property(readonly) BOOL canSave;
@property int customKeyboardOutDirection;
@property(retain) UIView * customMessageView;
@property(retain) UIView * customPersonTableFooterView;
@property(retain) UIView * customPersonTableHeaderView;
@property <ABPersonTableViewDataSourceDelegate> * delegate;
@property struct __CFArray { }* displayedProperties;
@property(getter=isEditing) BOOL editing;
@property(readonly) BOOL hasChanges;
@property(readonly) BOOL hasImageChanges;
@property(readonly) BOOL hasNameChanges;
@property int highlightedValueIdentifier;
@property BOOL highlightedValueIsImportant;
@property int highlightedValueProperty;
@property BOOL ignoreVibrationsDidChangeNotification;
@property(readonly) ABPersonTableViewImageDataDelegate * imageDataDelegate;
@property(readonly) id insertionLabel;
@property(readonly) int insertionProperty;
@property(readonly) id insertionValue;
@property(readonly) BOOL isEndingEditingTransactions;
@property(readonly) BOOL isPinning;
@property BOOL isSettingFirstResponder;
@property(retain) ABMultiCellContentView * lastActiveMultiCellContentView;
@property(retain) NSIndexPath * lastActiveMultiCellIndexPath;
@property(readonly) ABPersonTableViewLinkingDelegate * linkingDelegate;
@property(copy) NSString * message;
@property(copy) NSString * messageDetail;
@property(retain) UIFont * messageDetailFont;
@property(retain) UIFont * messageFont;
@property(readonly) ABPersonTableViewMultiCellDelegate * multiCellContentViewDelegate;
@property(retain) ABMultiCellContentView * multiCellContentViewForWillEndEditing;
@property(retain) UITableViewCell * partiallySelectedCell;
@property(retain) NSArray * people;
@property(retain) UIView * personHeaderView;
@property(readonly) ABPersonImageView * personImageView;
@property(readonly) ABPersonPickersDelegate * pickersDelegate;
@property(retain) ABMultiCellContentView * pinningMultiCellContentViewAlternate;
@property(retain) NSIndexPath * pinningMultiCellIndexPath;
@property(retain) NSIndexPath * pinningMultiCellRelativeIndexPath;
@property(retain) UIResponder * pinningResponder;
@property(readonly) int primaryProperty;
@property BOOL selectedPropertyForCellWithoutLabelDivider;
@property(readonly) ABPersonTableViewSharingDelegate * sharingDelegate;
@property BOOL shouldAlignPersonHeaderViewToImage;
@property BOOL shouldShowContactSourcesStringAsMessage;
@property(retain) <ABStyleProvider> * styleProvider;
@property(readonly) ABPersonTableFooterView * tableFooterView;
@property(retain) ABPersonTableHeaderView * tableHeaderView;
@property(retain) ABPersonTableView * tableView;
@property BOOL viewControllerWillSlideOut;

- (void)_conferenceHistoryChanged:(id)arg1;
- (id)_contactSourcesString;
- (void*)_copyDefaultPolicy:(void*)arg1;
- (void)_endTableViewUpdatesWithoutScroll;
- (void)_enumerateContextPointersForProperty:(int)arg1 usingBlock:(id)arg2;
- (id)_footerView;
- (void)_getDataProvider:(id*)arg1 andInfo:(id*)arg2 forIndexPath:(id)arg3;
- (void)_getFirstRows:(id*)arg1 andOtherRows:(id*)arg2 fromIndexPaths:(id)arg3;
- (void)_getPropertyGroup:(id*)arg1 index:(int*)arg2 editableFlag:(BOOL*)arg3 atIndexPath:(id)arg4;
- (void)_handleUserGeneratedVibrationsDidChangeNotification;
- (id)_indexPathForHeaderViewRow:(unsigned int)arg1;
- (id)_indexPathForPropertyGroup:(id)arg1 index:(int)arg2 editableFlag:(BOOL)arg3;
- (BOOL)_isReadonlyAtIndexPath:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (id)_linkingHeaderView;
- (id)_multiCellContentViewForCustomPropertyCell:(id)arg1;
- (id)_notesHeaderView;
- (void)_performVibrationRelatedChangesReloadingFromModel:(BOOL)arg1 updatingDataUsingBlock:(id)arg2;
- (void)_registerForKeyboardNotifications;
- (void)_registerForVibrationsChangedNotifications;
- (void)_resetAddNewValueCells;
- (int)_sectionIndexForPropertyGroup:(id)arg1 orProperty:(int)arg2 propertyGroupContext:(void*)arg3 withPropertyGroups:(id)arg4 whenEditing:(BOOL)arg5;
- (void)_setMultiCellContentView:(id)arg1 forCustomPropertyCell:(id)arg2;
- (void)_unregisterForKeyboardNotifications;
- (void)_unregisterForVibrationsChangedNotifications;
- (void)_updateBackgroundForCell:(id)arg1 atIndexPath:(id)arg2;
- (void)_updateCellsForDataProvider:(id)arg1 afterDeleteAtIndex:(int)arg2 isInsertionIndex:(BOOL)arg3 inTableView:(id)arg4;
- (void)_updateDeleteButtonIfNeededForFooterView:(id)arg1;
- (void)_updateTableForVibrationChanges;
- (id)accountsManager;
- (id)actionCellForTableView:(id)arg1 withReuseIdentifier:(id)arg2 isConference:(BOOL)arg3 hasCustomContent:(BOOL)arg4;
- (id)actionsController;
- (id)actionsDelegate;
- (void)addFieldCellSelected:(id)arg1;
- (void)addFieldCellWillSelect:(id)arg1;
- (void)addToContactsButtonClicked:(id)arg1;
- (id)addValueCellForTableView:(id)arg1 withReuseIdentifier:(id)arg2;
- (id)additionalLabels;
- (struct __CFArray { }*)additionalProperties;
- (void*)addressBook;
- (void)adjustTableViewForKeyboardInfo:(id)arg1 animated:(BOOL)arg2;
- (BOOL)allowsActions;
- (BOOL)allowsAddToFavorites;
- (BOOL)allowsConferencing;
- (BOOL)allowsDeletion;
- (BOOL)allowsEditing;
- (BOOL)allowsFaceTimeFavorite;
- (BOOL)allowsSendingTextMessage;
- (BOOL)allowsSharing;
- (BOOL)allowsSounds;
- (BOOL)allowsVibrations;
- (BOOL)allowsVoiceFavorite;
- (id)alternateName;
- (id)attribution;
- (BOOL)badgeEmailPropertiesForMailVIP;
- (void)beginPinning;
- (BOOL)canSave;
- (BOOL)canSelectLabelForPropertyGroup:(id)arg1 info:(id)arg2;
- (void)cancelPinning;
- (id)cellLayoutManager;
- (id)controllerMainView;
- (int)customKeyboardOutDirection;
- (id)customMessageView;
- (id)customPersonTableFooterView;
- (id)customPersonTableHeaderView;
- (void)dealloc;
- (id)delegate;
- (void)deleteButtonClicked:(id)arg1;
- (struct __CFArray { }*)displayedProperties;
- (id)displayedPropertyGroupForProperty:(int)arg1 context:(void*)arg2 whenEditing:(BOOL)arg3;
- (int)editingSectionForNonEditingSection:(int)arg1;
- (void)endEditingTransactions;
- (void)endPinning;
- (BOOL)hasChanges;
- (BOOL)hasImageChanges;
- (BOOL)hasNameChanges;
- (BOOL)hasOnlyRingtoneChanges;
- (void)headerFooterAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (float)heightForFooterInTableView:(id)arg1;
- (float)heightForHeaderInTableView:(id)arg1;
- (int)highlightedValueIdentifier;
- (BOOL)highlightedValueIsImportant;
- (int)highlightedValueProperty;
- (id)ieTableViewCellForPropertyGroup:(id)arg1 tableView:(id)arg2 indexPath:(id)arg3 editing:(BOOL)arg4 allowDequeing:(BOOL)arg5 tag:(int*)arg6;
- (BOOL)ignoreVibrationsDidChangeNotification;
- (id)imageDataDelegate;
- (void)indexOfFirstPropertyGroupSection:(int*)arg1 lastPropertyGroupSection:(int*)arg2 addFieldSection:(int*)arg3 linkingUISection:(int*)arg4 primaryPropertyActionsSection:(int*)arg5 topGroupingActionSection:(int*)arg6 bottomGroupingActionSection:(int*)arg7 cardActionsSection:(int*)arg8 cardActionsSectionCount:(int*)arg9 totalSectionCount:(int*)arg10 whenEditing:(BOOL)arg11;
- (int)indexOfLinkingUISectionWhenEditing:(BOOL)arg1;
- (id)init;
- (id)insertionLabel;
- (int)insertionProperty;
- (id)insertionValue;
- (void)invalidateAdditionalProperties;
- (void)invalidateAllPropertyGroups;
- (void)invalidatePropertyGroupsForEditing:(BOOL)arg1;
- (BOOL)isAttributionEnabled;
- (BOOL)isEditing;
- (BOOL)isEndingEditingTransactions;
- (BOOL)isInFullEditingMode;
- (BOOL)isMe;
- (BOOL)isPinning;
- (BOOL)isPropertyDisplayed:(int)arg1;
- (BOOL)isPropertyOptional:(int)arg1;
- (BOOL)isSettingFirstResponder;
- (BOOL)isUnlinkingPersonWithAnimation;
- (id)lastActiveMultiCellContentView;
- (id)lastActiveMultiCellIndexPath;
- (id)linkedCardCellForTableView:(id)arg1 withReuseIdentifier:(id)arg2;
- (id)linkingDelegate;
- (float)marginForTableView:(id)arg1;
- (id)message;
- (id)messageDetail;
- (id)messageDetailFont;
- (id)messageFont;
- (id)multiCellContentViewDelegate;
- (id)multiCellContentViewForWillEndEditing;
- (id)namePropertyGroup:(id)arg1 primaryValueForProperty:(int)arg2;
- (id)namePropertyGroup;
- (id)newAccessoryViewWhenEditing:(BOOL)arg1 forDataProvider:(id)arg2 info:(id)arg3;
- (struct __CFArray { }*)newAdditionalProperties;
- (id)newHeaderView;
- (id)newPropertyGroupsForEditing:(BOOL)arg1 withDisplayedProperties:(struct __CFArray { }*)arg2;
- (id)newPropertyGroupsForEditing:(BOOL)arg1;
- (id)noValueLabel;
- (void)notifyDataWasReloaded;
- (void)notifyHeaderViewHeightDidChange;
- (int)numberOfRowsInSection:(int)arg1 whenEditing:(BOOL)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (int)numberOfSectionsWhenEditing:(BOOL)arg1;
- (id)partiallySelectedCell;
- (id)people;
- (BOOL)personCellLayoutManager:(id)arg1 isCellInFullEditMode:(id)arg2;
- (id)personHeaderView;
- (id)personImageView;
- (id)pickersDelegate;
- (id)pinningMultiCellContentViewAlternate;
- (id)pinningMultiCellIndexPath;
- (id)pinningMultiCellRelativeIndexPath;
- (id)pinningResponder;
- (void*)policyForPerson:(void*)arg1;
- (id)prepareForLinkingUIUpdate;
- (void)prepareView;
- (void)presentRelatedNamesPicker:(id)arg1;
- (int)primaryProperty;
- (id)primarySourceNameForPerson:(void*)arg1;
- (void)propertyGroup:(id*)arg1 orActions:(id*)arg2 forSection:(int)arg3 whenEditing:(BOOL)arg4;
- (id)propertyGroupForProperty:(int)arg1 context:(void*)arg2 createIfEmpty:(BOOL)arg3;
- (id)propertyGroupForProperty:(int)arg1 context:(void*)arg2;
- (id)propertyGroupsForEditing:(BOOL)arg1;
- (id)realHeaderView;
- (void)reloadConferencing;
- (void)reloadData;
- (void)reloadDataIncludingHeaderView:(BOOL)arg1 invalidatePropertyData:(BOOL)arg2;
- (void)reloadDataIncludingHeaderView:(BOOL)arg1;
- (void)reloadDeleteButton;
- (void)reloadFavoritesData;
- (void)reloadImageData;
- (void)reloadNameData;
- (void)reloadNoValueLabelAnimated:(BOOL)arg1;
- (void)reloadPreferredPersonForName;
- (void)reloadPropertyGroups;
- (void)resetPropertyGroupStores;
- (int)rowIndexInPropertyGroup:(id*)arg1 orActions:(id*)arg2 forRow:(int)arg3 inSection:(int)arg4 whenEditing:(BOOL)arg5;
- (void)scrollToLastActiveEntryFieldAnimated:(BOOL)arg1 becomeFirstResponder:(BOOL)arg2;
- (void)scrollToLastActiveEntryFieldAnimated:(BOOL)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)secondarySourceNameForPerson:(void*)arg1;
- (id)sectionAnimationsDictionaryForEditing:(BOOL)arg1;
- (id)sectionAnimationsDictionaryForOriginalPropertyGroups:(id)arg1 newPropertyGroups:(id)arg2 whenEditing:(BOOL)arg3;
- (id)sectionAnimationsDictionaryForSwipeToDeleteAtIndexPath:(id)arg1;
- (int)sectionIndexForProperty:(int)arg1 propertyGroupContext:(void*)arg2 withPropertyGroups:(id)arg3 whenEditing:(BOOL)arg4;
- (int)sectionIndexForPropertyGroup:(id)arg1 withPropertyGroups:(id)arg2 whenEditing:(BOOL)arg3;
- (void)selectCustomPartWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 occupiedCorners:(unsigned int)arg2 forCell:(id)arg3;
- (void)selectLabelPartForCell:(id)arg1;
- (void)selectValuePartForCell:(id)arg1;
- (void)selectWholePartForCell:(id)arg1;
- (BOOL)selectedPropertyForCellWithoutLabelDivider;
- (void)setAdditionalLabels:(id)arg1;
- (void)setAddressBook:(void*)arg1;
- (void)setAllowsActions:(BOOL)arg1;
- (void)setAllowsAddToFavorites:(BOOL)arg1 andReload:(BOOL)arg2;
- (void)setAllowsAddToFavorites:(BOOL)arg1;
- (void)setAllowsConferencing:(BOOL)arg1 andReload:(BOOL)arg2;
- (void)setAllowsConferencing:(BOOL)arg1;
- (void)setAllowsDeletion:(BOOL)arg1;
- (void)setAllowsEditing:(BOOL)arg1;
- (void)setAllowsSendingTextMessage:(BOOL)arg1 andReload:(BOOL)arg2;
- (void)setAllowsSendingTextMessage:(BOOL)arg1;
- (void)setAllowsSharing:(BOOL)arg1 andReload:(BOOL)arg2;
- (void)setAllowsSharing:(BOOL)arg1;
- (void)setAllowsSounds:(BOOL)arg1;
- (void)setAllowsVibrations:(BOOL)arg1;
- (void)setAlternateName:(id)arg1;
- (void)setAttribution:(id)arg1 enabled:(BOOL)arg2 target:(id)arg3 action:(SEL)arg4;
- (void)setBadgeEmailPropertiesForMailVIP:(BOOL)arg1;
- (void)setCustomKeyboardOutDirection:(int)arg1;
- (void)setCustomMessageView:(id)arg1;
- (void)setCustomPersonTableFooterView:(id)arg1;
- (void)setCustomPersonTableHeaderView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayedProperties:(struct __CFArray { }*)arg1 andRefreshUI:(BOOL)arg2;
- (void)setDisplayedProperties:(struct __CFArray { }*)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setEditing:(BOOL)arg1;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 person:(void*)arg3 important:(BOOL)arg4;
- (void)setHighlightedValueIdentifier:(int)arg1;
- (void)setHighlightedValueIsImportant:(BOOL)arg1;
- (void)setHighlightedValueProperty:(int)arg1;
- (void)setIgnoreVibrationsDidChangeNotification:(BOOL)arg1;
- (void)setInsertionLabel:(id)arg1;
- (void)setInsertionProperty:(int)arg1 value:(id)arg2 label:(id)arg3;
- (void)setInsertionValue:(id)arg1;
- (void)setIsSettingFirstResponder:(BOOL)arg1;
- (void)setLastActiveMultiCellContentView:(id)arg1;
- (void)setLastActiveMultiCellIndexPath:(id)arg1;
- (void)setLinkingDelegate:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setMessageDetail:(id)arg1;
- (void)setMessageDetailFont:(id)arg1;
- (void)setMessageFont:(id)arg1;
- (void)setMultiCellContentViewForWillEndEditing:(id)arg1;
- (void)setPartiallySelectedCell:(id)arg1;
- (void)setPeople:(id)arg1;
- (void)setPersonHeaderView:(id)arg1;
- (void)setPinningMultiCellContentViewAlternate:(id)arg1;
- (void)setPinningMultiCellIndexPath:(id)arg1;
- (void)setPinningMultiCellRelativeIndexPath:(id)arg1;
- (void)setPinningResponder:(id)arg1;
- (void)setPrimaryProperty:(int)arg1 countryCode:(id)arg2;
- (void)setSelectedPropertyForCellWithoutLabelDivider:(BOOL)arg1;
- (void)setShouldAlignPersonHeaderViewToImage:(BOOL)arg1;
- (void)setShouldShowContactSourcesStringAsMessage:(BOOL)arg1;
- (void)setShouldUseAddNewValueCell:(BOOL)arg1 forProperty:(int)arg2;
- (void)setStyleProvider:(id)arg1;
- (void)setTableHeaderView:(id)arg1;
- (void)setTableView:(id)arg1;
- (void)setViewControllerWillSlideOut:(BOOL)arg1;
- (id)sharingDelegate;
- (BOOL)shouldAlignPersonHeaderViewToImage;
- (BOOL)shouldShowContactSourcesStringAsMessage;
- (BOOL)shouldUseAddNewValueCellForProperty:(int)arg1;
- (void)showLinkedCardAtRow:(int)arg1;
- (void)sizeToFit;
- (id)styleProvider;
- (void)swapAddNewValueCellForProperty:(int)arg1 atIndexPath:(id)arg2;
- (id)tableFooterView;
- (id)tableHeaderView;
- (id)tableHeaderViewContainer;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (void)tableView:(id)arg1 cell:(id*)arg2 orTag:(int*)arg3 forRowAtIndexPath:(id)arg4 allowDequeing:(BOOL)arg5;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (BOOL)tableView:(id)arg1 wantsHeaderForSection:(int)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView;
- (void)tableViewAddFieldUpdateAnimationsDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (id)tableViewCellForActions:(id)arg1 tableView:(id)arg2 row:(int)arg3 editing:(BOOL)arg4 allowDequeing:(BOOL)arg5 tag:(int*)arg6;
- (int)tableViewRowAnimationForUpdateAction:(unsigned int)arg1 isFirstRow:(BOOL)arg2;
- (id)titleForNoValueWithProperty:(int)arg1;
- (void)unselectAllCellParts;
- (void)updateByAddingFieldForProperty:(int)arg1 whenEditing:(BOOL)arg2;
- (void)updateCellEditingStyleAtIndexPath:(id)arg1;
- (void)updateContactSourcesStringIfNeeded;
- (void)updateForConferencingAvailabilityChange;
- (void)updateHeadersAndFootersForEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)updateLinkingUI:(id)arg1;
- (void)updateRecord;
- (void)updateSectionHeaderAndFooterHeightsForEditing:(BOOL)arg1;
- (void)updateTableFooterViewAnimated:(BOOL)arg1;
- (void)updateTableHeaderViewAnimated:(BOOL)arg1 andSkipTableViewHeaderHeightNotification:(BOOL)arg2;
- (void)updateTableHeaderViewAnimated:(BOOL)arg1;
- (BOOL)usesAddNewValueCellForProperty:(int)arg1;
- (void)valueAtIndex:(int)arg1 selectedForPropertyGroup:(id)arg2 withMemberCell:(id)arg3 forEditing:(BOOL)arg4;
- (BOOL)viewControllerWillSlideOut;
- (id)viewForFooterInTableView:(id)arg1;
- (id)viewForHeaderInTableView:(id)arg1;

@end