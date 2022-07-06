#import <Preferences/PSListController.h>
#import <Preferences/PSSpecifier.h>
#import "../PrivateHeaders.h"
#import <Cephei/HBPreferences.h>

@interface VeExcludedPhrasesListController : PSEditableListController
@property(nonatomic, retain)HBPreferences* logsDictionary;
@property(nonatomic, retain)UIButton* plusButton;
@property(nonatomic, retain)UIBarButtonItem* item;
- (void)removedSpecifier:(PSSpecifier*)specifier;
- (void)excludePhrase;
@end