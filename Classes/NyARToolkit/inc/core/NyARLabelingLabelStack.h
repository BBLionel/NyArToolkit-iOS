/* 
 * PROJECT: NyARToolkitCPP
 * --------------------------------------------------------------------------------
 *
 * The NyARToolkitCS is C++ version NyARToolkit class library.
 * 
 * Copyright (C)2008 R.Iizuka
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this framework; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 * 
 * For further information please contact.
 *	http://nyatla.jp/nyatoolkit/
 *	<airmail(at)ebony.plala.or.jp>
 * 
 */
#pragma once
#include "NyARException.h"
#include "../utils/NyObjectStack.h"
#include "NyARLabelingLabel.h"
namespace NyARToolkitCPP
{
	class NyARLabelingLabelStack :public NyObjectStack<NyARLabelingLabel>
	{
	public:
		NyARLabelingLabelStack(int i_length);
		virtual ~NyARLabelingLabelStack(void);
	protected:
		void onReservRequest(int i_start, int i_end, NyArray<NyARLabelingLabel*>& i_buffer);
	public:
		void sortByArea();
	};
}
