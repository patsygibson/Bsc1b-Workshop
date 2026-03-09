#include "Courtyard.h"
#include "NarrPoint.h"

Courtyard::Courtyard(string iName) : Location()
{
	this->name = iName;
}

void Courtyard::setName(string nName)
{
	this->name = nName;
}

string Courtyard::getName()
{
	return this->name;
}

//	NarrPoint seventh = NarrPoint("You both walk outside into the courtyard...", "All of a sudden a guard is stood in front of you, 'Stab him!' the stranger orders you, 'Do it now...', Will you obey the stranger's orders?");
//	seventh.addChoice("Yes");
//	seventh.addChoice("No");
