#include "Cell.h"
#include "Mixer.h"
#include "Well.h"
#include "Coop.h"
#include "Barn.h"
#include "Grassland.h"
#include "Truck.h"
#include <iostream>

using namespace std;
int main(){
	int N = 10;
	Cell **peta;
	peta = new Cell*[N+1];
	for (int i = 1; i <= N; i++){
		peta[i] = new Cell[N+1];
	}
	
	Barn *b[6][6];
	for (int i = 1; i <= 5; i++){
		for (int j = 1; j <= 5; j++){
			b[i][j] = new Barn(i,j);
		}
	}

	Grassland *g[6][6];
	for (int i = 1; i <= 5; i++){
		for (int j = 1; j <= 5; j++){
			g[i][j] = new Grassland(i,j);
		}
	}

	Coop *c[4][11];
	for (int i = 1; i <= 3; i++){
		for (int j = 1; j <= 10; j++){
			c[i][j] = new Coop(i,j);
		}
	}

	for (int i = 1; i <= 3; i++){
		cout << "Facility" << " ";
		for (int j = 1; j <= 10; j++){
			cout << c[i][j]->getKategori() << " ";
		}
		cout << endl;
	}

	for (int i = 1; i <= 5; i++){
		for (int j = 1; j <= 5; j++){
			cout << b[i][j]->getKategori() << " ";
		}
		for (int j = 1; j <= 5; j++){
			cout << g[i][j]->getKategori() << " ";
		}
		cout << endl;
	}
	
	return 0;
}

