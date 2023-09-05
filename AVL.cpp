#include <iostream>
#include "AVLTree.h"

using namespace std;


int main()
{
	AVLTree miArbolito;


	miArbolito.root = miArbolito.insert(miArbolito.root, new TreeNode(1));

	miArbolito.root = miArbolito.insert(miArbolito.root, new TreeNode(2));
	miArbolito.print(" ", miArbolito.root, false);
	miArbolito.root = miArbolito.RotacionIzquierda(miArbolito.root);
	miArbolito.root = miArbolito.RotacionDerecha(miArbolito.root);

	miArbolito.print(" ", miArbolito.root, false);

	return 0;
}