//
//  RogueMain.h
//  Brogue
//
//  Created by Brian and Kevin Walker on 12/26/08.
//  Copyright 2012. All rights reserved.
//  
//  This file is part of Brogue.
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU Affero General Public License as
//  published by the Free Software Foundation, either version 3 of the
//  License, or (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU Affero General Public License for more details.
//
//  You should have received a copy of the GNU Affero General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

#import <Cocoa/Cocoa.h>
#import "Viewport.h"

#import "Rogue.h"

@interface RogueDriver : NSObject {
	IBOutlet Viewport *theDisplay;
	IBOutlet NSMenu *fileMenu;
	IBOutlet NSWindow *theWindow;
}

- (void)playBrogue:(id)sender;

- (void)applicationDidFinishLaunching:(NSNotification *)aNotification;

- (void)windowDidResize:(NSNotification *)aNotification;

@end
