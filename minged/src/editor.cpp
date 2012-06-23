#include "editor.h"

#include <stdio.h>

#include <MEngine.h>
#include <MKeyboard.h>

namespace minged
{
  Editor::Editor()
  {
    m_IsOpen= false;
  }

  void Editor::Update(uint32 dt)
  {
    CheckToToggle();

    if(m_IsOpen)
      UpdateOpen(dt);
  }

  void Editor::CheckToToggle()
  {
    // if just pressed key, toggle m_IsOpen
    MEngine* engine = MEngine::getInstance();
    if(MInputContext* input = engine->getInputContext())
    {
      if(input->isKeyPressed("F1"))
      {
	m_IsOpen = !m_IsOpen;
      }
    }
  }

  void Editor::UpdateOpen(uint32 dt)
  {
	  printf("Hello\n");
  }

  void Editor::Render()
  {
    if(m_IsOpen)
    {
    }
  }
};