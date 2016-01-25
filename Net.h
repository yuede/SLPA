//============================================================================
// Name        : Net.h
// Author      : Jierui Xie (xiej2@rpi.edu)
// Date        : Oct. 2011
// Version     : v1.0
// Copyright   : All rights reserved.
// Description : SLPA algorithm for community detection.
// Web Site    : https://sites.google.com/site/communitydetectionslpa/
// Publication:
//             J. Xie, B. K. Szymanski and X. Liu, "SLPA: Uncovering Overlapping Communities in Social Networks via A Speaker-listener Interaction Dynamic Process", IEEE ICDM workshop on DMCCI 2011, Vancouver, CA.
//============================================================================


#ifndef NET_H_
#define NET_H_

#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <string>

#include "NODE.h"
#include <tr1/unordered_set>

using namespace std;

typedef std::tr1::unordered_set<int> UOrderedSet_INT;


class Net {
public:
	int N;	  //number of nodes
	int M;    //number of edges
	vector<NODE *> NODES;
	map<int,NODE *> NODESTABLE;

	string networkPath;
	string netName;
	string fileName; //full path
	//---------------
	//---------------

	//---------------
	//Net();
	Net(string path,string name,string fname);
	virtual ~Net();
	//---------------
	int getNumberofEdges();
	void readNet(string fileName, bool isSymmetrize);
	void readNetwork_EdgesList(string,bool, bool);
	void pre_ReadInOneEdge(int fromID,int toID);

	void pre_convert_nbSet2_nbList();
	void showVertices();
	void showVertices_Table();


	//void post_UseLargestComponent();
	//void post_UseLargestComponent_UnorderSet_cpmpointer();
	//vector<vector<int> > pre_findAllConnectedComponents_InOneCluster_CPM(vector<vector<int> >& cpm);
	//vector<vector<int> > pre_findAllConnectedComponents_InOneCluster_CPMpointer_UnorderSet(vector<vector<int> >& cpm);


	void pre_findGiantComponents();

};

#endif /* NET_H_ */
