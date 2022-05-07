/*
    POLITEKNIK NEGERI BANDUNG
    D3 Teknik Informatika - 1A
    Developer : 
        - Achmadya Ridwan I 	(211511001)
        - Wildan Setya Nugraha 	(211511032)
    Program     : Kamus Bahasa Indonesia menggunakan AVL Tree
    File        : main.c 
------------------------------------------------------------- */
#include "tampilanUI.h"
#include "fiturKamus.h"
#include "avl.h"

int main(){
	
	//Kamus data
	address *root = NULL;

	
	//Buka dan baca isi file
	root = bukaFile(root); 
	
	//Masuk ke main menu
	while(1){
		system("cls");
		mainMenu(root);
	}
	
	
	return 0;
}
