//gsoap ns service name:	calc
//gsoap ns service style:	rpc
//gsoap ns service encoding:	encoded

//gsoap ns schema namespace: urn:calc
int ns__add(double a, double b, double *result);
int ns__sub(double a, double b, double *result);
int ns__mul(double a, double b, double *result);
int ns__div(double a, double b, double *result);
int ns__pow(double a, double b, double *result);
