/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUEditPluginHostViewController : UIViewController <PLDismissableViewController> {
    BOOL __didHandleCancel;
    BOOL __didHandleDone;
    id __disablingIdleTimerToken;
    BOOL __extensionDidBeginContentEditing;
    UIViewController *__remoteViewController;
    <NSCopying> *__request;
    <PUEditPluginHostViewControllerDataSource> *_dataSource;
    <PUEditPluginHostViewControllerDelegate> *_delegate;
    PUEditPlugin *_plugin;
}

@property (setter=_setDidHandleCancel:, nonatomic) BOOL _didHandleCancel;
@property (setter=_setDidHandleDone:, nonatomic) BOOL _didHandleDone;
@property (setter=_setDisablingIdleTimerToken:, nonatomic, retain) id _disablingIdleTimerToken;
@property (setter=_setExtensionDidBeginContentEditing:, nonatomic) BOOL _extensionDidBeginContentEditing;
@property (setter=_setRemoteViewController:, retain) UIViewController *_remoteViewController;
@property (setter=_setRequest:, copy) <NSCopying> *_request;
@property (nonatomic) <PUEditPluginHostViewControllerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUEditPluginHostViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) PUEditPlugin *plugin;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addRemoteViewControllerIfNeeded;
- (void)_beginContentEditingWithCompletionHandler:(id /* block */)arg1 timeout:(double)arg2;
- (void)_beginDisablingIdleTimer;
- (BOOL)_didHandleCancel;
- (BOOL)_didHandleDone;
- (id)_disablingIdleTimerToken;
- (void)_dismiss;
- (void)_endDisablingIdleTimerIfNecessary;
- (BOOL)_extensionDidBeginContentEditing;
- (id)_extensionVendorProxy;
- (void)_handleCancel;
- (void)_handleCancelButton:(id)arg1;
- (void)_handleDoneButton:(id)arg1;
- (id)_hostContext;
- (void)_queryShouldShowCancelConfirmationWithResponseHandler:(id /* block */)arg1 timeout:(double)arg2;
- (id)_remoteViewController;
- (id)_request;
- (void)_setDidHandleCancel:(BOOL)arg1;
- (void)_setDidHandleDone:(BOOL)arg1;
- (void)_setDisablingIdleTimerToken:(id)arg1;
- (void)_setExtensionDidBeginContentEditing:(BOOL)arg1;
- (void)_setRemoteViewController:(id)arg1;
- (void)_setRequest:(id)arg1;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (id)initWithPlugin:(id)arg1;
- (void)loadRemoteViewControllerWithCompletionHandler:(id /* block */)arg1;
- (void)loadView;
- (id)plugin;
- (BOOL)prefersStatusBarHidden;
- (BOOL)prepareForDismissingForced:(BOOL)arg1;
- (void)queryHandlingCapabilityForAdjustmentData:(id)arg1 withResponseHandler:(id /* block */)arg2 timeout:(double)arg3;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end
