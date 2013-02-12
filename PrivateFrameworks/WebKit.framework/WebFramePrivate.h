/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSURLRequest, WAKView, WebFrameView, WebScriptCallFrame, WebScriptObject;

@interface WebFramePrivate : NSObject {
    struct Frame { NSInteger x1; struct Page {} *x2; struct FrameTree { 
            struct Frame {} *m_thisFrame; 
            struct Frame {} *m_parent; 
            struct AtomicString { 
                struct String { 
                    struct RefPtr<WebCore::StringImpl> { 
                        struct StringImpl {} *m_ptr; 
                    } m_impl; 
                } m_string; 
            } m_name; 
            struct RefPtr<WebCore::Frame> { 
                struct Frame {} *m_ptr; 
            } m_nextSibling; 
            struct Frame {} *m_previousSibling; 
            struct RefPtr<WebCore::Frame> { 
                struct Frame {} *m_ptr; 
            } m_firstChild; 
            struct Frame {} *m_lastChild; 
            NSUInteger m_childCount; 
        } x3; struct FrameLoader { 
            int (**_vptr$FrameLoader)(); 
            struct Frame {} *m_frame; 
            struct FrameLoaderClient {} *m_client; 
            NSInteger m_state; 
            NSInteger m_loadType; 
            struct RefPtr<WebCore::DocumentLoader> { 
                struct DocumentLoader {} *m_ptr; 
            } m_documentLoader; 
            struct RefPtr<WebCore::DocumentLoader> { 
                struct DocumentLoader {} *m_ptr; 
            } m_provisionalDocumentLoader; 
            struct RefPtr<WebCore::DocumentLoader> { 
                struct DocumentLoader {} *m_ptr; 
            } m_policyDocumentLoader; 
            NSInteger m_policyLoadType; 
            struct PolicyCheck { 
                struct ResourceRequest { 
                    struct KURL { 
                        struct String { 
                            struct RefPtr<WebCore::StringImpl> { 
                                struct StringImpl {} *m_ptr; 
                            } m_impl; 
                        } m_string; 
                        /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*m_isValid; 
                        NSInteger m_schemeEnd; 
                        NSInteger m_userStart; 
                        NSInteger m_userEnd; 
                        NSInteger m_passwordEnd; 
                        NSInteger m_hostEnd; 
                        NSInteger m_portEnd; 
                        NSInteger m_pathAfterLastSlash; 
                        NSInteger m_pathEnd; 
                        NSInteger m_queryEnd; 
                        NSInteger m_fragmentEnd; 
                    } m_url; 
                    NSInteger m_cachePolicy; 
                    double m_timeoutInterval; 
                    struct KURL { 
                        struct String { 
                            struct RefPtr<WebCore::StringImpl> { 
                                struct StringImpl {} *m_ptr; 
                            } m_impl; 
                        } m_string; 
                        void*m_isValid; 
                        NSInteger m_schemeEnd; 
                        NSInteger m_userStart; 
                        NSInteger m_userEnd; 
                        NSInteger m_passwordEnd; 
                        NSInteger m_hostEnd; 
                        NSInteger m_portEnd; 
                        NSInteger m_pathAfterLastSlash; 
                        NSInteger m_pathEnd; 
                        NSInteger m_queryEnd; 
                        NSInteger m_fragmentEnd; 
                    } m_mainDocumentURL; 
                    struct String { 
                        struct RefPtr<WebCore::StringImpl> { 
                            struct StringImpl {} *m_ptr; 
                        } m_impl; 
                    } m_httpMethod; 
                    struct HTTPHeaderMap { 
                        struct HashTable<WebCore::AtomicString,std::pair<WebCore::AtomicString, WebCore::String>,WTF::PairFirstExtractor<std::pair<WebCore::AtomicString, WebCore::String> >,WebCore::CaseFoldingHash,WTF::PairHashTraits<WTF::HashTraits<WebCore::AtomicString>, WTF::HashTraits<WebCore::String> >,WTF::HashTraits<WebCore::AtomicString> > { 
                            struct pair<WebCore::AtomicString,WebCore::String> {} *m_table; 
                            NSInteger m_tableSize; 
                            NSInteger m_tableSizeMask; 
                            NSInteger m_keyCount; 
                            NSInteger m_deletedCount; 
                        } m_impl; 
                    } m_httpHeaderFields; 
                    struct Vector<WebCore::String,0ul> { 
                        NSUInteger m_size; 
                        struct VectorBuffer<WebCore::String,0ul> { 
                            struct String {} *m_buffer; 
                            NSUInteger m_capacity; 
                        } m_buffer; 
                    } m_responseContentDispositionEncodingFallbackArray; 
                    struct RefPtr<WebCore::FormData> { 
                        struct FormData {} *m_ptr; 
                    } m_httpBody; 
                    void*m_allowHTTPCookies; 
                    void*m_resourceRequestUpdated; 
                    void*m_platformRequestUpdated; 
                    struct RetainPtr<NSURLRequest> { 
                        NSURLRequest *m_ptr; 
                    } m_nsRequest; 
                } m_request; 
                struct RefPtr<WebCore::FormState> { 
                    struct FormState {} *m_ptr; 
                } m_formState; 
                struct String { 
                    struct RefPtr<WebCore::StringImpl> { 
                        struct StringImpl {} *m_ptr; 
                    } m_impl; 
                } m_frameName; 
                int (*m_navigationFunction)(); 
                int (*m_newWindowFunction)(); 
                int (*m_contentFunction)(); 
                void *m_argument; 
            } m_policyCheck; 
            void*m_delegateIsHandlingProvisionalLoadError; 
            void*m_delegateIsDecidingNavigationPolicy; 
            void*m_delegateIsHandlingUnimplementablePolicy; 
            void*m_firstLayoutDone; 
            void*m_quickRedirectComing; 
            void*m_sentRedirectNotification; 
            void*m_inStopAllLoaders; 
            struct String { 
                struct RefPtr<WebCore::StringImpl> { 
                    struct StringImpl {} *m_ptr; 
                } m_impl; 
            } m_outgoingReferrer; 
            void*m_isExecutingJavaScriptFormAction; 
            void*m_isRunningScript; 
            struct String { 
                struct RefPtr<WebCore::StringImpl> { 
                    struct StringImpl {} *m_ptr; 
                } m_impl; 
            } m_responseMIMEType; 
            void*m_didCallImplicitClose; 
            void*m_wasUnloadEventEmitted; 
            void*m_unloadEventBeingDispatched; 
            void*m_isComplete; 
            void*m_isLoadingMainResource; 
            struct KURL { 
                struct String { 
                    struct RefPtr<WebCore::StringImpl> { 
                        struct StringImpl {} *m_ptr; 
                    } m_impl; 
                } m_string; 
                void*m_isValid; 
                NSInteger m_schemeEnd; 
                NSInteger m_userStart; 
                NSInteger m_userEnd; 
                NSInteger m_passwordEnd; 
                NSInteger m_hostEnd; 
                NSInteger m_portEnd; 
                NSInteger m_pathAfterLastSlash; 
                NSInteger m_pathEnd; 
                NSInteger m_queryEnd; 
                NSInteger m_fragmentEnd; 
            } m_URL; 
            struct KURL { 
                struct String { 
                    struct RefPtr<WebCore::StringImpl> { 
                        struct StringImpl {} *m_ptr; 
                    } m_impl; 
                } m_string; 
                void*m_isValid; 
                NSInteger m_schemeEnd; 
                NSInteger m_userStart; 
                NSInteger m_userEnd; 
                NSInteger m_passwordEnd; 
                NSInteger m_hostEnd; 
                NSInteger m_portEnd; 
                NSInteger m_pathAfterLastSlash; 
                NSInteger m_pathEnd; 
                NSInteger m_queryEnd; 
                NSInteger m_fragmentEnd; 
            } m_workingURL; 
            struct OwnPtr<WebCore::IconLoader> { 
                struct IconLoader {} *m_ptr; 
            } m_iconLoader; 
            void*m_mayLoadIconLater; 
            void*m_cancellingWithLoadInProgress; 
            struct OwnPtr<WebCore::ScheduledRedirection> { 
                struct ScheduledRedirection {} *m_ptr; 
            } m_scheduledRedirection; 
            void*m_needsClear; 
            void*m_receivedData; 
            void*m_encodingWasChosenByUser; 
            struct String { 
                struct RefPtr<WebCore::StringImpl> { 
                    struct StringImpl {} *m_ptr; 
                } m_impl; 
            } m_encoding; 
            struct RefPtr<WebCore::TextResourceDecoder> { 
                struct TextResourceDecoder {} *m_ptr; 
            } m_decoder; 
            void*m_containsPlugIns; 
            struct KURL { 
                struct String { 
                    struct RefPtr<WebCore::StringImpl> { 
                        struct StringImpl {} *m_ptr; 
                    } m_impl; 
                } m_string; 
                void*m_isValid; 
                NSInteger m_schemeEnd; 
                NSInteger m_userStart; 
                NSInteger m_userEnd; 
                NSInteger m_passwordEnd; 
                NSInteger m_hostEnd; 
                NSInteger m_portEnd; 
                NSInteger m_pathAfterLastSlash; 
                NSInteger m_pathEnd; 
                NSInteger m_queryEnd; 
                NSInteger m_fragmentEnd; 
            } m_submittedFormURL; 
            struct Timer<WebCore::FrameLoader> { 
                int (**_vptr$TimerBase)(); 
                double m_nextFireTime; 
                double m_repeatInterval; 
                NSInteger m_heapIndex; 
                NSUInteger m_heapInsertionOrder; 
                struct FrameLoader {} *m_object; 
                struct { 
                    void**__pfn; 
                } m_function; 
            } m_redirectionTimer; 
            struct Timer<WebCore::FrameLoader> { 
                int (**_vptr$TimerBase)(); 
                double m_nextFireTime; 
                double m_repeatInterval; 
                NSInteger m_heapIndex; 
                NSUInteger m_heapInsertionOrder; 
                struct FrameLoader {} *m_object; 
                struct { 
                    void**__pfn; 
                } m_function; 
            } m_checkCompletedTimer; 
            struct Timer<WebCore::FrameLoader> { 
                int (**_vptr$TimerBase)(); 
                double m_nextFireTime; 
                double m_repeatInterval; 
                NSInteger m_heapIndex; 
                NSUInteger m_heapInsertionOrder; 
                struct FrameLoader {} *m_object; 
                struct { 
                    void**__pfn; 
                } m_function; 
            } m_checkLoadCompleteTimer; 
            struct Frame {} *m_opener; 
            struct HashSet<WebCore::Frame*,WTF::PtrHash<WebCore::Frame*>,WTF::HashTraits<WebCore::Frame*> > { 
                struct HashTable<WebCore::Frame*,WebCore::Frame*,WTF::IdentityExtractor<WebCore::Frame*>,WTF::PtrHash<WebCore::Frame*>,WTF::HashTraits<WebCore::Frame*>,WTF::HashTraits<WebCore::Frame*> > { 
                    struct Frame {} **m_table; 
                    NSInteger m_tableSize; 
                    NSInteger m_tableSizeMask; 
                    NSInteger m_keyCount; 
                    NSInteger m_deletedCount; 
                } m_impl; 
            } m_openedFrames; 
            void*m_openedByDOM; 
            void*m_creatingInitialEmptyDocument; 
            void*m_isDisplayingInitialEmptyDocument; 
            void*m_committedFirstRealDocumentLoad; 
            struct RefPtr<WebCore::HistoryItem> { 
                struct HistoryItem {} *m_ptr; 
            } m_currentHistoryItem; 
            struct RefPtr<WebCore::HistoryItem> { 
                struct HistoryItem {} *m_ptr; 
            } m_previousHistoryItem; 
            struct RefPtr<WebCore::HistoryItem> { 
                struct HistoryItem {} *m_ptr; 
            } m_provisionalHistoryItem; 
            void*m_didPerformFirstNavigation; 
            void*m_loadsSynchronously; 
        } x4; struct RefPtr<WebCore::DOMWindow> { 
            struct DOMWindow {} *m_ptr; 
        } x5; struct HashSet<WebCore::DOMWindow*,WTF::PtrHash<WebCore::DOMWindow*>,WTF::HashTraits<WebCore::DOMWindow*> > { 
            struct HashTable<WebCore::DOMWindow*,WebCore::DOMWindow*,WTF::IdentityExtractor<WebCore::DOMWindow*>,WTF::PtrHash<WebCore::DOMWindow*>,WTF::HashTraits<WebCore::DOMWindow*>,WTF::HashTraits<WebCore::DOMWindow*> > { 
                struct DOMWindow {} **m_table; 
                NSInteger m_tableSize; 
                NSInteger m_tableSizeMask; 
                NSInteger m_keyCount; 
                NSInteger m_deletedCount; 
            } m_impl; 
        } x6; struct HTMLFrameOwnerElement {} *x7; struct RefPtr<WebCore::FrameView> { 
            struct FrameView {} *m_ptr; 
        } x8; struct RefPtr<WebCore::Document> { 
            struct Document {} *m_ptr; 
        } x9; struct ScriptController { 
            struct ProtectedPtr<WebCore::JSDOMWindowShell> { 
                struct JSDOMWindowShell {} *m_ptr; 
            } m_windowShell; 
            struct Frame {} *m_frame; 
            NSInteger m_handlerLineno; 
            struct String {} *m_sourceURL; 
            void*m_processingTimerCallback; 
            void*m_paused; 
            struct RefPtr<JSC::Bindings::RootObject> { 
                struct RootObject {} *m_ptr; 
            } m_bindingRootObject; 
            struct HashMap<void*,WTF::RefPtr<JSC::Bindings::RootObject>,WTF::PtrHash<void*>,WTF::HashTraits<void*>,WTF::HashTraits<WTF::RefPtr<JSC::Bindings::RootObject> > > { 
                struct HashTable<void*,std::pair<void*, WTF::RefPtr<JSC::Bindings::RootObject> >,WTF::PairFirstExtractor<std::pair<void*, WTF::RefPtr<JSC::Bindings::RootObject> > >,WTF::PtrHash<void*>,WTF::PairHashTraits<WTF::HashTraits<void*>, WTF::HashTraits<WTF::RefPtr<JSC::Bindings::RootObject> > >,WTF::HashTraits<void*> > { 
                    struct pair<void*,WTF::RefPtr<JSC::Bindings::RootObject> > {} *m_table; 
                    NSInteger m_tableSize; 
                    NSInteger m_tableSizeMask; 
                    NSInteger m_keyCount; 
                    NSInteger m_deletedCount; 
                } m_impl; 
            } m_rootObjects; 
            struct RetainPtr<WebScriptObject> { 
                WebScriptObject *m_ptr; 
            } m_windowScriptObject; 
        } x10; struct String { 
            struct RefPtr<WebCore::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } x11; struct String { 
            struct RefPtr<WebCore::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } x12; float x13; NSInteger x14; struct SelectionController { 
            struct Frame {} *m_frame; 
            NSInteger m_xPosForVerticalArrowNavigation; 
            struct Selection { 
                struct Position { 
                    struct RefPtr<WebCore::Node> { 
                        struct Node {} *m_ptr; 
                    } container; 
                    NSInteger posOffset; 
                } m_base; 
                struct Position { 
                    struct RefPtr<WebCore::Node> { 
                        struct Node {} *m_ptr; 
                    } container; 
                    NSInteger posOffset; 
                } m_extent; 
                struct Position { 
                    struct RefPtr<WebCore::Node> { 
                        struct Node {} *m_ptr; 
                    } container; 
                    NSInteger posOffset; 
                } m_start; 
                struct Position { 
                    struct RefPtr<WebCore::Node> { 
                        struct Node {} *m_ptr; 
                    } container; 
                    NSInteger posOffset; 
                } m_end; 
                NSInteger m_affinity; 
                NSInteger m_granularity; 
                NSInteger m_state; 
                void*m_baseIsFirst; 
            } m_sel; 
            struct IntRect { 
                struct IntPoint { 
                    NSInteger m_x; 
                    NSInteger m_y; 
                } m_location; 
                struct IntSize { 
                    NSInteger m_width; 
                    NSInteger m_height; 
                } m_size; 
            } m_caretRect; 
            struct IntRect { 
                struct IntPoint { 
                    NSInteger m_x; 
                    NSInteger m_y; 
                } m_location; 
                struct IntSize { 
                    NSInteger m_width; 
                    NSInteger m_height; 
                } m_size; 
            } m_absCaretBounds; 
            struct IntRect { 
                struct IntPoint { 
                    NSInteger m_x; 
                    NSInteger m_y; 
                } m_location; 
                struct IntSize { 
                    NSInteger m_width; 
                    NSInteger m_height; 
                } m_size; 
            } m_absoluteCaretRepaintBounds; 
            unsigned int m_needsLayout : 1; 
            unsigned int m_absCaretBoundsDirty : 1; 
            unsigned int m_lastChangeWasHorizontalExtension : 1; 
            unsigned int m_isDragCaretController : 1; 
            unsigned int m_isCaretBlinkingSuspended : 1; 
            unsigned int m_focused : 1; 
            NSInteger m_closeTypingSuppressions; 
        } x15; struct Selection { 
            struct Position { 
                struct RefPtr<WebCore::Node> { 
                    struct Node {} *m_ptr; 
                } container; 
                NSInteger posOffset; 
            } m_base; 
            struct Position { 
                struct RefPtr<WebCore::Node> { 
                    struct Node {} *m_ptr; 
                } container; 
                NSInteger posOffset; 
            } m_extent; 
            struct Position { 
                struct RefPtr<WebCore::Node> { 
                    struct Node {} *m_ptr; 
                } container; 
                NSInteger posOffset; 
            } m_start; 
            struct Position { 
                struct RefPtr<WebCore::Node> { 
                    struct Node {} *m_ptr; 
                } container; 
                NSInteger posOffset; 
            } m_end; 
            NSInteger m_affinity; 
            NSInteger m_granularity; 
            NSInteger m_state; 
            void*m_baseIsFirst; 
        } x16; struct Timer<WebCore::Frame> { 
            int (**_vptr$TimerBase)(); 
            double m_nextFireTime; 
            double m_repeatInterval; 
            NSInteger m_heapIndex; 
            NSUInteger m_heapInsertionOrder; 
            struct Frame {} *m_object; 
            struct { 
                void**__pfn; 
            } m_function; 
        } x17; struct Editor { 
            struct Frame {} *m_frame; 
            struct OwnPtr<WebCore::DeleteButtonController> { 
                struct DeleteButtonController {} *m_ptr; 
            } m_deleteButtonController; 
            struct RefPtr<WebCore::EditCommand> { 
                struct EditCommand {} *m_ptr; 
            } m_lastEditCommand; 
            struct RefPtr<WebCore::Node> { 
                struct Node {} *m_ptr; 
            } m_removedAnchor; 
            struct RefPtr<WebCore::Text> { 
                struct Text {} *m_ptr; 
            } m_compositionNode; 
            NSUInteger m_compositionStart; 
            NSUInteger m_compositionEnd; 
            struct Vector<WebCore::CompositionUnderline,0ul> { 
                NSUInteger m_size; 
                struct VectorBuffer<WebCore::CompositionUnderline,0ul> { 
                    struct CompositionUnderline {} *m_buffer; 
                    NSUInteger m_capacity; 
                } m_buffer; 
            } m_customCompositionUnderlines; 
            void*m_ignoreCompositionSelectionChange; 
            void*m_shouldStartNewKillRingSequence; 
        } x18; struct EventHandler { 
            struct Frame {} *m_frame; 
            void*m_mousePressed; 
            struct RefPtr<WebCore::Node> { 
                struct Node {} *m_ptr; 
            } m_mousePressNode; 
            void*m_mouseDownMayStartSelect; 
            void*m_mouseDownMayStartDrag; 
            void*m_mouseDownWasSingleClickInSelection; 
            void*m_beganSelectingText; 
            struct IntPoint { 
                NSInteger m_x; 
                NSInteger m_y; 
            } m_dragStartPos; 
            struct IntPoint { 
                NSInteger m_x; 
                NSInteger m_y; 
            } m_panScrollStartPos; 
            void*m_panScrollInProgress; 
            struct Timer<WebCore::EventHandler> { 
                int (**_vptr$TimerBase)(); 
                double m_nextFireTime; 
                double m_repeatInterval; 
                NSInteger m_heapIndex; 
                NSUInteger m_heapInsertionOrder; 
                struct EventHandler {} *m_object; 
                struct { 
                    void**__pfn; 
                } m_function; 
            } m_hoverTimer; 
            struct Timer<WebCore::EventHandler> { 
                int (**_vptr$TimerBase)(); 
                double m_nextFireTime; 
                double m_repeatInterval; 
                NSInteger m_heapIndex; 
                NSUInteger m_heapInsertionOrder; 
                struct EventHandler {} *m_object; 
                struct { 
                    void**__pfn; 
                } m_function; 
            } m_autoscrollTimer; 
            struct RenderObject {} *m_autoscrollRenderer; 
            void*m_autoscrollInProgress; 
            void*m_mouseDownMayStartAutoscroll; 
            void*m_mouseDownWasInSubframe; 
            void*m_svgPan; 
            struct RefPtr<WebCore::SVGElementInstance> { 
                struct SVGElementInstance {} *m_ptr; 
            } m_instanceUnderMouse; 
            struct RefPtr<WebCore::SVGElementInstance> { 
                struct SVGElementInstance {} *m_ptr; 
            } m_lastInstanceUnderMouse; 
            struct RenderLayer {} *m_resizeLayer; 
            struct RefPtr<WebCore::Node> { 
                struct Node {} *m_ptr; 
            } m_capturingMouseEventsNode; 
            struct RefPtr<WebCore::Node> { 
                struct Node {} *m_ptr; 
            } m_nodeUnderMouse; 
            struct RefPtr<WebCore::Node> { 
                struct Node {} *m_ptr; 
            } m_lastNodeUnderMouse; 
            struct RefPtr<WebCore::Frame> { 
                struct Frame {} *m_ptr; 
            } m_lastMouseMoveEventSubframe; 
            struct RefPtr<WebCore::Scrollbar> { 
                struct Scrollbar {} *m_ptr; 
            } m_lastScrollbarUnderMouse; 
            NSInteger m_clickCount; 
            struct RefPtr<WebCore::Node> { 
                struct Node {} *m_ptr; 
            } m_clickNode; 
            float m_gestureInitialDiameter; 
            float m_gestureLastDiameter; 
            float m_gestureInitialRotation; 
            float m_gestureLastRotation; 
            NSUInteger m_firstTouchID; 
            struct HashMap<unsigned int,WTF::RefPtr<WebCore::Touch>,WTF::IntHash<unsigned int>,WTF::HashTraits<unsigned int>,WTF::HashTraits<WTF::RefPtr<WebCore::Touch> > > { 
                struct HashTable<unsigned int,std::pair<unsigned int, WTF::RefPtr<WebCore::Touch> >,WTF::PairFirstExtractor<std::pair<unsigned int, WTF::RefPtr<WebCore::Touch> > >,WTF::IntHash<unsigned int>,WTF::PairHashTraits<WTF::HashTraits<unsigned int>, WTF::HashTraits<WTF::RefPtr<WebCore::Touch> > >,WTF::HashTraits<unsigned int> > { 
                    struct pair<unsigned int,WTF::RefPtr<WebCore::Touch> > {} *m_table; 
                    NSInteger m_tableSize; 
                    NSInteger m_tableSizeMask; 
                    NSInteger m_keyCount; 
                    NSInteger m_deletedCount; 
                } m_impl; 
            } m_touchesByID; 
            struct HashSet<WTF::RefPtr<WebCore::EventTarget>,WTF::PtrHash<WTF::RefPtr<WebCore::EventTarget> >,WTF::HashTraits<WTF::RefPtr<WebCore::EventTarget> > > { 
                struct HashTable<WTF::RefPtr<WebCore::EventTarget>,WTF::RefPtr<WebCore::EventTarget>,WTF::IdentityExtractor<WTF::RefPtr<WebCore::EventTarget> >,WTF::PtrHash<WTF::RefPtr<WebCore::EventTarget> >,WTF::HashTraits<WTF::RefPtr<WebCore::EventTarget> >,WTF::HashTraits<WTF::RefPtr<WebCore::EventTarget> > > { 
                    struct RefPtr<WebCore::EventTarget> {} *m_table; 
                    NSInteger m_tableSize; 
                    NSInteger m_tableSizeMask; 
                    NSInteger m_keyCount; 
                    NSInteger m_deletedCount; 
                } m_impl; 
            } m_gestureTargets; 
            struct RefPtr<WebCore::Node> { 
                struct Node {} *m_ptr; 
            } m_dragTarget; 
            struct RefPtr<WebCore::HTMLFrameSetElement> { 
                struct HTMLFrameSetElement {} *m_ptr; 
            } m_frameSetBeingResized; 
            struct IntSize { 
                NSInteger m_width; 
                NSInteger m_height; 
            } m_offsetFromResizeCorner; 
            struct IntPoint { 
                NSInteger m_x; 
                NSInteger m_y; 
            } m_currentMousePosition; 
            struct IntPoint { 
                NSInteger m_x; 
                NSInteger m_y; 
            } m_mouseDownPos; 
            double m_mouseDownTimestamp; 
            struct PlatformMouseEvent { 
                struct IntPoint { 
                    NSInteger m_x; 
                    NSInteger m_y; 
                } m_position; 
                struct IntPoint { 
                    NSInteger m_x; 
                    NSInteger m_y; 
                } m_globalPosition; 
                NSInteger m_button; 
                NSInteger m_eventType; 
                NSInteger m_clickCount; 
                void*m_shiftKey; 
                void*m_ctrlKey; 
                void*m_altKey; 
                void*m_metaKey; 
                double m_timestamp; 
                NSUInteger m_modifierFlags; 
            } m_mouseDown; 
            NSUInteger m_pendingFrameUnloadEventCount; 
            NSUInteger m_pendingFrameBeforeUnloadEventCount; 
            WAKView *m_mouseDownView; 
            void*m_sendingEventToSubview; 
        } x19; struct AnimationController { 
            struct AnimationControllerPrivate {} *m_data; 
        } x20; struct RefPtr<WebCore::CSSMutableStyleDeclaration> { 
            struct CSSMutableStyleDeclaration {} *m_ptr; 
        } x21; struct Color { 
            NSUInteger m_color; 
            void*m_valid; 
        } x22; struct Timer<WebCore::Frame> { 
            int (**_vptr$TimerBase)(); 
            double m_nextFireTime; 
            double m_repeatInterval; 
            NSInteger m_heapIndex; 
            NSUInteger m_heapInsertionOrder; 
            struct Frame {} *m_object; 
            struct { 
                void**__pfn; 
            } m_function; 
        } x23; float x24; struct IntPoint { 
            NSInteger m_x; 
            NSInteger m_y; 
        } x25; struct ViewportArguments { 
            float initialScale; 
            float minimumScale; 
            float maximumScale; 
            float width; 
            float height; 
            float userScalable; 
        } x26; void*x27; struct FloatSize { 
            float m_width; 
            float m_height; 
        } x28; NSInteger x29; struct Selection { 
            struct Position { 
                struct RefPtr<WebCore::Node> { 
                    struct Node {} *m_ptr; 
                } container; 
                NSInteger posOffset; 
            } m_base; 
            struct Position { 
                struct RefPtr<WebCore::Node> { 
                    struct Node {} *m_ptr; 
                } container; 
                NSInteger posOffset; 
            } m_extent; 
            struct Position { 
                struct RefPtr<WebCore::Node> { 
                    struct Node {} *m_ptr; 
                } container; 
                NSInteger posOffset; 
            } m_start; 
            struct Position { 
                struct RefPtr<WebCore::Node> { 
                    struct Node {} *m_ptr; 
                } container; 
                NSInteger posOffset; 
            } m_end; 
            NSInteger m_affinity; 
            NSInteger m_granularity; 
            NSInteger m_state; 
            void*m_baseIsFirst; 
        } x30; struct Selection { 
            struct Position { 
                struct RefPtr<WebCore::Node> { 
                    struct Node {} *m_ptr; 
                } container; 
                NSInteger posOffset; 
            } m_base; 
            struct Position { 
                struct RefPtr<WebCore::Node> { 
                    struct Node {} *m_ptr; 
                } container; 
                NSInteger posOffset; 
            } m_extent; 
            struct Position { 
                struct RefPtr<WebCore::Node> { 
                    struct Node {} *m_ptr; 
                } container; 
                NSInteger posOffset; 
            } m_start; 
            struct Position { 
                struct RefPtr<WebCore::Node> { 
                    struct Node {} *m_ptr; 
                } container; 
                NSInteger posOffset; 
            } m_end; 
            NSInteger m_affinity; 
            NSInteger m_granularity; 
            NSInteger m_state; 
            void*m_baseIsFirst; 
        } x31; NSUInteger x32; NSUInteger x33; NSUInteger x34; double x35; double x36; struct Timer<WebCore::Frame> { 
            int (**_vptr$TimerBase)(); 
            double m_nextFireTime; 
            double m_repeatInterval; 
            NSInteger m_heapIndex; 
            NSUInteger m_heapInsertionOrder; 
            struct Frame {} *m_object; 
            struct { 
                void**__pfn; 
            } m_function; 
        } x37; struct String { 
            struct RefPtr<WebCore::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
    struct WebScriptDebugger { int (**x1)(); struct HashSet<JSC::JSGlobalObject*,WTF::PtrHash<JSC::JSGlobalObject*>,WTF::HashTraits<JSC::JSGlobalObject*> > { 
            struct HashTable<JSC::JSGlobalObject*,JSC::JSGlobalObject*,WTF::IdentityExtractor<JSC::JSGlobalObject*>,WTF::PtrHash<JSC::JSGlobalObject*>,WTF::HashTraits<JSC::JSGlobalObject*>,WTF::HashTraits<JSC::JSGlobalObject*> > { 
                struct JSGlobalObject {} **m_table; 
                NSInteger m_tableSize; 
                NSInteger m_tableSizeMask; 
                NSInteger m_keyCount; 
                NSInteger m_deletedCount; 
            } m_impl; 
        } x2; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x3; struct RetainPtr<WebScriptCallFrame> { 
            WebScriptCallFrame *m_ptr; 
        } x4; struct ProtectedPtr<JSC::JSGlobalObject> { 
            struct JSGlobalObject {} *m_ptr; 
        } x5; struct RetainPtr<WebScriptCallFrame> { 
            WebScriptCallFrame *m_ptr; 
        } x38; void*x39; void*x40; void*x41; void*x42; void*x43; void*x44; void*x45; void*x46; void*x47; NSInteger x48; float x49; struct UserStyleSheetLoader {} *x50; } *coreFrame;
    id internalLoadDelegate;
    BOOL isCommitting;
    BOOL isSingleLine;
        } x6; } *scriptDebugger;
    BOOL shouldCreateRenderers;
    WebFrameView *webFrameView;
}

- (void)dealloc;
- (void)finalize;
- (void)setWebFrameView:(id)arg1;

@end
