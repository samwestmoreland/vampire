#ifndef ATOMS_H_
#define ATOMS_H_

#include <string>
#include <vector>

class zval_t{
	public:
	double Jij;
	
	// constructor
	zval_t():
		Jij(0.0)
	{
	};
};

class zvec_t{
	public:
	double Jij[3];
	
	// constructor
	zvec_t()
	{
		Jij[0]=0.0;
		Jij[1]=0.0;
		Jij[2]=0.0;
	};
};

class zten_t{
	public:
	double Jij[3][3];
	
	// constructor
	zten_t()
	{
		Jij[0][0]=0.0;
		Jij[0][1]=0.0;
		Jij[0][2]=0.0;

		Jij[1][0]=0.0;
		Jij[1][1]=0.0;
		Jij[1][2]=0.0;

		Jij[2][0]=0.0;
		Jij[2][1]=0.0;
		Jij[2][2]=0.0;
	};
};

//======================================================================
//                       Global Atomistic Variables
//======================================================================
namespace atoms
{
	//--------------------------
	// Single Variables
	//--------------------------
	extern int num_atoms;			// Number of atoms in simulation
	extern int num_neighbours;	   	// Maximum number of neighbours for Hamiltonian/Lattice
	extern int total_num_neighbours;// Total number of neighbours for system
	extern int exchange_type;
	//--------------------------
	// Array Variables
	//--------------------------

	extern std::vector <double> x_coord_array;
	extern std::vector <double> y_coord_array;
	extern std::vector <double> z_coord_array;
	extern std::vector <int> neighbour_list_array;
	extern std::vector <int> neighbour_interaction_type_array;
	extern std::vector <int> neighbour_list_start_index;
	extern std::vector <int> neighbour_list_end_index;
	extern std::vector <int> type_array;
	extern std::vector <int> category_array;
	extern std::vector <int> grain_array;
	extern std::vector <int> cell_array;

	extern std::vector <double> x_spin_array;
	extern std::vector <double> y_spin_array;
	extern std::vector <double> z_spin_array;

	extern std::vector <double> x_total_spin_field_array;		// Total spin dependent fields
	extern std::vector <double> y_total_spin_field_array;		// Total spin dependent fields
	extern std::vector <double> z_total_spin_field_array;		// Total spin dependent fields
	extern std::vector <double> x_total_external_field_array;	// Total external fields
	extern std::vector <double> y_total_external_field_array;	// Total external fields
	extern std::vector <double> z_total_external_field_array;	// Total external fields
	extern std::vector <double> x_dipolar_field_array;			// Dipolar fields
	extern std::vector <double> y_dipolar_field_array;			// Dipolar fields
	extern std::vector <double> z_dipolar_field_array;			// Dipolar fields
	
	extern std::vector <zval_t> i_exchange_list;
	extern std::vector <zvec_t> v_exchange_list;
	extern std::vector <zten_t> t_exchange_list;
	
}


#endif /*ATOMS_H_*/
