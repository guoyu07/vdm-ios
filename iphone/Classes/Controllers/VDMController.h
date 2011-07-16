#import <UIKit/UIKit.h>
#import "VDMFetcher.h"
#include "WEPopoverController.h"

@interface VDMController : UIViewController<UITableViewDelegate, UITableViewDataSource> {
	IBOutlet UITableView *tableView;
	NSMutableArray *entries;
	VDMFetcher *vdmFetcher;
	WEPopoverController *categoriesPopover;
	int currentPage;
	NSString *currentCategory;
	BOOL loadingExtra;
	UIView *loadingExtraMessageView;
	BOOL isFirstLoad;
}

-(IBAction) recentsDidSelect:(id) sender;
-(IBAction) randomDidSelect:(id) sender;
-(IBAction) categoryDidSelect:(id) sender;

@end
