/*	Copyright (c) 2015 SGH
**	
**	Permission is granted to use, modify and redistribute this software.
**	Modified versions of this software MUST be marked as such.
**	
**	This software is provided "AS IS". In no event shall
**	the authors or copyright holders be liable for any claim,
**	damages or other liability. The above copyright notice
**	and this permission notice shall be included in all copies
**	or substantial portions of the software.
**	
**	File created on: 16/08/2015
*/

#ifndef LUAEDITOR_H
#define LUAEDITOR_H
#include "luaeditor_global.h"
#include <texteditor/texteditor.h>

namespace LuaEditor { namespace Internal {

class LuaEditorFactory : public TextEditor::TextEditorFactory
{
	Q_OBJECT
public:
	LuaEditorFactory();
};

} }
#endif // LUAEDITOR_H
