#include "USB.h"
USB::USB(int pid) :id(pid) {
}
int USB::getID() {
	return id;

}