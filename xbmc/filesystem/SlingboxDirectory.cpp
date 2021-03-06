/*
 *      Copyright (C) 2011-2012 Team XBMC
 *      http://www.xbmc.org
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with XBMC; see the file COPYING.  If not, see
 *  <http://www.gnu.org/licenses/>.
 *
 */

#include "SlingboxDirectory.h"
#include "FileItem.h"

using namespace XFILE;
using namespace std;

CSlingboxDirectory::CSlingboxDirectory()
{
}

CSlingboxDirectory::~CSlingboxDirectory()
{
}

bool CSlingboxDirectory::GetDirectory(const CStdString& strPath, CFileItemList &items)
{
  // Create generic Watch Slingbox item
  CFileItemPtr item(new CFileItem(strPath, false));
  item->SetLabel("Watch Slingbox");
  item->SetLabelPreformated(true);
  items.Add(item);

  return true;
}