/* -*- Mode: C++; tab-width: 8; indent-tabs-mode: t; c-basic-offset: 4 -*- */
/* ProblemSolutionPtr.h
 *
 * Copyright (C) 2005 SUSE Linux Products GmbH
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
 * 02111-1307, USA.
 */

#ifndef ZYPP_SOLVER_DETAIL_PROBLEMSOLUTIONUNINSTALL_PTR_H
#define ZYPP_SOLVER_DETAIL_PROBLEMSOLUTIONUNINSTALL_PTR_H

#include <list>
#include "zypp/base/PtrTypes.h"

/////////////////////////////////////////////////////////////////////////
namespace zypp 
{ ///////////////////////////////////////////////////////////////////////
  ///////////////////////////////////////////////////////////////////////
  namespace solver
  { /////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////
    namespace detail
    { ///////////////////////////////////////////////////////////////////
      
      ///////////////////////////////////////////////////////////////////
      //	CLASS NAME : ProblemSolutionUninstall_Ptr
      //	CLASS NAME : ProblemSolutionUninstall_constPtr
      ///////////////////////////////////////////////////////////////////
      DEFINE_PTR_TYPE(ProblemSolutionUninstall);
      ///////////////////////////////////////////////////////////////////

      typedef std::list<ProblemSolutionUninstall_Ptr> ProblemSolutionUninstallList;
      typedef std::list<ProblemSolutionUninstall_constPtr> CProblemSolutionUninstallList;

    };// namespace detail
    /////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////
  };// namespace solver
  ///////////////////////////////////////////////////////////////////////
  ///////////////////////////////////////////////////////////////////////
};// namespace zypp
/////////////////////////////////////////////////////////////////////////


#endif // ZYPP_SOLVER_DETAIL_PROBLEMSOLUTIONUNINSTALL_PTR_H
