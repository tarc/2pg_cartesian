#
# --------------------------------------------------
# Author - Rodrigo Antonio Faccioli
# Date   - 27/01/2014
#
# --------------------------------------------------

#-lgsl -lgslcblas -static
CXX=g++
OPT=  -c -g
OPT_GSL = -Wall -lm -pedantic 

all:protpred-Gromacs-Random_Algorithm_PSP protpred-Gromacs-MC_Metropolis_PSP protpred-Gromacs-Mono_PSP protpred-Gromacs-Dominance protpred-Gromacs-NSGA2_PSP protpred-Gromacs-Sort_Method_Files_by_Front_Dominance protpred-Gromacs-Front

protpred-Gromacs-Random_Algorithm_PSP:protpred-Gromacs-Random_Algorithm.o random_algorithm.o LoadConfig.o topology.o pdbio.o protein.o futil.o pdbatom.o messages.o topologyio.o topologylib.o randomlib.o vector_math.o string_owner.o math_owner.o  osutil.o  load_parameters.o objective.o aminoacids.o aminoacids_io.o populationio.o rotation.o solution.o gromacs_objectives.o solutionio.o algorithms.o
	$(CXX) -o protpred-Gromacs-Random_Algorithm_PSP protpred-Gromacs-Random_Algorithm.o random_algorithm.o LoadConfig.o topology.o pdbio.o protein.o futil.o pdbatom.o messages.o topologyio.o topologylib.o randomlib.o vector_math.o string_owner.o math_owner.o  osutil.o  load_parameters.o objective.o aminoacids.o aminoacids_io.o populationio.o rotation.o solution.o gromacs_objectives.o solutionio.o algorithms.o $(OPT_GSL) 
protpred-Gromacs-MC_Metropolis_PSP:protpred-Gromacs-MC_Metropolis.o mc_metropolis.o LoadConfig.o topology.o pdbio.o protein.o futil.o pdbatom.o messages.o topologyio.o topologylib.o randomlib.o vector_math.o string_owner.o math_owner.o  osutil.o  load_parameters.o objective.o aminoacids.o aminoacids_io.o populationio.o rotation.o solution.o gromacs_objectives.o solutionio.o algorithms.o
	$(CXX) -o protpred-Gromacs-MC_Metropolis_PSP protpred-Gromacs-MC_Metropolis.o mc_metropolis.o LoadConfig.o topology.o pdbio.o protein.o futil.o pdbatom.o messages.o topologyio.o topologylib.o randomlib.o vector_math.o string_owner.o math_owner.o  osutil.o  load_parameters.o objective.o aminoacids.o aminoacids_io.o populationio.o rotation.o solution.o gromacs_objectives.o solutionio.o algorithms.o $(OPT_GSL) 
protpred-Gromacs-Mono_PSP:protpred-Gromacs-Mono.o LoadConfig.o ea_mono.o topology.o pdbio.o protein.o futil.o pdbatom.o messages.o topologyio.o topologylib.o randomlib.o vector_math.o string_owner.o math_owner.o  osutil.o  load_parameters.o objective.o aminoacids.o aminoacids_io.o populationio.o rotation.o solution.o gromacs_objectives.o solutionio.o algorithms.o
	$(CXX) -o protpred-Gromacs-Mono_PSP protpred-Gromacs-Mono.o LoadConfig.o ea_mono.o topology.o pdbio.o protein.o futil.o pdbatom.o messages.o topologyio.o topologylib.o randomlib.o vector_math.o string_owner.o math_owner.o  osutil.o  load_parameters.o objective.o aminoacids.o aminoacids_io.o populationio.o rotation.o solution.o gromacs_objectives.o solutionio.o algorithms.o $(OPT_GSL) 
protpred-Gromacs-Dominance:protpred-Gromacs-Dominance.o LoadConfig.o futil.o messages.o string_owner.o osutil.o load_parameters.o solution.o aminoacids.o objective.o randomlib.o  dominance.o solutionio.o
	$(CXX) -o protpred-Gromacs-Dominance protpred-Gromacs-Dominance.o LoadConfig.o futil.o messages.o string_owner.o osutil.o load_parameters.o solution.o aminoacids.o objective.o randomlib.o  dominance.o solutionio.o $(OPT_GSL) 
