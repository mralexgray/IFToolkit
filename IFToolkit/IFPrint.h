//
//  IFPrint.h
//  IFToolkit
//
//  Created by Itai Ferber on 7/16/11.
//  Copyright 2011 Itai Ferber. All rights reserved.
//

/*
 Copyright (C) 2011 by Itai Ferber
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 */

#import <Foundation/Foundation.h>

/*!
 @function IFPrint
 @abstract NSLog-like printing without the extra crud.
 @discussion IFPrint allows you to print information to stdout without going through the hoops that NSLog does. You get the formatting
 niceties of NSLog, without logging information to the system, and printing an extra timestamp.
 @param format the format to print, followed by the arguments
 */
void IFPrint (NSString *format, ...) NS_FORMAT_FUNCTION(1, 2);

/*!
 @function IFFPrint
 @abstract NSLog-like printing without the extra crud.
 @discussion IFFPrint allows you to print information to a given file handle without going through the hoops that NSLog does. You get the 
 formatting  niceties of NSLog, without logging information to the system, and printing an extra timestamp. You even get more customization
 by providing your own file handle to print to.
 @param file the file handle to print to
 @param format the format to print, followed by the arguments
 */
void IFFPrint (FILE *file, NSString *format, ...) NS_FORMAT_FUNCTION(2, 3);