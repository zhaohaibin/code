// TortoiseGit - a Windows shell extension for easy version control

// Copyright (C) 2009-2011 - TortoiseGit

// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software Foundation,
// 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
//
#pragma once

#include "StandAloneDlg.h"
// CDeleteConflictDlg dialog

class CDeleteConflictDlg : public CStandAloneDialog
{
	DECLARE_DYNAMIC(CDeleteConflictDlg)

public:
	CDeleteConflictDlg(CWnd* pParent = nullptr);   // standard constructor
	virtual ~CDeleteConflictDlg();

// Dialog Data
	enum { IDD = IDD_RESOLVE_CONFLICT };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	afx_msg void OnBnClickedLog();
	afx_msg void OnBnClickedLog2();
	afx_msg void OnBnClickedDelete();
	afx_msg void OnBnClickedModify();
	BOOL OnInitDialog();
	void ShowLog(CString hash);
	DECLARE_MESSAGE_MAP()

public:
	CString m_LocalStatus;
	CString m_RemoteStatus;
	CString m_LocalHash;
	CString m_RemoteHash;
	BOOL	m_bShowModifiedButton;
	CString m_File;
	BOOL	m_bIsDelete;
};
