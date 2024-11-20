#include "Header.h"


Alert::Alert(type t, int s)
{
	category = t;
	if (severity > 1 && severity < 10) {
		severity = s;
	}

	
}

type Alert::getCategory()
{
	return category;
}

int Alert::getSeverity()
{
	return severity;
}


