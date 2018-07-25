/**
 * @file MEGAInputStream.h
 * @brief Implementation of MegaInputStream
 *
 * (c) 2013-2015 by Mega Limited, Auckland, New Zealand
 *
 * This file is part of the MEGA SDK - Client Access Engine.
 *
 * Applications using the MEGA API must present a valid application key
 * and comply with the the rules set forth in the Terms of Service.
 *
 * The MEGA SDK is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * @copyright Simplified (2-clause) BSD License.
 *
 * You should have received a copy of the license along with this
 * program.
 */

#import <AssetsLibrary/AssetsLibrary.h>
#import "megaapi.h"

class MEGAInputStream : public mega::MegaInputStream {

public:
    
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
    
    MEGAInputStream(ALAssetRepresentation *assetRepresentation);
    MEGAInputStream(NSData *data);
    int64_t getSize();
    bool read(char *buffer, size_t size);
    
private:
    ALAssetRepresentation *assetRepresentation;
    
#pragma clang diagnostic pop
    
    NSData *data;
    long offset;
};


