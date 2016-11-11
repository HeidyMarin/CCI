#include "Grafo.h"
# include <stdexcept >

Grafo :: Grafo ( const vector <int > & startPoints , const vector <int > & endPoints ) {
	if( startPoints . size () != endPoints . size ()) {
		throw invalid_argument (" Inicio / final listas de puntos difieren en longitud ");
	}
	for( unsigned i = 0; i < startPoints . size (); i++ ) {
		int start = startPoints [i], end = endPoints [i];
		outgoing [ start ]. push_back (end);
		outgoing [end ];
	}
}
int Grafo :: numOutgoing ( const int nodeID ) const {
	return adjacent ( nodeID ). size ();
}

const vector <int > & Grafo :: adjacent ( const int nodeID ) const {
	map <int , vector <int > >:: const_iterator i = outgoing . find ( nodeID )
		;
	if(i == outgoing . end ()) {
		throw invalid_argument (" Nodo invalido ID");
	}
	return i-> second ;
}
