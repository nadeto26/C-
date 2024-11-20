#pragma once

enum type { critical, medium, normal, low };
class Alert {

private: 
		type category;
		int severity;
public:
	Alert(type, int);
	type getCategory();
	int getSeverity();



};
