#include <Rcpp.h>
#include "tsne.h"
using namespace Rcpp;

// Below is a simple example of exporting a C++ function to R. You can
// source this function into an R session using the Rcpp::sourceCpp 
// function (or via the Source button on the editor toolbar)

// For more on using Rcpp click the Help button on the editor toolbar

// Function that runs the Barnes-Hut implementation of t-SNE
// [[Rcpp::export]]
Rcpp::List Rtsne_cpp(SEXP X_in, double perplexity_in, double theta_in) {

  Rcpp::NumericMatrix X(X_in); 

  int origN, N, D, no_dims = 2;

	double  *data;
  TSNE* tsne = new TSNE();
  double perplexity = perplexity_in;
  double theta = theta_in;

  origN=X.nrow();
  D=X.ncol();
    
	data = (double*) calloc(D * origN, sizeof(double));
    if(data == NULL) { Rcpp::stop("Memory allocation failed!\n"); }
    for (int i = 0; i < origN; i++){
        for (int j = 0; j < D; j++){
            data[i*D+j] = X(i,j);
        }
    }

    // Make dummy landmarks
    N = origN;
    Rprintf("Read the %i x %i data matrix successfully!\n", N, D);
    int* landmarks = (int*) malloc(N * sizeof(int));
    if(landmarks == NULL) { Rcpp::stop("Memory allocation failed!\n"); }
    for(int n = 0; n < N; n++) landmarks[n] = n;

		double* Y = (double*) malloc(N * no_dims * sizeof(double));
		double* costs = (double*) calloc(N, sizeof(double));
    if(Y == NULL || costs == NULL) { Rcpp::stop("Memory allocation failed!\n"); }
    
    // Run tsne
		tsne->run(data, N, D, Y, no_dims, perplexity, theta);

  	// Save the results
    Rcpp::NumericMatrix Yr(N,no_dims);
    for (int i = 0; i < N; i++){
        for (int j = 0; j < no_dims; j++){
            Yr(i,j) = Y[i*no_dims+j];
        }
    }
    
    Rcpp::NumericVector costsr(N);
    for (int i = 0; i < N; i++){
      costsr(i) = costs[i];
    }
    
    free(data); data = NULL;
  	free(Y); Y = NULL;
		free(costs); costs = NULL;
		free(landmarks); landmarks = NULL;
    delete(tsne);
    
    Rcpp::List output = Rcpp::List::create(Rcpp::_["theta"]=theta, Rcpp::_["perplexity"]=perplexity, Rcpp::_["N"]=N,Rcpp::_["origD"]=D,Rcpp::_["Y"]=Yr, Rcpp::_["costs"]=costsr);
    return output; 
}
