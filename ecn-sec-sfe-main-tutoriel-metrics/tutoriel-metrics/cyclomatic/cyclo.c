int operation(char type, double *solde, double montant) {
    double ret = 0;
	if(*solde != 0) {
	    if ((type == '+') || (type == '-')) {
			if (type == '+') {
				*solde += montant;
			}
			if (type == '-') {
				if (montant > *solde) {
					ret = -1;
				}
				else {
					*solde -= montant;
				}
			}
		}
		else {
            ret = -2;
		}
	}
	else {
		ret = -3;
	}
    return ret;
}