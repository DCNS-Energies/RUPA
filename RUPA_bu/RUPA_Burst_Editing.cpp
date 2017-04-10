#include "RUPA_Burst_Editing.h"



void Set_Col_Measurement(wxListCtrl * l)
{
 
    
    l->InsertColumn(0, ("X"));
    l->InsertColumn(1, ("GPS Latitude"));
    l->InsertColumn(2, ("GPS Longitude"));
    l->InsertColumn(3, ("ID"));
    l->InsertColumn(4, ("Frequency"));
    l->InsertColumn(5, ("Message Sent"));
    l->InsertColumn(6, ("Emission Date"));
    l->InsertColumn(7, ("Reception Date"));
    l->InsertColumn(8, ("Value"));


    for(int i=0; i<13; i++)
    {
	l->SetColumnWidth(i, wxLIST_AUTOSIZE);
    }
}



RUPA_Burst_Editing::RUPA_Burst_Editing( wxWindow* parent )
:
Burst_Editing( parent )
{
    Set_Col_Measurement(Burst_Editing_Table);
}

void RUPA_Burst_Editing::On_Add_Measure( wxCommandEvent& event )
{
// TODO: Implement On_Add_Measure
}

void RUPA_Burst_Editing::On_Delete_Measure( wxCommandEvent& event )
{
// TODO: Implement On_Delete_Measure
}

void RUPA_Burst_Editing::On_Close( wxCommandEvent& event )
{
// TODO: Implement On_Close
    this->Destroy();
}
