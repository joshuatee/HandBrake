/* ExpressController

   This file is part of the HandBrake source code.
   Homepage: <http://handbrake.m0k.org/>.
   It may be used under the terms of the GNU General Public License. */

#import <Cocoa/Cocoa.h>
#import "DriveDetector.h"
#import "HBCore.h"
#import "hb.h"
#import "DeviceController.h"

@interface ExpressController : NSObject

{
    hb_handle_t                  * fHandle;
    hb_list_t                    * fList;
    hb_state_t                   * fState;

    IBOutlet NSWindow            * fWindow;
    IBOutlet NSView              * fEmptyView;
    IBOutlet NSToolbar           * fToolbar;

    IBOutlet NSView              * fOpenView;
    IBOutlet NSMatrix            * fOpenMatrix;
    IBOutlet NSPopUpButton       * fOpenPopUp;
    IBOutlet NSTextField         * fOpenFolderField;
    IBOutlet NSButton            * fOpenBrowseButton;
    IBOutlet NSTextField         * fOpenProgressField;
    IBOutlet NSProgressIndicator * fOpenIndicator;
    IBOutlet NSButton            * fOpenGoButton;
    NSString                     * fOpenFolderString;

    IBOutlet NSView              * fConvertView;
    IBOutlet NSTableView         * fConvertTableView;
    IBOutlet NSPopUpButton       * fConvertFolderPopUp;
    IBOutlet NSPopUpButton       * fConvertFormatPopUp;
    IBOutlet NSPopUpButton       * fConvertMaxWidthPopUp;
    IBOutlet NSPopUpButton       * fConvertAspectPopUp;
    IBOutlet NSPopUpButton       * fConvertAudioPopUp;
    IBOutlet NSPopUpButton       * fConvertSubtitlePopUp;
    IBOutlet NSTextField         * fConvertInfoString;
    IBOutlet NSProgressIndicator * fConvertIndicator;
    NSMutableArray               * fConvertCheckArray;
    NSString                     * fConvertFolderString;

    DriveDetector                * fDriveDetector;
    HBCore                       * fCore;
    DeviceController             * fDevice;
    NSDictionary                 * fDrives;
}

- (void) openShow: (id) sender;
- (void) openMatrixChanged: (id) sender;
- (void) openBrowse: (id) sender;
- (void) openGo: (id) sender;

- (void) selectFolderSheetShow: (id) sender;
- (void) convertGo: (id) sender;
- (void) convertCancel: (id) sender;

@end

