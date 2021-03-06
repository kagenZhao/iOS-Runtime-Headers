/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@interface PPPoEViewController : AssistantSubUIViewController <TableViewManagerDelegate, UINavigationControllerDelegate> {
    UIView *justTextContainerView;
    UILabel *justTextLabel;
    PPPoEConnectionUIViewController *pppoeConnectionUIViewController;
    id previousNavDelegate;
    UIView *tableHeaderContainerView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UIView *justTextContainerView;
@property (nonatomic) UILabel *justTextLabel;
@property (retain) PPPoEConnectionUIViewController *pppoeConnectionUIViewController;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView *tableHeaderContainerView;

- (void)dealloc;
- (id)justTextContainerView;
- (id)justTextLabel;
- (void)loadView;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (id)pppoeConnectionUIViewController;
- (void)setJustTextContainerView:(id)arg1;
- (void)setJustTextLabel:(id)arg1;
- (void)setPppoeConnectionUIViewController:(id)arg1;
- (void)setTableHeaderContainerView:(id)arg1;
- (void)setupInitialTableHeaderConfiguration;
- (BOOL)shouldChangeTextField:(id)arg1 atIndexPath:(id)arg2 forTextIndex:(unsigned int)arg3 toString:(id)arg4;
- (id)tableHeaderContainerView;
- (void)touchInCellAtIndexPath:(id)arg1;
- (id)valueForItemOfType:(id)arg1 atTypeIndex:(unsigned int)arg2 inCellWithTag:(int)arg3;

@end
