#pragma once
#include "TreeNode.h"
#include <string>

using std::string;

class AVLTree
{
public:
	TreeNode* RotacionIzquierda(TreeNode* x);
	TreeNode* RotacionDerecha(TreeNode* y);
	TreeNode* root = nullptr;

	// Funciones Basicas
	TreeNode* insert(TreeNode* currentRoot, TreeNode* newNode);
	bool search(TreeNode* currentRoot, int valor);

	void print(string prefix, TreeNode* currentRoot, bool isLeft);
	int Profundidad(TreeNode* Node, TreeNode* CurrentRoot, int contador);
	int Altura(TreeNode* Node);
};