protpred-Gromacs-NSGA2_PSP:protpred-Gromacs-NSGA2.o LoadConfig.o ea_mono.o topology.o pdbio.o protein.o futil.o pdbatom.o messages.o topologyio.o topologylib.o randomlib.o vector_math.o string_owner.o math_owner.o  osutil.o  load_parameters.o objective.o aminoacids.o aminoacids_io.o populationio.o rotation.o solution.o gromacs_objectives.o solutionio.o algorithms.o ea_nsga2.o dominance.o
	$(CXX) -o protpred-Gromacs-NSGA2_PSP protpred-Gromacs-NSGA2.o LoadConfig.o ea_mono.o topology.o pdbio.o protein.o futil.o pdbatom.o messages.o topologyio.o topologylib.o randomlib.o vector_math.o string_owner.o math_owner.o  osutil.o  load_parameters.o objective.o aminoacids.o aminoacids_io.o populationio.o rotation.o solution.o gromacs_objectives.o solutionio.o algorithms.o ea_nsga2.o dominance.o $(OPT_GSL) 
protpred-Gromacs-Front:protpred-Gromacs-Front.o LoadConfig.o ea_mono.o topology.o pdbio.o protein.o futil.o pdbatom.o messages.o topologyio.o topologylib.o randomlib.o vector_math.o string_owner.o math_owner.o  osutil.o  load_parameters.o objective.o aminoacids.o aminoacids_io.o populationio.o rotation.o solution.o gromacs_objectives.o solutionio.o algorithms.o ea_nsga2.o dominance.o owner_file_analysis.o
	$(CXX) -o protpred-Gromacs-Front protpred-Gromacs-Front.o LoadConfig.o ea_mono.o topology.o pdbio.o protein.o futil.o pdbatom.o messages.o topologyio.o topologylib.o randomlib.o vector_math.o string_owner.o math_owner.o  osutil.o  load_parameters.o objective.o aminoacids.o aminoacids_io.o populationio.o rotation.o solution.o gromacs_objectives.o solutionio.o algorithms.o ea_nsga2.o dominance.o owner_file_analysis.o $(OPT_GSL) 
protpred-Gromacs-Sort_Method_Files_by_Front_Dominance:protpred-Gromacs-Sort_Method_Files_by_Front_Dominance.o LoadConfig.o ea_mono.o topology.o pdbio.o protein.o futil.o pdbatom.o messages.o topologyio.o topologylib.o randomlib.o vector_math.o string_owner.o math_owner.o  osutil.o  load_parameters.o objective.o aminoacids.o aminoacids_io.o populationio.o rotation.o solution.o gromacs_objectives.o solutionio.o algorithms.o ea_nsga2.o dominance.o owner_file_analysis.o
	$(CXX) -o protpred-Gromacs-Sort_Method_Files_by_Front_Dominance protpred-Gromacs-Sort_Method_Files_by_Front_Dominance.o LoadConfig.o ea_mono.o topology.o pdbio.o protein.o futil.o pdbatom.o messages.o topologyio.o topologylib.o randomlib.o vector_math.o string_owner.o math_owner.o  osutil.o  load_parameters.o objective.o aminoacids.o aminoacids_io.o populationio.o rotation.o solution.o gromacs_objectives.o solutionio.o algorithms.o ea_nsga2.o dominance.o owner_file_analysis.o $(OPT_GSL) 

protpred-Gromacs-Random_Algorithm.o:protpred-Gromacs-Random_Algorithm.c
	$(CXX) $(OPT) protpred-Gromacs-Random_Algorithm.c -I../include

protpred-Gromacs-MC_Metropolis.o:	protpred-Gromacs-MC_Metropolis.c
	$(CXX) $(OPT) protpred-Gromacs-MC_Metropolis.c -I../include

protpred-Gromacs-Mono.o:	protpred-Gromacs-Mono.c
	$(CXX) $(OPT) protpred-Gromacs-Mono.c -I../include

