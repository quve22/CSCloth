#ifndef INTERACTIONS_H
#define INTERACTIONS_H

void keyboard(unsigned char key, int x, int y) 
{
	switch(key)
	{
		case 27:
			glutLeaveMainLoop();
			break;
	}
}

#endif //INTERACTIONS_H