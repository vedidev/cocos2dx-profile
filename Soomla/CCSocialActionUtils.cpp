/*
 Copyright (C) 2012-2014 Soomla Inc.
 
 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at
 
 http://www.apache.org/licenses/LICENSE-2.0
 
 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

//  Created by Simon Grinberg on 8/25/14.

#include "CCSocialActionUtils.h"

namespace soomla {
    
     __String* CCSocialActionUtils::actionEnumToString(CCSocialActionType providerType) {
         switch (providerType) {
             case UPDATE_STATUS:
                 return __String::create("UPDATE_STATUS");
                 break;
             case UPDATE_STORY:
                 return __String::create("UPDATE_STORY");
             case UPLOAD_IMAGE:
                 return __String::create("UPLOAD_IMAGE");
             case GET_CONTACTS:
                 return __String::create("GET_CONTACTS");
             case GET_FEED:
                 return __String::create("GET_FEED");
             case INVITE:
                 return __String::create("INVITE");
             default:
                 break;
         }
         
         return NULL;
    }
    
    CCSocialActionType CCSocialActionUtils::actionStringToEnum(__String* providerTypeString) {
        if (providerTypeString->compare("UPDATE_STATUS")) {
            return UPDATE_STATUS;
        }
        else if (providerTypeString->compare("UPDATE_STORY")) {
            return UPDATE_STORY;
        }
        else if (providerTypeString->compare("UPLOAD_IMAGE")) {
            return UPLOAD_IMAGE;
        }
        else if (providerTypeString->compare("GET_CONTACTS")) {
            return GET_CONTACTS;
        }
        else if (providerTypeString->compare("GET_FEED")) {
            return GET_FEED;
        }
        else if (providerTypeString->compare("INVITE")) {
            return INVITE;
        }
        
        return (CCSocialActionType)-1;
    }
    
};
