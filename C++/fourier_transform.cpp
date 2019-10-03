// Work by Lin, Tzu-Heng
// W42, 2014011054
// Dept. of Electronic Engineering, Tsinghua University
// DSP Course Work
// modified by juankcl 

// included several .h
# include "complex.h"	// definition of struct complex, Calculation of WN[]
# include "dft.h"		// DFT
# include "dit_fft.h"	// DIT-FFT
# include "dif_fft.h"	// DIF-FFT
# include "validate_n_evaluate.h"	// validate_result(), evaluate_performance()

int main(int argc, char ** argv) 
{

	cout << "\n\nLin, Tzu-Heng's Work, 2014011054, W42" << endl;
  cout << "\n\nmodified by juank cl " << endl;
	cout << "Starting, This project is to calc DFT in Original-DFT / DIT-FFT / DIF-FFT..." << endl; 


	// Get argv
		int N_max = atoi(argv[1]); // length of input sequence
			// input 7 to run 2^{10,11,12,13,14,15,16}
			// input 6 to run 2^{10,11,12,13,14,15}
		int validate_or_evaluate = atoi(argv[2]); // 1 for validate, 0 for ignore
		int dft_dit_dif = atoi(argv[3]); // 1:DFT, 2:DIT, 3:DIF, 4:To compute everything for validation

	// Initialize
	// Setup input sequence
		complex* input_seq = new complex[N_max];
		input_seq[0] = complex(1,0);
		input_seq[1] = complex(1,0);
    //options
		// input_seq[2] = complex(1,0);
		// input_seq[3] = complex(1,0);
		// input_seq[4] = complex(1,0);
		// input_seq[5] = complex(1,0);
		// input_seq[6] = complex(1,0);
		// input_seq[7] = complex(1,0);
		// input_seq[8] = complex(1,0);
		// input_seq[9] = complex(1,0);
		// input_seq[10] = complex(1,0);
		// input_seq[11] = complex(1,0);
		// input_seq[12] = complex(1,0);
		// input_seq[13] = complex(1,0);
		// input_seq[14] = complex(1,0);
		// input_seq[15] = complex(1,0);


	// For validation of the result
		if (validate_or_evaluate == 1) {
			validate_result(input_seq, N_max, dft_dit_dif);
			return 0;
		}

	// For compare the performance(run time) of DFT/DIT/DIF
		else if (validate_or_evaluate == 0) {
			evaluate_performance(input_seq, N_max, dft_dit_dif);
			return 0;
		}

	// end
	    return 0;

}
