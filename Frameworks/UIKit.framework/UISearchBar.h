/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UISearchBarDelegate>, NSArray, NSString, UIButton, UIColor, UIImageView, UILabel, UITextField, UIView;

@interface UISearchBar : UIView {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    struct { 
        unsigned int barStyle : 3; 
        unsigned int showsBookmarkButton : 1; 
        unsigned int showsCancelButton : 1; 
        unsigned int isTranslucent : 1; 
        unsigned int autoDisableCancelButton : 1; 
        unsigned int showsScopeBar : 1; 
        unsigned int hideBackground : 1; 
        unsigned int combinesLandscapeBars : 1; 
        unsigned int usesEmbeddedAppearance : 1; 
    UIView *_background;
    UIButton *_cancelButton;
    NSString *_cancelButtonText;
    } _contentInset;
    id _controller;
    <UISearchBarDelegate> *_delegate;
    UILabel *_promptLabel;
    UIView *_scopeBar;
    NSArray *_scopes;
    } _searchBarFlags;
    UITextField *_searchField;
    NSInteger _selectedScope;
    UIImageView *_separator;
    UIColor *_tintColor;
}

@property(retain) UIColor *tintColor; /* unknown property attribute: V_tintColor */
@property <UISearchBarDelegate> *delegate; /* unknown property attribute: V_delegate */
@property(copy) NSString *placeholder;
@property(copy) NSString *prompt;
@property(copy) NSArray *scopeButtonTitles;
@property(copy) NSString *text;
@property NSInteger autocapitalizationType;
@property NSInteger autocorrectionType;
@property NSInteger barStyle;
@property NSInteger keyboardType;
@property NSInteger selectedScopeButtonIndex;
@property BOOL showsBookmarkButton;
@property BOOL showsCancelButton;
@property BOOL showsScopeBar;
@property(getter=isTranslucent) BOOL translucent;

- (void)_bookmarkButtonPressed;
- (void)_cancelButtonPressed;
- (void)_destroyCancelButton;
- (void)_hideShowAnimationDidFinish;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_scopeChanged:(id)arg1;
- (void)_searchFieldBeginEditing;
- (void)_searchFieldEditingChanged;
- (void)_searchFieldEndEditing;
- (void)_searchFieldReturnPressed;
- (void)_setAutoDisableCancelButton:(BOOL)arg1;
- (void)_setCancelButtonText:(id)arg1;
- (void)_setShowsCancelButton:(BOOL)arg1;
- (void)_setShowsSeparator:(BOOL)arg1;
- (void)_setUpScopeBar;
- (void)_setupCancelButton;
- (void)_setupPromptLabel;
- (void)_setupSearchField;
- (void)_updateOpacity;
- (void)_updateSearchFieldArt;
- (NSInteger)autocapitalizationType;
- (NSInteger)autocorrectionType;
- (id)backgroundImage;
- (NSInteger)barStyle;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canResignFirstResponder;
- (id)cancelButton;
- (BOOL)combinesLandscapeBars;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInset;
- (id)controller;
- (void)dealloc;
- (id)delegate;
- (BOOL)drawsBackground;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (BOOL)isFirstResponder;
- (BOOL)isTranslucent;
- (NSInteger)keyboardType;
- (void)layoutSubviews;
- (id)placeholder;
- (id)prompt;
- (BOOL)resignFirstResponder;
- (id)scopeButtonTitles;
- (id)searchField;
- (NSInteger)selectedScopeButtonIndex;
- (void)setAutocapitalizationType:(NSInteger)arg1;
- (void)setAutocorrectionType:(NSInteger)arg1;
- (void)setBackgroundImage:(id)arg1;
- (void)setBarStyle:(NSInteger)arg1;
- (void)setCancelButton:(id)arg1;
- (void)setCombinesLandscapeBars:(BOOL)arg1;
- (void)setContentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDrawsBackground:(BOOL)arg1;
- (void)setKeyboardType:(NSInteger)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setPrompt:(id)arg1;
- (void)setScopeButtonTitles:(id)arg1;
- (void)setSelectedScopeButtonIndex:(NSInteger)arg1;
- (void)setShowsBookmarkButton:(BOOL)arg1;
- (void)setShowsCancelButton:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setShowsCancelButton:(BOOL)arg1;
- (void)setShowsScopeBar:(BOOL)arg1;
- (void)setText:(id)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTranslucent:(BOOL)arg1;
- (void)setUsesEmbeddedAppearance:(BOOL)arg1;
- (BOOL)showsBookmarkButton;
- (BOOL)showsCancelButton;
- (BOOL)showsScopeBar;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)text;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2 replacementString:(id)arg3;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (BOOL)textFieldShouldEndEditing:(id)arg1;
- (id)tintColor;
- (BOOL)usesEmbeddedAppearance;

@end
