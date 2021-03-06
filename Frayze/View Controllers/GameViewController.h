//
//  FirstViewController.h
//  Frayze
//
//  Created by CJNevin on 30/10/2013.
//  Copyright (c) 2013 CJNevin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CNScrabble.h"
#import "CNScrabbleTile.h"
#import "SettingsDataSource.h"

@interface GameViewController : UIViewController <UIScrollViewDelegate, UIGestureRecognizerDelegate, CNScrabbleDelegate, UISearchDisplayDelegate, UISearchBarDelegate, UITableViewDataSource, UITableViewDelegate>
{
    CNScrabbleTile *pendingTile;
    NSArray *searchResults;
    SettingsDataSource *settingsDataSource;
    UIImage *lattice;
    UIImageView *latticeImage;
    IBOutlet UIView *selectTileBackground;
    IBOutlet UIView *selectTileView;
    IBOutlet UIView *tileRack, *settingsView;
    IBOutlet UITableView *settingsTable;
    IBOutlet UIScrollView *tilesView;
    IBOutlet UIScrollView *boardScroller;
    IBOutlet UILabel *scoreLabel;
    IBOutlet UILabel *cpuScoreLabel;
    IBOutlet UILabel *scoreHeadLabel;
    IBOutlet UILabel *cpuScoreHeadLabel;
}

@end
