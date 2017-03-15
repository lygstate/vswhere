// <copyright file="stdafx.h" company="Microsoft Corporation">
// Copyright (C) Microsoft Corporation. All rights reserved.
// Licensed under the MIT license. See LICENSE.txt in the project root for license information.
// </copyright>

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN

#ifndef MAXUINT
#define MAXUINT 0xffff
#endif

// Windows headers
#include <windows.h>
#include <fcntl.h>
#include <io.h>
#include <shellapi.h>

// CRT header files
#include <stdio.h>

// COM support header files
#include <comutil.h>
#include <comdef.h>

// STL headers
#include <algorithm>
#include <codecvt>
#include <functional>
#include <iterator>
#include <map>
#include <memory>
#include <string>
#include <vector>

// Project headers
#include <Setup.Configuration.h>
_COM_SMARTPTR_TYPEDEF(IEnumSetupInstances, __uuidof(IEnumSetupInstances));
_COM_SMARTPTR_TYPEDEF(ISetupHelper, __uuidof(ISetupHelper));
_COM_SMARTPTR_TYPEDEF(ISetupInstance, __uuidof(ISetupInstance));
_COM_SMARTPTR_TYPEDEF(ISetupInstance2, __uuidof(ISetupInstance2));
_COM_SMARTPTR_TYPEDEF(ISetupPackageReference, __uuidof(ISetupPackageReference));
_COM_SMARTPTR_TYPEDEF(ISetupPropertyStore, __uuidof(ISetupPropertyStore));

#include "Utilities.h"
#include "Exceptions.h"
#include "CoInitializer.h"
#include "CommandParser.h"
#include "CommandArgs.h"
#include "Console.h"
#include "Formatter.h"
#include "ILegacyProvider.h"
#include "LegacyProvider.h"
#include "LegacyInstance.h"
#include "InstanceSelector.h"
#include "JsonFormatter.h"
#include "resource.h"
#include "ResourceManager.h"
#include "SafeArray.h"
#include "TextFormatter.h"
#include "ValueFormatter.h"
#include "XmlFormatter.h"
