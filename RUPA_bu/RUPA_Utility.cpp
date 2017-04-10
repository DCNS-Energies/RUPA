#include "RUPA_Utility.h"

void RUPA_Utils_Pos(wxWindow *w)
{
    w->Show(!w->IsShown());
    wxPoint p = w->GetPosition();
    w->Move(0, 0);        // workaround for gtk autocentre dialog behavior
    w->Move(p);

}
