/**********************************************************************

   Audacity: A Digital Audio Editor

   IdentInterface.h

   Leland Lucius

   Copyright (c) 2014, Audacity Team 
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions
   are met:

   1. Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.

   2. Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.

   3. Neither the name of the copyright holder nor the names of its
   contributors may be used to endorse or promote products derived from
   this software without specific prior written permission.

   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
   "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
   FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
   COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
   INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
   BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
   LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
   CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
   LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
   ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
   POSSIBILITY OF SUCH DAMAGE.
   
**********************************************************************/

#ifndef __AUDACITY_IDENTINTERFACE_H__
#define __AUDACITY_IDENTINTERFACE_H__

#include "audacity/Types.h"

class AUDACITY_DLL_API IdentInterface /* not final */
{
public:
   virtual ~IdentInterface() {};

   // These should return an untranslated value
   virtual wxString GetPath() = 0;
   // This string persists in configuration files
   // So config compatibility will break if it is changed across Audacity versions
   virtual wxString GetSymbol() = 0;

   // These should return an untranslated value whose translation
   // will be determined at runtime (if available)
   virtual wxString GetName() = 0;
   // This string persists in configuration files
   // So config compatibility will break if it is changed across Audacity versions
   virtual wxString GetVendor() = 0;
   virtual wxString GetVersion() = 0;

   // This returns a translated string
   virtual wxString GetDescription() = 0;

   // non-virtual convenience function
   const wxString& GetTranslatedName();
};

#endif // __AUDACITY_IDENTINTERFACE_H__
