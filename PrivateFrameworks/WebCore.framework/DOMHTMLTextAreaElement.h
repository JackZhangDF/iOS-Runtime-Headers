/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMHTMLTextAreaElement : DOMHTMLElement {
}

@property(copy) NSString *accessKey;
@property(copy) NSString *defaultValue;
@property(retain,readonly) DOMHTMLFormElement *form;
@property(copy) NSString *name;
@property(copy,readonly) NSString *type;
@property(copy) NSString *value;
@property NSInteger cols;
@property BOOL disabled;
@property BOOL readOnly;
@property NSInteger rows;

- (BOOL)_isEdited;
- (id)accessKey;
- (BOOL)autocapitalize;
- (BOOL)autocorrect;
- (BOOL)autofocus;
- (NSInteger)cols;
- (id)createPeripheral;
- (id)defaultValue;
- (BOOL)disabled;
- (id)form;
- (BOOL)isTextControl;
- (id)name;
- (BOOL)nodeCanBecomeFirstResponder;
- (BOOL)readOnly;
- (NSInteger)rows;
- (void)select;
- (NSInteger)selectionEnd;
- (NSInteger)selectionStart;
- (void)setAccessKey:(id)arg1;
- (void)setAutocapitalize:(BOOL)arg1;
- (void)setAutocorrect:(BOOL)arg1;
- (void)setAutofocus:(BOOL)arg1;
- (void)setCols:(NSInteger)arg1;
- (void)setDefaultValue:(id)arg1;
- (void)setDisabled:(BOOL)arg1;
- (void)setName:(id)arg1;
- (void)setReadOnly:(BOOL)arg1;
- (void)setRows:(NSInteger)arg1;
- (void)setSelectionEnd:(NSInteger)arg1;
- (void)setSelectionRange:(NSInteger)arg1 end:(NSInteger)arg2;
- (void)setSelectionStart:(NSInteger)arg1;
- (void)setValue:(id)arg1;
- (NSInteger)structuralComplexityContribution;
- (id)textInputTraits;
- (id)type;
- (id)value;
- (BOOL)willValidate;

@end
