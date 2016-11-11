#ifndef GRAFO_H
#define GRAFO_H

class Grafo {
protected:
	map <int , vector <int > > outgoing ;
public:
	Grafo ( const vector <int > & inicioP , const vector <int > & finalP );
	int numOutgoing ( const int nodeID ) const ;
	const vector <int > & adjacent ( const int nodeID ) const ;
};

#endif

