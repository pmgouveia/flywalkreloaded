/*#    
#    This file is part of Flywalk Reloaded. <http://flywalk.eempo.net>
#
#     flywalk@eempo.net - Pedro Gouveia
#
#
#    Flywalk Reloaded is free software: you can redistribute it and/or modify
#    it under the terms of the GNU General Public License as published by
#    the Free Software Foundation, version 2.
#
#    Flywalk Reloaded is distributed in the hope that it will be useful,
#    but WITHOUT ANY WARRANTY; without even the implied warranty of
#    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#    GNU General Public License for more details.
#
#    You should have received a copy of the GNU General Public License
#    along with Flywalk Reloaded.  If not, see <http://www.gnu.org/licenses/>.
*/
#include "fps.h"

clsFPS::clsFPS()
{
	resetCount();
}

clsFPS::~clsFPS()
{
	
}

void clsFPS::resetCount()
{
	counter = 0;
	time(&start);
}
double clsFPS::getCurrentFPS()
{
	return fps;
}
double clsFPS::updateFPS()
{
	++counter;
	time(&end);
	sec = difftime (end, start);
	fps = counter / sec;
	
	return fps;
}
