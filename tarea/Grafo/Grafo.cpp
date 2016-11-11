#include "Grafo.h"
# include <stdexcept >

Grafo :: Grafo ( const vector <int > & inicioP , const vector <int > & finalP ) {
	if( inicioP . size () != finalP . size ()) {
		throw invalid_argument (" Inicio no tiene el mismo tamaño que final ");
	}
	for( unsigned i = 0; i < inicioP . size (); i++ ) {
		int inicio = inicioP [i], fin = finalP [i];
		outgoing [ inicio ]. push_back (fin);
		outgoing [fin ];
	}
}
int Grafo :: numOutgoing ( const int nodeID ) const {
	return adjacent ( nodeID ). size ();
}

const vector <int > & Grafo :: adjacent ( const int nodeID ) const {
	map <int , vector <int > >:: const_iterator i = outgoing . find ( nodeID )
																	 ;
	if(i == outgoing . fin ()) {
		throw invalid_argument (" Nodo invalido ID");
	}
	return i-> second ;
}