protpred-Gromacs-NSGA2.o:	protpred-Gromacs-NSGA2.c
	$(CXX) $(OPT) protpred-Gromacs-NSGA2.c -I../include

protpred-Gromacs-Dominance.o: protpred-Gromacs-Dominance.c
	$(CXX) $(OPT) protpred-Gromacs-Dominance.c -I../include

protpred-Gromacs-Front.o: protpred-Gromacs-Front.c
	$(CXX) $(OPT) protpred-Gromacs-Front.c -I../include

protpred-Gromacs-Sort_Method_Files_by_Front_Dominance.o: protpred-Gromacs-Sort_Method_Files_by_Front_Dominance.c
	$(CXX) $(OPT) protpred-Gromacs-Sort_Method_Files_by_Front_Dominance.c -I../include

populationio.o:	populationio.c
	$(CXX) $(OPT) populationio.c -I../include

LoadConfig.o:	LoadConfig.cpp
	$(CXX) $(OPT) LoadConfig.cpp -I../include

topology.o:	topology.c
	$(CXX) $(OPT) topology.c -I../include

topologyio.o:	topologyio.c
	$(CXX) $(OPT) topologyio.c -I../include

topologylib.o:	topologylib.c
	$(CXX) $(OPT) topologylib.c -I../include

pdbio.o:	pdbio.c
	$(CXX) $(OPT) pdbio.c -I../include

energy_gromacs.o:	energy_gromacs.c
	$(CXX) $(OPT) energy_gromacs.c -I../include

ea_mono.o:	ea_mono.c
	$(CXX) $(OPT) ea_mono.c -I../include

protein.o:	protein.c
	$(CXX) $(OPT) protein.c -I../include
	
futil.o:	futil.c
	$(CXX) $(OPT) futil.c -I../include

pdbatom.o:	pdbatom.c
	$(CXX) $(OPT) pdbatom.c -I../include

messages.o:	messages.c
	$(CXX) $(OPT) messages.c -I../include

randomlib.o:	randomlib.c
	$(CXX) $(OPT) randomlib.c -I../include

vector_math.o:	vector_math.c
	$(CXX) $(OPT) vector_math.c -I../include

string_owner.o:	string_owner.c
	$(CXX) $(OPT) string_owner.c -I../include

math_owner.o:	math_owner.c
	$(CXX) $(OPT) math_owner.c -I../include
	
osutil.o:	osutil.c
	$(CXX) $(OPT) osutil.c -I../include

load_parameters.o:	load_parameters.c
	$(CXX) $(OPT) load_parameters.c -I../include
	
ea_multi_obj_lib.o:	ea_multi_obj_lib.c
	$(CXX) $(OPT) ea_multi_obj_lib.c -I../include	

objective.o:	objective.c
	$(CXX) $(OPT) objective.c -I../include	

objective_io.o:	objective_io.c
	$(CXX) $(OPT) objective_io.c -I../include	

aminoacids.o:	aminoacids.c
	$(CXX) $(OPT) aminoacids.c -I../include	

aminoacids_io.o:	aminoacids_io.c
	$(CXX) $(OPT) aminoacids_io.c -I../include	

rotation.o:	rotation.c
	$(CXX) $(OPT) rotation.c -I../include	

solution.o:	solution.c
	$(CXX) $(OPT) solution.c -I../include	

solutionio.o:	solutionio.c
	$(CXX) $(OPT) solutionio.c -I../include	

gromacs_objectives.o:	gromacs_objectives.c
	$(CXX) $(OPT) gromacs_objectives.c -I../include	

algorithms.o:	algorithms.c
	$(CXX) $(OPT) algorithms.c -I../include

mc_metropolis.o:	mc_metropolis.c
	$(CXX) $(OPT) mc_metropolis.c -I../include

random_algorithm.o:	random_algorithm.c	
	$(CXX) $(OPT) random_algorithm.c -I../include

dominance.o:	dominance.c	
	$(CXX) $(OPT) dominance.c -I../include

ea_nsga2.o:	ea_nsga2.c	
	$(CXX) $(OPT) ea_nsga2.c -I../include

owner_file_analysis.o:	owner_file_analysis.c	
	$(CXX) $(OPT) owner_file_analysis.c -I../include
